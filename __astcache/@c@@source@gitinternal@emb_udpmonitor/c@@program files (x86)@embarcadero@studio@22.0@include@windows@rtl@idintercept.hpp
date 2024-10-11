// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdIntercept.pas' rev: 35.00 (Windows)

#ifndef IdinterceptHPP
#define IdinterceptHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <IdGlobal.hpp>
#include <IdBaseComponent.hpp>
#include <IdBuffer.hpp>
#include <IdException.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idintercept
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EIdInterceptCircularLink;
class DELPHICLASS TIdConnectionIntercept;
class DELPHICLASS TIdServerIntercept;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdInterceptCircularLink : public Idexception::EIdException
{
	typedef Idexception::EIdException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdInterceptCircularLink(const System::UnicodeString AMsg)/* overload */ : Idexception::EIdException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdInterceptCircularLink(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Idexception::EIdException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdInterceptCircularLink(NativeUInt Ident)/* overload */ : Idexception::EIdException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdInterceptCircularLink(System::PResStringRec ResStringRec)/* overload */ : Idexception::EIdException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdInterceptCircularLink(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdInterceptCircularLink(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdInterceptCircularLink(const System::UnicodeString Msg, int AHelpContext) : Idexception::EIdException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdInterceptCircularLink(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Idexception::EIdException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdInterceptCircularLink(NativeUInt Ident, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdInterceptCircularLink(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdInterceptCircularLink(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdInterceptCircularLink(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdInterceptCircularLink() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TIdInterceptNotifyEvent)(TIdConnectionIntercept* ASender);

typedef void __fastcall (__closure *TIdInterceptStreamEvent)(TIdConnectionIntercept* ASender, Idglobal::TIdBytes &ABuffer);

class PASCALIMPLEMENTATION TIdConnectionIntercept : public Idbasecomponent::TIdBaseComponent
{
	typedef Idbasecomponent::TIdBaseComponent inherited;
	
protected:
	System::Classes::TComponent* FConnection;
	TIdConnectionIntercept* FIntercept;
	bool FIsClient;
	System::TObject* FData;
	TIdInterceptNotifyEvent FOnConnect;
	TIdInterceptNotifyEvent FOnDisconnect;
	TIdInterceptStreamEvent FOnReceive;
	TIdInterceptStreamEvent FOnSend;
	virtual void __fastcall InitComponent();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall SetIntercept(TIdConnectionIntercept* AValue);
	
public:
	virtual void __fastcall Connect(System::Classes::TComponent* AConnection);
	virtual void __fastcall Disconnect();
	virtual void __fastcall Receive(Idglobal::TIdBytes &VBuffer);
	virtual void __fastcall Send(Idglobal::TIdBytes &VBuffer);
	__property System::Classes::TComponent* Connection = {read=FConnection};
	__property bool IsClient = {read=FIsClient, nodefault};
	__property System::TObject* Data = {read=FData, write=FData};
	
__published:
	__property TIdConnectionIntercept* Intercept = {read=FIntercept, write=SetIntercept};
	__property TIdInterceptNotifyEvent OnConnect = {read=FOnConnect, write=FOnConnect};
	__property TIdInterceptNotifyEvent OnDisconnect = {read=FOnDisconnect, write=FOnDisconnect};
	__property TIdInterceptStreamEvent OnReceive = {read=FOnReceive, write=FOnReceive};
	__property TIdInterceptStreamEvent OnSend = {read=FOnSend, write=FOnSend};
public:
	/* TIdBaseComponent.Create */ inline __fastcall TIdConnectionIntercept(System::Classes::TComponent* AOwner)/* overload */ : Idbasecomponent::TIdBaseComponent(AOwner) { }
	
public:
	/* TIdInitializerComponent.Create */ inline __fastcall TIdConnectionIntercept()/* overload */ : Idbasecomponent::TIdBaseComponent() { }
	
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TIdConnectionIntercept() { }
	
};


class PASCALIMPLEMENTATION TIdServerIntercept : public Idbasecomponent::TIdBaseComponent
{
	typedef Idbasecomponent::TIdBaseComponent inherited;
	
public:
	virtual void __fastcall Init() = 0 ;
	virtual TIdConnectionIntercept* __fastcall Accept(System::Classes::TComponent* AConnection) = 0 ;
public:
	/* TIdBaseComponent.Create */ inline __fastcall TIdServerIntercept(System::Classes::TComponent* AOwner)/* overload */ : Idbasecomponent::TIdBaseComponent(AOwner) { }
	
public:
	/* TIdInitializerComponent.Create */ inline __fastcall TIdServerIntercept()/* overload */ : Idbasecomponent::TIdBaseComponent() { }
	
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TIdServerIntercept() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Idintercept */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDINTERCEPT)
using namespace Idintercept;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdinterceptHPP
