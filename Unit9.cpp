//---------------------------------------------------------------------------

#include <vcl.h>
#include "System.IniFiles.hpp"
#include <algorithm>

#pragma hdrstop

#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
	Caption = "Multicast Port Monitor - " + String(__DATE__) + " at " + String(__TIME__) + String();
	pPortStatsList.reserve(20);
	ReadIniFile();
}
//---------------------------------------------------------------------------



//this is a printf for the Debug Memo widget
void  TForm9::pme(const char* fmt, ...)
{
	//Check length and clear after 1000 lines
	if (MemoDebug->Lines->Count > 1000) MemoDebug->Lines->Clear();

	va_list args;
	va_start(args, fmt);
	char buf[200];
	vsprintf(buf,fmt,args);
	MemoDebug->Lines->Add(buf);
	va_end(args);
	//scroll to bottom of text
	MemoDebug->SelStart = MemoDebug->Lines->Text.Length();
	MemoDebug->SelLength = 1;
	MemoDebug->ClearSelection();
}

void  TForm9::pme(String s)
{
	//Check length and clear after 1000 lines
	if (MemoDebug->Lines->Count > 1000) MemoDebug->Lines->Clear();

	MemoDebug->Lines->Add(s);
	//scroll to bottom of text
	MemoDebug->SelStart = MemoDebug->Lines->Text.Length();
	MemoDebug->SelLength = 1;
	MemoDebug->ClearSelection();
}



char buf[300];
void __fastcall TForm9::IdIPMCastClient1IPMCastRead(TObject *Sender, const TIdBytes AData, TIdSocketHandle *ABinding)
{

	for (auto a : pPortStatsList)
	{
		if (a->port == ABinding->Port) {
			a->count++;
            a->timeSinceLast=0;
		}
	}

	//ShowStats();

	if (CB_Debug->Checked) {
		pme("Rx Multicast==============================================================================================");
		pme("Rx packet size: %d",AData.size());
		MemoDebug->Lines->Add("On Port:" + IntToStr(ABinding->Port));
		//pme("On IP:Port %s: %d",rxIP.c_str(), rxPort); //IdIPMCastClient1->DefaultPort);
	}

}


void __fastcall TForm9::ShowStats()
{

	TM_Summary->Lines->Clear();

	TM_Summary->Lines->Add("Port   Count Rx  TSL");
    TM_Summary->Lines->Add("--------------------");

	for (auto a : pPortStatsList)
	{
		if (a->count ==0)
			sprintf(buf,"%d %7d",a->port, a->count);
		else
			sprintf(buf,"%d %7d %5d",a->port, a->count, a->timeSinceLast);
		if (a->count==0) 			TM_Summary->SelAttributes->Color = clSilver;
		else
		{
			if (a->timeSinceLast<1) TM_Summary->SelAttributes->Color = clGreen;
			else TM_Summary->SelAttributes->Color = clBlack;
		}

		TM_Summary->Lines->Add(buf);

	}



}

void  TForm9::GetPortsToMonitor()
{
	pPortStatsList.clear();
	for (int i=0; i < TM_PortList->Lines->Count; i++) {
		String W = TM_PortList->Lines->Strings[i];

		try
		{
			pPR pr = new PacketRecord;
			pr->port = StrToInt(W);
			pr->count = 0;
			pPortStatsList.push_back(pr);
		}
		catch (Exception *e){}
    }
}

//---------------------------------------------------------------------------
void __fastcall TForm9::BN_ListenClick(TObject *Sender)
{
	if (b_Listening) {
		b_Listening = false;
		BN_Listen->Caption = "Start";
		for (auto a : pPortStatsList) a->ClientSocket->Active=false;
	}
	else
	{
		b_Listening = true;
		BN_Listen->Caption = "Stop";

		GetPortsToMonitor();

		for (auto a : pPortStatsList)
		{
			a->ClientSocket = new TIdIPMCastClient();
			a->ClientSocket->OnIPMCastRead = &IdIPMCastClient1IPMCastRead;
			a->ClientSocket->ReuseSocket = rsTrue;
			a->ClientSocket->DefaultPort = a->port;
			a->ClientSocket->MulticastGroup = TE_MCastGroup->Text;
			a->ClientSocket->Active=true;
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm9::BN_QuitClick(TObject *Sender)
{
	for (auto a : pPortStatsList) a->ClientSocket->Active=false;
    WriteIniFile();
	Close();
}


void __fastcall TForm9::ReadIniFile()
{
	if (FileExists(iniFile))
	{
		pme("Ini file found");
		TIniFile *ini = new TIniFile(iniFile);

		TM_PortList->Lines->Clear();
		int numPorts = ini->ReadInteger( "Form", "NumPorts", 0);
		for (int i=1;i<=numPorts;i++) {
			char portnum[10];
			sprintf(portnum,"Port%02d",i);
			int port = ini->ReadInteger( "Form", portnum, 0);
			TM_PortList->Lines->Append(IntToStr(port));
		}

		int width = ini->ReadInteger( "Form", "width", 780);
		int height = ini->ReadInteger( "Form", "height", 400);
		Form9->Width = std::clamp(width,440,1200);
		Form9->Height = std::clamp(height,270,800);
	}
	else pme("No ini file. Using defaults");
}


void __fastcall TForm9::WriteIniFile()
{
	if (FileExists(iniFile)) pme("Ini file found");
	else pme("No ini file. Creating New ini");

	TIniFile *ini = new TIniFile(iniFile);

	int i;
	for (i=0; i < TM_PortList->Lines->Count; i++)
	{
		String W = TM_PortList->Lines->Strings[i];

		char portnum[10];
		sprintf(portnum,"Port%02d",i+1);
		ini->WriteString ( "Form", portnum, W);
	}
	ini->WriteString ( "Form", "NumPorts", i);

	int width = Form9->Width;
	int height = Form9->Height;
	ini->WriteString ( "Form", "Width", width);
	ini->WriteString ( "Form", "Height", height);
}



//timer is 250ms. Show stats every 250ms, update timeSinceLast every 4th timer so once per second
int frameCounter=0;
void __fastcall TForm9::Timer1Timer(TObject *Sender)
{
	ShowStats();

	if (0==(++frameCounter%4)) {
		for (auto a : pPortStatsList)
			 if (a->count !=0) a->timeSinceLast++;
	}
}

