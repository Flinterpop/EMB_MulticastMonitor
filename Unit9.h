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
#include <Vcl.Grids.hpp>
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
	TTimer *Timer1;
	TButton *BN_AddPort;
	TStringGrid *SG_StreamList;
	void __fastcall IdIPMCastClient1IPMCastRead(TObject *Sender, const TIdBytes AData, TIdSocketHandle *ABinding);
	void __fastcall BN_ListenClick(TObject *Sender);
	void __fastcall BN_QuitClick(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm9(TComponent* Owner);

	void  pme(const char* fmt, ...);
    void  pme(String s);
	void __fastcall ReadIniFile();
	void __fastcall WriteIniFile();

	char iniFile[80] = ".\\MulticastMonitor.ini";
	bool b_Listening=false;


	typedef struct _PortMonitorRecord
	{
		int port = 0;
		int count = 0;
		int timeSinceLast =0;
		char *IP[20];
		TIdIPMCastClient *ClientSocket;
		int Protocol = 0 ;
	} PortMonitorRecord, *pPR;

	std::vector<pPR> pPortStatsList;


	std::vector<TIdIPMCastClient*> socketList ;



    //TIdIPMCastClient *Client[50];

};
//---------------------------------------------------------------------------
extern PACKAGE TForm9 *Form9;
//---------------------------------------------------------------------------
#endif
