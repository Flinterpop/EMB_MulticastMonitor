// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdCustomTransparentProxy.pas' rev: 35.00 (Windows)

#ifndef IdcustomtransparentproxyHPP
#define IdcustomtransparentproxyHPP

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
#include <IdIOHandler.hpp>
#include <IdSocketHandle.hpp>
#include <IdBaseComponent.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idcustomtransparentproxy
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EIdTransparentProxyCircularLink;
class DELPHICLASS EIdTransparentProxyUDPNotSupported;
class DELPHICLASS TIdCustomTransparentProxy;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdTransparentProxyCircularLink : public Idexception::EIdException
{
	typedef Idexception::EIdException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdTransparentProxyCircularLink(const System::UnicodeString AMsg)/* overload */ : Idexception::EIdException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdTransparentProxyCircularLink(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Idexception::EIdException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdTransparentProxyCircularLink(NativeUInt Ident)/* overload */ : Idexception::EIdException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdTransparentProxyCircularLink(System::PResStringRec ResStringRec)/* overload */ : Idexception::EIdException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdTransparentProxyCircularLink(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdTransparentProxyCircularLink(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdTransparentProxyCircularLink(const System::UnicodeString Msg, int AHelpContext) : Idexception::EIdException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdTransparentProxyCircularLink(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Idexception::EIdException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdTransparentProxyCircularLink(NativeUInt Ident, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdTransparentProxyCircularLink(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdTransparentProxyCircularLink(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdTransparentProxyCircularLink(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdTransparentProxyCircularLink() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdTransparentProxyUDPNotSupported : public Idexception::EIdException
{
	typedef Idexception::EIdException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdTransparentProxyUDPNotSupported(const System::UnicodeString AMsg)/* overload */ : Idexception::EIdException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdTransparentProxyUDPNotSupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Idexception::EIdException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdTransparentProxyUDPNotSupported(NativeUInt Ident)/* overload */ : Idexception::EIdException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdTransparentProxyUDPNotSupported(System::PResStringRec ResStringRec)/* overload */ : Idexception::EIdException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdTransparentProxyUDPNotSupported(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdTransparentProxyUDPNotSupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdTransparentProxyUDPNotSupported(const System::UnicodeString Msg, int AHelpContext) : Idexception::EIdException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdTransparentProxyUDPNotSupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Idexception::EIdException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdTransparentProxyUDPNotSupported(NativeUInt Ident, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdTransparentProxyUDPNotSupported(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdTransparentProxyUDPNotSupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdTransparentProxyUDPNotSupported(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdTransparentProxyUDPNotSupported() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TIdCustomTransparentProxyClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TIdCustomTransparentProxyClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TIdCustomTransparentProxy : public Idcomponent::TIdComponent
{
	typedef Idcomponent::TIdComponent inherited;
	
protected:
	System::UnicodeString FHost;
	System::UnicodeString FPassword;
	System::Word FPort;
	Idglobal::TIdIPVersion FIPVersion;
	System::UnicodeString FUsername;
	TIdCustomTransparentProxy* FChainedProxy;
	virtual void __fastcall InitComponent();
	virtual bool __fastcall GetEnabled() = 0 ;
	virtual void __fastcall SetEnabled(bool AValue);
	virtual void __fastcall MakeConnection(Idiohandler::TIdIOHandler* AIOHandler, const System::UnicodeString AHost, const System::Word APort, const Idglobal::TIdIPVersion AIPVersion = (Idglobal::TIdIPVersion)(0x0)) = 0 ;
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall SetChainedProxy(TIdCustomTransparentProxy* const AValue);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	virtual void __fastcall OpenUDP(Idsockethandle::TIdSocketHandle* AHandle, const System::UnicodeString AHost = System::UnicodeString(), const System::Word APort = (System::Word)(0x0), const Idglobal::TIdIPVersion AIPVersion = (Idglobal::TIdIPVersion)(0x0));
	virtual void __fastcall CloseUDP(Idsockethandle::TIdSocketHandle* AHandle);
	virtual int __fastcall RecvFromUDP(Idsockethandle::TIdSocketHandle* AHandle, Idglobal::TIdBytes &ABuffer, System::UnicodeString &VPeerIP, System::Word &VPeerPort, Idglobal::TIdIPVersion &VIPVersion, int AMSec = 0xffffffff);
	virtual void __fastcall SendToUDP(Idsockethandle::TIdSocketHandle* AHandle, const System::UnicodeString AHost, const System::Word APort, const Idglobal::TIdIPVersion AIPVersion, const Idglobal::TIdBytes ABuffer);
	void __fastcall Connect(Idiohandler::TIdIOHandler* AIOHandler, const System::UnicodeString AHost, const System::Word APort, const Idglobal::TIdIPVersion AIPVersion = (Idglobal::TIdIPVersion)(0x0));
	virtual void __fastcall Bind(Idiohandler::TIdIOHandler* AIOHandler, const System::UnicodeString AHost, const System::Word APort, const Idglobal::TIdIPVersion AIPVersion = (Idglobal::TIdIPVersion)(0x0))/* overload */;
	void __fastcall Bind(Idiohandler::TIdIOHandler* AIOHandler, const System::Word APort)/* overload */;
	virtual bool __fastcall Listen(Idiohandler::TIdIOHandler* AIOHandler, const int ATimeOut);
	__property bool Enabled = {read=GetEnabled, write=SetEnabled, nodefault};
	__property System::UnicodeString Host = {read=FHost, write=FHost};
	__property System::UnicodeString Password = {read=FPassword, write=FPassword};
	__property System::Word Port = {read=FPort, write=FPort, nodefault};
	__property Idglobal::TIdIPVersion IPVersion = {read=FIPVersion, write=FIPVersion, default=0};
	__property System::UnicodeString Username = {read=FUsername, write=FUsername};
	__property TIdCustomTransparentProxy* ChainedProxy = {read=FChainedProxy, write=SetChainedProxy};
public:
	/* TIdComponent.Destroy */ inline __fastcall virtual ~TIdCustomTransparentProxy() { }
	
public:
	/* TIdBaseComponent.Create */ inline __fastcall TIdCustomTransparentProxy(System::Classes::TComponent* AOwner)/* overload */ : Idcomponent::TIdComponent(AOwner) { }
	
public:
	/* TIdInitializerComponent.Create */ inline __fastcall TIdCustomTransparentProxy()/* overload */ : Idcomponent::TIdComponent() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Idcustomtransparentproxy */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDCUSTOMTRANSPARENTPROXY)
using namespace Idcustomtransparentproxy;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdcustomtransparentproxyHPP
