//---------------------------------------------------------------------------

#ifndef UDP_MonUnitH
#define UDP_MonUnitH
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
#include <IdUDPBase.hpp>
#include <IdUDPClient.hpp>
#include <Vcl.ComCtrls.hpp>
#include <IdUDPServer.hpp>
#include <Vcl.ExtCtrls.hpp>

#include <vector>


//---------------------------------------------------------------------------
class TUDPMon : public TForm
{
__published:	// IDE-managed Components

	TRichEdit *MemoDebug;
	TButton *Button1;
	TTimer *Timer1;
	TButton *BN_Quit;

	void __fastcall IdIPMCastClientIPMCastRead(TObject *Sender, const TIdBytes AData, TIdSocketHandle *ABinding);

	void __fastcall IdUDPServerUDPRead(TIdUDPListenerThread *AThread, const TIdBytes AData, TIdSocketHandle *ABinding);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall BN_QuitClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TUDPMon(TComponent* Owner);
	void  pme(const char* fmt, ...);
	void  pme_SetColour(TColor color, bool _isBold);
	TColor colour;
	bool isBold =false;

	static const int NumChannels = 20;
	TIdIPMCastClient *IdIPMCastClient[NumChannels];
	TIdUDPServer *IdUDPServer[NumChannels];


	TIdUDPServer* __fastcall CreateUDPListener(int port);
	TIdIPMCastClient* __fastcall CreateMulticastListener(String MCastGroup, int port);

	void __fastcall StartAllMonitors();
	void __fastcall StopAllMonitors();
    int __fastcall checkProto(const TIdBytes AData);


	struct channel {
		bool bMCAST = false;
		int port;
		String MCastGroup;
        char Type[20] = "UNK";
		int Age =0;
		int RxCount=0;
        bool bActive = true;

		TIdIPMCastClient *MCastClient;
		TIdUDPServer *UDPServer;
	} ;

	std::vector<struct channel *> ChannelList;

	struct channel *FindChannel(int port)
	{
		for (struct channel *a: ChannelList)
			if (a->port==port) return a;
		return NULL;
    }


    bool bRunning = false;
};
//---------------------------------------------------------------------------
extern PACKAGE TUDPMon *UDPMon;
//---------------------------------------------------------------------------
#endif
