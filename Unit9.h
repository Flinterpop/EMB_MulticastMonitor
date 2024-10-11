//---------------------------------------------------------------------------

#ifndef Unit9H
#define Unit9H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdGlobal.hpp>
#include <IdIPMCastBase.hpp>
#include <IdIPMCastClient.hpp>
#include <IdSocketHandle.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <vector>


//---------------------------------------------------------------------------
class TForm9 : public TForm
{
__published:	// IDE-managed Components
	TMemo *MemoDebug;
	TButton *BN_Listen;
	TCheckBox *CB_Debug;
	TButton *BN_Quit;
	TGroupBox *GroupBox1;
	TEdit *TE_MCastGroup;
	TGroupBox *GroupBox2;
	TMemo *TM_PortList;
	TTimer *Timer1;
	TRichEdit *TM_Summary;
	void __fastcall IdIPMCastClient1IPMCastRead(TObject *Sender, const TIdBytes AData,
          TIdSocketHandle *ABinding);
	void __fastcall BN_ListenClick(TObject *Sender);
	void __fastcall BN_QuitClick(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm9(TComponent* Owner);

	void  pme(const char* fmt, ...);
    void  pme(String s);
	void  GetPortsToMonitor();
	void __fastcall ReadIniFile();
	void __fastcall WriteIniFile();
	void __fastcall ShowStats();

	char iniFile[80] = ".\\MulticastMonitor.ini";
	bool b_Listening=false;


	typedef struct _PacketRecord
	{
		int port;
		int count;
        int timeSinceLast;
		char *IP[20];
		TIdIPMCastClient *ClientSocket;
	} PacketRecord, *pPR;

   	std::vector<pPR> pPortStatsList;


    //TIdIPMCastClient *Client[50];

};
//---------------------------------------------------------------------------
extern PACKAGE TForm9 *Form9;
//---------------------------------------------------------------------------
#endif
