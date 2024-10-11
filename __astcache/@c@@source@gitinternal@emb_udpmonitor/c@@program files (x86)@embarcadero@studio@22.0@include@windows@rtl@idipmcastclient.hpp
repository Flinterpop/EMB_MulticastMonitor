// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdIPMCastClient.pas' rev: 35.00 (Windows)

#ifndef IdipmcastclientHPP
#define IdipmcastclientHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <IdException.hpp>
#include <IdGlobal.hpp>
#include <IdIPMCastBase.hpp>
#include <IdUDPBase.hpp>
#include <IdComponent.hpp>
#include <IdSocketHandle.hpp>
#include <IdThread.hpp>
#include <IdBaseComponent.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idipmcastclient
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIdIPMCastListenerThread;
class DELPHICLASS TIdIPMCastClient;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TIPMCastReadEvent)(System::TObject* Sender, const Idglobal::TIdBytes AData, Idsockethandle::TIdSocketHandle* ABinding);

class PASCALIMPLEMENTATION TIdIPMCastListenerThread : public Idthread::TIdThread
{
	typedef Idthread::TIdThread inherited;
	
protected:
	Idsockethandle::TIdSocketHandle* IncomingData;
	int FAcceptWait;
	Idglobal::TIdBytes FBuffer;
	int FBufferSize;
	virtual void __fastcall Run();
	
public:
	TIdIPMCastClient* FServer;
	__fastcall TIdIPMCastListenerThread(TIdIPMCastClient* AOwner);
	__fastcall virtual ~TIdIPMCastListenerThread();
	void __fastcall IPMCastRead();
	__property int AcceptWait = {read=FAcceptWait, write=FAcceptWait, nodefault};
};


class PASCALIMPLEMENTATION TIdIPMCastClient : public Idipmcastbase::TIdIPMCastBase
{
	typedef Idipmcastbase::TIdIPMCastBase inherited;
	
protected:
	Idsockethandle::TIdSocketHandles* FBindings;
	int FBufferSize;
	Idsockethandle::TIdSocketHandle* FCurrentBinding;
	TIdIPMCastListenerThread* FListenerThread;
	Idsockethandle::TIdSocketHandleEvent FOnBeforeBind;
	System::Classes::TNotifyEvent FOnAfterBind;
	TIPMCastReadEvent FOnIPMCastRead;
	bool FThreadedEvent;
	virtual void __fastcall CloseBinding();
	virtual void __fastcall DoBeforeBind(Idsockethandle::TIdSocketHandle* AHandle);
	virtual void __fastcall DoAfterBind();
	virtual void __fastcall DoIPMCastRead(const Idglobal::TIdBytes AData, Idsockethandle::TIdSocketHandle* ABinding);
	virtual bool __fastcall GetActive();
	virtual Idsockethandle::TIdSocketHandle* __fastcall GetBinding();
	int __fastcall GetDefaultPort();
	void __fastcall PacketReceived(const Idglobal::TIdBytes AData, Idsockethandle::TIdSocketHandle* ABinding);
	void __fastcall SetBindings(Idsockethandle::TIdSocketHandles* const Value);
	void __fastcall SetDefaultPort(const int AValue);
	virtual void __fastcall InitComponent();
	
public:
	__fastcall virtual ~TIdIPMCastClient();
	
__published:
	__property IPVersion = {default=0};
	__property Active = {default=0};
	__property Idsockethandle::TIdSocketHandles* Bindings = {read=FBindings, write=SetBindings};
	__property int BufferSize = {read=FBufferSize, write=FBufferSize, default=8192};
	__property int DefaultPort = {read=GetDefaultPort, write=SetDefaultPort, nodefault};
	__property MulticastGroup = {default=0};
	__property ReuseSocket = {default=0};
	__property bool ThreadedEvent = {read=FThreadedEvent, write=FThreadedEvent, default=0};
	__property Idsockethandle::TIdSocketHandleEvent OnBeforeBind = {read=FOnBeforeBind, write=FOnBeforeBind};
	__property System::Classes::TNotifyEvent OnAfterBind = {read=FOnAfterBind, write=FOnAfterBind};
	__property TIPMCastReadEvent OnIPMCastRead = {read=FOnIPMCastRead, write=FOnIPMCastRead};
public:
	/* TIdBaseComponent.Create */ inline __fastcall TIdIPMCastClient(System::Classes::TComponent* AOwner)/* overload */ : Idipmcastbase::TIdIPMCastBase(AOwner) { }
	
public:
	/* TIdInitializerComponent.Create */ inline __fastcall TIdIPMCastClient()/* overload */ : Idipmcastbase::TIdIPMCastBase() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const bool DEF_IMP_THREADEDEVENT = false;
}	/* namespace Idipmcastclient */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDIPMCASTCLIENT)
using namespace Idipmcastclient;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdipmcastclientHPP
