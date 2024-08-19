// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdUDPServer.pas' rev: 35.00 (Windows)

#ifndef IdudpserverHPP
#define IdudpserverHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <IdComponent.hpp>
#include <IdException.hpp>
#include <IdGlobal.hpp>
#include <IdSocketHandle.hpp>
#include <IdStackConsts.hpp>
#include <IdThread.hpp>
#include <IdUDPBase.hpp>
#include <IdStack.hpp>
#include <IdBaseComponent.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idudpserver
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIdUDPListenerThread;
class DELPHICLASS TIdUDPServer;
class DELPHICLASS EIdUDPServerException;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TIdUDPListenerThread : public Idthread::TIdThread
{
	typedef Idthread::TIdThread inherited;
	
protected:
	Idsockethandle::TIdSocketHandle* FBinding;
	int FAcceptWait;
	Idglobal::TIdBytes FBuffer;
	System::UnicodeString FCurrentException;
	System::TClass FCurrentExceptionClass;
	System::TObject* FData;
	TIdUDPServer* FServer;
	virtual void __fastcall AfterRun();
	virtual void __fastcall Run();
	
public:
	__fastcall virtual TIdUDPListenerThread(TIdUDPServer* AOwner, Idsockethandle::TIdSocketHandle* ABinding);
	__fastcall virtual ~TIdUDPListenerThread();
	void __fastcall UDPRead();
	void __fastcall UDPException();
	__property int AcceptWait = {read=FAcceptWait, write=FAcceptWait, nodefault};
	__property Idsockethandle::TIdSocketHandle* Binding = {read=FBinding};
	__property TIdUDPServer* Server = {read=FServer};
	__property System::TObject* Data = {read=FData, write=FData};
};


typedef System::Classes::TThreadList TIdUDPListenerThreadList;

typedef System::Classes::TList TIdUDPListenerList;

#ifndef _WIN64
typedef System::TMetaClass* TIdUDPListenerThreadClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TIdUDPListenerThreadClass);
#endif /* _WIN64 */

typedef void __fastcall (__closure *TIdUDPExceptionEvent)(TIdUDPListenerThread* AThread, Idsockethandle::TIdSocketHandle* ABinding, const System::UnicodeString AMessage, const System::TClass AExceptionClass);

typedef void __fastcall (__closure *TUDPReadEvent)(TIdUDPListenerThread* AThread, const Idglobal::TIdBytes AData, Idsockethandle::TIdSocketHandle* ABinding);

class PASCALIMPLEMENTATION TIdUDPServer : public Idudpbase::TIdUDPBase
{
	typedef Idudpbase::TIdUDPBase inherited;
	
protected:
	Idsockethandle::TIdSocketHandles* FBindings;
	Idsockethandle::TIdSocketHandle* FCurrentBinding;
	System::Classes::TThreadList* FListenerThreads;
	TIdUDPListenerThreadClass FThreadClass;
	bool FThreadedEvent;
	Idsockethandle::TIdSocketHandleEvent FOnBeforeBind;
	System::Classes::TNotifyEvent FOnAfterBind;
	TUDPReadEvent FOnUDPRead;
	TIdUDPExceptionEvent FOnUDPException;
	DYNAMIC void __fastcall BroadcastEnabledChanged();
	virtual void __fastcall CloseBinding();
	virtual void __fastcall DoBeforeBind(Idsockethandle::TIdSocketHandle* AHandle);
	virtual void __fastcall DoAfterBind();
	virtual void __fastcall DoOnUDPException(TIdUDPListenerThread* AThread, Idsockethandle::TIdSocketHandle* ABinding, const System::UnicodeString AMessage, const System::TClass AExceptionClass);
	virtual void __fastcall DoUDPRead(TIdUDPListenerThread* AThread, const Idglobal::TIdBytes AData, Idsockethandle::TIdSocketHandle* ABinding);
	virtual bool __fastcall GetActive();
	virtual Idsockethandle::TIdSocketHandle* __fastcall GetBinding();
	System::Word __fastcall GetDefaultPort();
	virtual void __fastcall InitComponent();
	void __fastcall SetBindings(Idsockethandle::TIdSocketHandles* const Value);
	void __fastcall SetDefaultPort(const System::Word AValue);
	
public:
	__fastcall virtual ~TIdUDPServer();
	__property TIdUDPListenerThreadClass ThreadClass = {read=FThreadClass, write=FThreadClass};
	
__published:
	__property Idsockethandle::TIdSocketHandles* Bindings = {read=FBindings, write=SetBindings};
	__property System::Word DefaultPort = {read=GetDefaultPort, write=SetDefaultPort, nodefault};
	__property ReuseSocket = {default=0};
	__property bool ThreadedEvent = {read=FThreadedEvent, write=FThreadedEvent, default=0};
	__property Idsockethandle::TIdSocketHandleEvent OnBeforeBind = {read=FOnBeforeBind, write=FOnBeforeBind};
	__property System::Classes::TNotifyEvent OnAfterBind = {read=FOnAfterBind, write=FOnAfterBind};
	__property TUDPReadEvent OnUDPRead = {read=FOnUDPRead, write=FOnUDPRead};
	__property TIdUDPExceptionEvent OnUDPException = {read=FOnUDPException, write=FOnUDPException};
public:
	/* TIdBaseComponent.Create */ inline __fastcall TIdUDPServer(System::Classes::TComponent* AOwner)/* overload */ : Idudpbase::TIdUDPBase(AOwner) { }
	
public:
	/* TIdInitializerComponent.Create */ inline __fastcall TIdUDPServer()/* overload */ : Idudpbase::TIdUDPBase() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdUDPServerException : public Idudpbase::EIdUDPException
{
	typedef Idudpbase::EIdUDPException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdUDPServerException(const System::UnicodeString AMsg)/* overload */ : Idudpbase::EIdUDPException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdUDPServerException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Idudpbase::EIdUDPException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdUDPServerException(NativeUInt Ident)/* overload */ : Idudpbase::EIdUDPException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdUDPServerException(System::PResStringRec ResStringRec)/* overload */ : Idudpbase::EIdUDPException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdUDPServerException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Idudpbase::EIdUDPException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdUDPServerException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Idudpbase::EIdUDPException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdUDPServerException(const System::UnicodeString Msg, int AHelpContext) : Idudpbase::EIdUDPException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdUDPServerException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Idudpbase::EIdUDPException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdUDPServerException(NativeUInt Ident, int AHelpContext)/* overload */ : Idudpbase::EIdUDPException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdUDPServerException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Idudpbase::EIdUDPException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdUDPServerException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idudpbase::EIdUDPException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdUDPServerException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idudpbase::EIdUDPException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdUDPServerException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Idudpserver */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDUDPSERVER)
using namespace Idudpserver;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdudpserverHPP
