
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
__fastcall TForm9::TForm9(TComponent* Owner) : TForm(Owner)
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
	if (CB_Debug->Checked) {
		pme("Rx Multicast==============================================================================================");
		pme("Rx packet size: %d",AData.size());
		MemoDebug->Lines->Add("On Port:" + IntToStr(ABinding->Port));
	}


	int bindPort =  ABinding->Port;
	for (int i = 1; i < SG_StreamList->RowCount; i++)
	{
		int p = StrToInt(SG_StreamList->Cells[0][i]);
		if (p==bindPort) {
			int  a = StrToInt(SG_StreamList->Cells[2][i]);
			SG_StreamList->Cells[2][i]= IntToStr(a+1);
			SG_StreamList->Cells[3][i]= "0"; //			timeSinceLast=0;
            return;
		}
	}
}


//---------------------------------------------------------------------------
void __fastcall TForm9::BN_ListenClick(TObject *Sender)
{
	if (b_Listening)
	{
		b_Listening = false;
		BN_Listen->Caption = "Start";
		for (auto a : socketList) a->Active=false;
	}
	else
	{
		b_Listening = true;
		BN_Listen->Caption = "Stop";

		socketList.clear();
		int n = SG_StreamList->RowCount;
		for (int i = 1; i < n; i++) {
			int p = StrToInt(SG_StreamList->Cells[0][i]);
			String IP = SG_StreamList->Cells[1][i];
			pme("Adding %d on %s",p,IP.c_str()	);
            pme(IP);
			TIdIPMCastClient *mcs = new TIdIPMCastClient();
			mcs->OnIPMCastRead = &IdIPMCastClient1IPMCastRead;
			mcs->ReuseSocket = rsTrue;
			mcs->DefaultPort = p;
			mcs->MulticastGroup = IP;
			mcs->Active=true;
			socketList.push_back(mcs);
		}
	}
}
//---------------------------------------------------------------------------



void __fastcall TForm9::BN_QuitClick(TObject *Sender)
{
	for (auto a : pPortStatsList) a->ClientSocket->Active=false;
    //WriteIniFile();
	Close();
}


void __fastcall TForm9::ReadIniFile()
{
	if (FileExists(iniFile))
	{
		TIniFile *ini = new TIniFile(iniFile);

		int numPorts = ini->ReadInteger( "Form", "NumPorts", 0);

		SG_StreamList->RowCount = numPorts+1;
		pme("Ini file found with %d ports to monitor",numPorts);

		SG_StreamList->Cells[0][0]= L"Port";
		SG_StreamList->Cells[1][0]= L"IP";
		SG_StreamList->Cells[2][0]= L"Count Rx";
		SG_StreamList->Cells[3][0]= L"TSL";
		SG_StreamList->Cells[4][0]= L"Protocol";


		for (int i=1;i<=numPorts;i++) {
			char portnum[10];
			sprintf(portnum,"Port%02d",i);
			int port = ini->ReadInteger( "Form", portnum, 0);

			char protocol[20];
			sprintf(protocol,"Protocol%02d",i);
			auto s = ini->ReadString( "Form", protocol, "--");

			char IP[20];
			sprintf(IP,"IP%02d",i);
			auto I = ini->ReadString( "Form", IP, "192.168.1.255");

			SG_StreamList->Cells[0][i]= IntToStr(port);
			SG_StreamList->Cells[1][i]= I;
			SG_StreamList->Cells[2][i]= L"0";
			SG_StreamList->Cells[3][i]= L"0";
			SG_StreamList->Cells[4][i]= s;
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

	/*
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
    */
}



//timer is 250ms. Show stats every 250ms, update timeSinceLast every 4th timer so once per second
int frameCounter=0;
void __fastcall TForm9::Timer1Timer(TObject *Sender)
{
	for (int i = 1; i < SG_StreamList->RowCount; i++)
	{
		int  tsl = StrToInt(SG_StreamList->Cells[3][i]);
		SG_StreamList->Cells[3][i] = IntToStr(tsl+1);
	}

}

