// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdUDPClient.pas' rev: 35.00 (Windows)

#ifndef IdudpclientHPP
#define IdudpclientHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <IdUDPBase.hpp>
#include <IdGlobal.hpp>
#include <IdSocketHandle.hpp>
#include <IdCustomTransparentProxy.hpp>
#include <IdException.hpp>
#include <System.SysUtils.hpp>
#include <IdComponent.hpp>
#include <IdBaseComponent.hpp>

//-- user supplied -----------------------------------------------------------
#if defined(_VCL_ALIAS_RECORDS)
#if !defined(UNICODE)
#pragma alias "@Idudpclient@TIdUDPClient@SetPortA$qqrxus"="@Idudpclient@TIdUDPClient@SetPort$qqrxus"
#else
#pragma alias "@Idudpclient@TIdUDPClient@SetPortW$qqrxus"="@Idudpclient@TIdUDPClient@SetPort$qqrxus"
#endif
#endif

namespace Idudpclient
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EIdMustUseOpenProxy;
class DELPHICLASS TIdUDPClient;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdMustUseOpenProxy : public Idudpbase::EIdUDPException
{
	typedef Idudpbase::EIdUDPException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdMustUseOpenProxy(const System::UnicodeString AMsg)/* overload */ : Idudpbase::EIdUDPException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdMustUseOpenProxy(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Idudpbase::EIdUDPException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdMustUseOpenProxy(NativeUInt Ident)/* overload */ : Idudpbase::EIdUDPException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdMustUseOpenProxy(System::PResStringRec ResStringRec)/* overload */ : Idudpbase::EIdUDPException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdMustUseOpenProxy(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Idudpbase::EIdUDPException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdMustUseOpenProxy(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Idudpbase::EIdUDPException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdMustUseOpenProxy(const System::UnicodeString Msg, int AHelpContext) : Idudpbase::EIdUDPException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdMustUseOpenProxy(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Idudpbase::EIdUDPException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdMustUseOpenProxy(NativeUInt Ident, int AHelpContext)/* overload */ : Idudpbase::EIdUDPException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdMustUseOpenProxy(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Idudpbase::EIdUDPException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdMustUseOpenProxy(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idudpbase::EIdUDPException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdMustUseOpenProxy(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idudpbase::EIdUDPException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdMustUseOpenProxy() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TIdUDPClient : public Idudpbase::TIdUDPBase
{
	typedef Idudpbase::TIdUDPBase inherited;
	
protected:
	System::UnicodeString FBoundIP;
	System::Word FBoundPort;
	System::Word FBoundPortMin;
	System::Word FBoundPortMax;
	bool FProxyOpened;
	System::Classes::TNotifyEvent FOnConnected;
	System::Classes::TNotifyEvent FOnDisconnected;
	bool FConnected;
	Idcustomtransparentproxy::TIdCustomTransparentProxy* FTransparentProxy;
	bool FImplicitTransparentProxy;
	bool __fastcall UseProxy();
	void __fastcall RaiseUseProxyError();
	virtual void __fastcall DoOnConnected();
	virtual void __fastcall DoOnDisconnected();
	virtual void __fastcall InitComponent();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetIPVersion(const Idglobal::TIdIPVersion AValue);
	virtual void __fastcall SetHost(const System::UnicodeString AValue);
	virtual void __fastcall SetPort(const System::Word AValue);
	void __fastcall SetTransparentProxy(Idcustomtransparentproxy::TIdCustomTransparentProxy* AProxy);
	virtual Idsockethandle::TIdSocketHandle* __fastcall GetBinding();
	Idcustomtransparentproxy::TIdCustomTransparentProxy* __fastcall GetTransparentProxy();
	
public:
	__fastcall virtual ~TIdUDPClient();
	void __fastcall OpenProxy();
	void __fastcall CloseProxy();
	virtual void __fastcall Connect();
	virtual void __fastcall Disconnect();
	bool __fastcall Connected();
	virtual int __fastcall ReceiveBuffer(Idglobal::TIdBytes &ABuffer, const int AMSec = 0xffffffff)/* overload */;
	virtual int __fastcall ReceiveBuffer(Idglobal::TIdBytes &ABuffer, System::UnicodeString &VPeerIP, System::Word &VPeerPort, int AMSec = 0xffffffff)/* overload */;
	virtual int __fastcall ReceiveBuffer(Idglobal::TIdBytes &ABuffer, System::UnicodeString &VPeerIP, System::Word &VPeerPort, Idglobal::TIdIPVersion &VIPVersion, const int AMSec = 0xffffffff)/* overload */;
	HIDESBASE void __fastcall Send(const System::UnicodeString AData, Idglobal::_di_IIdTextEncoding AByteEncoding = Idglobal::_di_IIdTextEncoding())/* overload */;
	virtual void __fastcall SendBuffer(const System::UnicodeString AHost, const System::Word APort, const Idglobal::TIdBytes ABuffer)/* overload */;
	HIDESBASE void __fastcall SendBuffer(const Idglobal::TIdBytes ABuffer)/* overload */;
	virtual void __fastcall SendBuffer(const System::UnicodeString AHost, const System::Word APort, const Idglobal::TIdIPVersion AIPVersion, const Idglobal::TIdBytes ABuffer)/* overload */;
	
__published:
	__property System::UnicodeString BoundIP = {read=FBoundIP, write=FBoundIP};
	__property System::Word BoundPort = {read=FBoundPort, write=FBoundPort, default=0};
	__property System::Word BoundPortMin = {read=FBoundPortMin, write=FBoundPortMin, default=0};
	__property System::Word BoundPortMax = {read=FBoundPortMax, write=FBoundPortMax, default=0};
	__property IPVersion = {default=0};
	__property Host = {default=0};
	__property Port;
	__property ReceiveTimeout = {default=-2};
	__property ReuseSocket = {default=0};
	__property Idcustomtransparentproxy::TIdCustomTransparentProxy* TransparentProxy = {read=GetTransparentProxy, write=SetTransparentProxy};
	__property System::Classes::TNotifyEvent OnConnected = {read=FOnConnected, write=FOnConnected};
	__property System::Classes::TNotifyEvent OnDisconnected = {read=FOnDisconnected, write=FOnDisconnected};
public:
	/* TIdBaseComponent.Create */ inline __fastcall TIdUDPClient(System::Classes::TComponent* AOwner)/* overload */ : Idudpbase::TIdUDPBase(AOwner) { }
	
public:
	/* TIdInitializerComponent.Create */ inline __fastcall TIdUDPClient()/* overload */ : Idudpbase::TIdUDPBase() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Idudpclient */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDUDPCLIENT)
using namespace Idudpclient;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdudpclientHPP
