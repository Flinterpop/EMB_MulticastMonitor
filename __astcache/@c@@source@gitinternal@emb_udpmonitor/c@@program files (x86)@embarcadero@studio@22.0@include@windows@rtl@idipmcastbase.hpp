// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdIPMCastBase.pas' rev: 35.00 (Windows)

#ifndef IdipmcastbaseHPP
#define IdipmcastbaseHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <IdComponent.hpp>
#include <IdException.hpp>
#include <IdGlobal.hpp>
#include <IdSocketHandle.hpp>
#include <IdStack.hpp>
#include <IdBaseComponent.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------
#if defined(_VCL_ALIAS_RECORDS)
#if !defined(UNICODE)
#pragma alias "@Idipmcastbase@TIdIPMCastBase@SetPortA$qqrxi"="@Idipmcastbase@TIdIPMCastBase@SetPort$qqrxi"
#else
#pragma alias "@Idipmcastbase@TIdIPMCastBase@SetPortW$qqrxi"="@Idipmcastbase@TIdIPMCastBase@SetPort$qqrxi"
#endif
#endif

namespace Idipmcastbase
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIdIPMCastBase;
class DELPHICLASS EIdMCastException;
class DELPHICLASS EIdMCastNoBindings;
class DELPHICLASS EIdMCastNotValidAddress;
class DELPHICLASS EIdMCastReceiveErrorZeroBytes;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TIdIPMv6Scope : unsigned char { IdIPv6MC_InterfaceLocal, IdIPv6MC_LinkLocal, IdIPv6MC_AdminLocal, IdIPv6MC_SiteLocal, IdIPv6MC_OrgLocal, IdIPv6MC_Global };

typedef System::Int8 TIdIPMCValidScopes;

class PASCALIMPLEMENTATION TIdIPMCastBase : public Idcomponent::TIdComponent
{
	typedef Idcomponent::TIdComponent inherited;
	
protected:
	bool FDsgnActive;
	System::UnicodeString FMulticastGroup;
	int FPort;
	Idglobal::TIdIPVersion FIPVersion;
	Idglobal::TIdReuseSocket FReuseSocket;
	virtual void __fastcall CloseBinding() = 0 ;
	virtual bool __fastcall GetActive();
	virtual Idsockethandle::TIdSocketHandle* __fastcall GetBinding() = 0 ;
	virtual void __fastcall Loaded();
	virtual void __fastcall SetActive(const bool Value);
	virtual void __fastcall SetMulticastGroup(const System::UnicodeString Value);
	virtual void __fastcall SetPort(const int Value);
	virtual Idglobal::TIdIPVersion __fastcall GetIPVersion();
	virtual void __fastcall SetIPVersion(const Idglobal::TIdIPVersion AValue);
	__property bool Active = {read=GetActive, write=SetActive, default=0};
	__property System::UnicodeString MulticastGroup = {read=FMulticastGroup, write=SetMulticastGroup};
	__property int Port = {read=FPort, write=SetPort, nodefault};
	__property Idglobal::TIdIPVersion IPVersion = {read=GetIPVersion, write=SetIPVersion, default=0};
	virtual void __fastcall InitComponent();
	
public:
	bool __fastcall IsValidMulticastGroup(const System::UnicodeString Value);
	__classmethod System::UnicodeString __fastcall SetIPv6AddrScope(const System::UnicodeString AVarIPv6Addr, const TIdIPMv6Scope AScope)/* overload */;
	__classmethod System::UnicodeString __fastcall SetIPv6AddrScope(const System::UnicodeString AVarIPv6Addr, const TIdIPMCValidScopes AScope)/* overload */;
	__property Idglobal::TIdReuseSocket ReuseSocket = {read=FReuseSocket, write=FReuseSocket, default=0};
public:
	/* TIdComponent.Destroy */ inline __fastcall virtual ~TIdIPMCastBase() { }
	
public:
	/* TIdBaseComponent.Create */ inline __fastcall TIdIPMCastBase(System::Classes::TComponent* AOwner)/* overload */ : Idcomponent::TIdComponent(AOwner) { }
	
public:
	/* TIdInitializerComponent.Create */ inline __fastcall TIdIPMCastBase()/* overload */ : Idcomponent::TIdComponent() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdMCastException : public Idexception::EIdException
{
	typedef Idexception::EIdException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdMCastException(const System::UnicodeString AMsg)/* overload */ : Idexception::EIdException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdMCastException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Idexception::EIdException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdMCastException(NativeUInt Ident)/* overload */ : Idexception::EIdException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdMCastException(System::PResStringRec ResStringRec)/* overload */ : Idexception::EIdException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdMCastException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdMCastException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdMCastException(const System::UnicodeString Msg, int AHelpContext) : Idexception::EIdException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdMCastException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Idexception::EIdException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdMCastException(NativeUInt Ident, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdMCastException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdMCastException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdMCastException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdMCastException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdMCastNoBindings : public EIdMCastException
{
	typedef EIdMCastException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdMCastNoBindings(const System::UnicodeString AMsg)/* overload */ : EIdMCastException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdMCastNoBindings(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIdMCastException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdMCastNoBindings(NativeUInt Ident)/* overload */ : EIdMCastException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdMCastNoBindings(System::PResStringRec ResStringRec)/* overload */ : EIdMCastException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdMCastNoBindings(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdMCastException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdMCastNoBindings(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdMCastException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdMCastNoBindings(const System::UnicodeString Msg, int AHelpContext) : EIdMCastException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdMCastNoBindings(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIdMCastException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdMCastNoBindings(NativeUInt Ident, int AHelpContext)/* overload */ : EIdMCastException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdMCastNoBindings(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIdMCastException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdMCastNoBindings(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdMCastException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdMCastNoBindings(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdMCastException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdMCastNoBindings() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdMCastNotValidAddress : public EIdMCastException
{
	typedef EIdMCastException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdMCastNotValidAddress(const System::UnicodeString AMsg)/* overload */ : EIdMCastException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdMCastNotValidAddress(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIdMCastException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdMCastNotValidAddress(NativeUInt Ident)/* overload */ : EIdMCastException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdMCastNotValidAddress(System::PResStringRec ResStringRec)/* overload */ : EIdMCastException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdMCastNotValidAddress(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdMCastException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdMCastNotValidAddress(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdMCastException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdMCastNotValidAddress(const System::UnicodeString Msg, int AHelpContext) : EIdMCastException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdMCastNotValidAddress(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIdMCastException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdMCastNotValidAddress(NativeUInt Ident, int AHelpContext)/* overload */ : EIdMCastException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdMCastNotValidAddress(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIdMCastException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdMCastNotValidAddress(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdMCastException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdMCastNotValidAddress(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdMCastException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdMCastNotValidAddress() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdMCastReceiveErrorZeroBytes : public EIdMCastException
{
	typedef EIdMCastException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdMCastReceiveErrorZeroBytes(const System::UnicodeString AMsg)/* overload */ : EIdMCastException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdMCastReceiveErrorZeroBytes(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EIdMCastException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdMCastReceiveErrorZeroBytes(NativeUInt Ident)/* overload */ : EIdMCastException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdMCastReceiveErrorZeroBytes(System::PResStringRec ResStringRec)/* overload */ : EIdMCastException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdMCastReceiveErrorZeroBytes(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdMCastException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdMCastReceiveErrorZeroBytes(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EIdMCastException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdMCastReceiveErrorZeroBytes(const System::UnicodeString Msg, int AHelpContext) : EIdMCastException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdMCastReceiveErrorZeroBytes(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EIdMCastException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdMCastReceiveErrorZeroBytes(NativeUInt Ident, int AHelpContext)/* overload */ : EIdMCastException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdMCastReceiveErrorZeroBytes(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EIdMCastException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdMCastReceiveErrorZeroBytes(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdMCastException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdMCastReceiveErrorZeroBytes(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EIdMCastException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdMCastReceiveErrorZeroBytes() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Byte IPMCastLo = System::Byte(0xe0);
static const System::Byte IPMCastHi = System::Byte(0xef);
#define DEF_IPv6_MGROUP L"FF01:0:0:0:0:0:0:1"
}	/* namespace Idipmcastbase */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDIPMCASTBASE)
using namespace Idipmcastbase;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdipmcastbaseHPP
