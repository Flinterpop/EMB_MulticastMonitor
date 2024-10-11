// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdBuffer.pas' rev: 35.00 (Windows)

#ifndef IdbufferHPP
#define IdbufferHPP

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
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idbuffer
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EIdNotEnoughDataInBuffer;
class DELPHICLASS EIdTooMuchDataInBuffer;
class DELPHICLASS TIdBuffer;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdNotEnoughDataInBuffer : public Idexception::EIdException
{
	typedef Idexception::EIdException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdNotEnoughDataInBuffer(const System::UnicodeString AMsg)/* overload */ : Idexception::EIdException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdNotEnoughDataInBuffer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Idexception::EIdException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdNotEnoughDataInBuffer(NativeUInt Ident)/* overload */ : Idexception::EIdException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdNotEnoughDataInBuffer(System::PResStringRec ResStringRec)/* overload */ : Idexception::EIdException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdNotEnoughDataInBuffer(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdNotEnoughDataInBuffer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdNotEnoughDataInBuffer(const System::UnicodeString Msg, int AHelpContext) : Idexception::EIdException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdNotEnoughDataInBuffer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Idexception::EIdException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdNotEnoughDataInBuffer(NativeUInt Ident, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdNotEnoughDataInBuffer(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdNotEnoughDataInBuffer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdNotEnoughDataInBuffer(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdNotEnoughDataInBuffer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdTooMuchDataInBuffer : public Idexception::EIdException
{
	typedef Idexception::EIdException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdTooMuchDataInBuffer(const System::UnicodeString AMsg)/* overload */ : Idexception::EIdException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdTooMuchDataInBuffer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Idexception::EIdException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdTooMuchDataInBuffer(NativeUInt Ident)/* overload */ : Idexception::EIdException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdTooMuchDataInBuffer(System::PResStringRec ResStringRec)/* overload */ : Idexception::EIdException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdTooMuchDataInBuffer(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdTooMuchDataInBuffer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdTooMuchDataInBuffer(const System::UnicodeString Msg, int AHelpContext) : Idexception::EIdException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdTooMuchDataInBuffer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Idexception::EIdException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdTooMuchDataInBuffer(NativeUInt Ident, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdTooMuchDataInBuffer(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdTooMuchDataInBuffer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdTooMuchDataInBuffer(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdTooMuchDataInBuffer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TIdBufferBytesRemoved)(System::TObject* ASender, int ABytes);

class PASCALIMPLEMENTATION TIdBuffer : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString __fastcall GetAsString();
	
protected:
	Idglobal::TIdBytes FBytes;
	Idglobal::_di_IIdTextEncoding FByteEncoding;
	int FGrowthFactor;
	int FHeadIndex;
	TIdBufferBytesRemoved FOnBytesRemoved;
	int FSize;
	void __fastcall CheckAdd(int AByteCount, const int AIndex);
	void __fastcall CheckByteCount(int &VByteCount, const int AIndex);
	int __fastcall GetCapacity();
	void __fastcall SetCapacity(int AValue);
	
public:
	void __fastcall Clear();
	__fastcall TIdBuffer()/* overload */;
	__fastcall TIdBuffer(TIdBufferBytesRemoved AOnBytesRemoved)/* overload */;
	__fastcall TIdBuffer(int AGrowthFactor)/* overload */;
	__fastcall TIdBuffer(const Idglobal::TIdBytes ABytes, const int ALength)/* overload */;
	void __fastcall CompactHead(bool ACanShrink = true);
	__fastcall virtual ~TIdBuffer();
	System::UnicodeString __fastcall Extract _DEPRECATED_ATTRIBUTE1("Use ExtractToString()") (int AByteCount = 0xffffffff, Idglobal::_di_IIdTextEncoding AByteEncoding = Idglobal::_di_IIdTextEncoding());
	System::UnicodeString __fastcall ExtractToString(int AByteCount = 0xffffffff, Idglobal::_di_IIdTextEncoding AByteEncoding = Idglobal::_di_IIdTextEncoding());
	void __fastcall ExtractToStream(System::Classes::TStream* const AStream, int AByteCount = 0xffffffff, const int AIndex = 0xffffffff);
	void __fastcall ExtractToIdBuffer(TIdBuffer* ABuffer, int AByteCount = 0xffffffff, const int AIndex = 0xffffffff);
	void __fastcall ExtractToBytes(Idglobal::TIdBytes &VBytes, int AByteCount = 0xffffffff, bool AAppend = true, int AIndex = 0xffffffff);
	System::Byte __fastcall ExtractToUInt8(const int AIndex);
	System::Byte __fastcall ExtractToByte _DEPRECATED_ATTRIBUTE1("Use ExtractToUInt8()") (const int AIndex);
	System::Word __fastcall ExtractToUInt16(const int AIndex, bool AConvert = true);
	System::Word __fastcall ExtractToWord _DEPRECATED_ATTRIBUTE1("Use ExtractToUInt16()") (const int AIndex);
	unsigned __fastcall ExtractToUInt32(const int AIndex, bool AConvert = true);
	unsigned __fastcall ExtractToLongWord _DEPRECATED_ATTRIBUTE1("Use ExtractToUInt32()") (const int AIndex);
	unsigned __int64 __fastcall ExtractToUInt64(const int AIndex, bool AConvert = true);
	void __fastcall ExtractToIPv6(const int AIndex, Idglobal::TIdIPv6Address &VAddress);
	int __fastcall IndexOf(const System::Byte AByte, int AStartPos = 0x0)/* overload */;
	int __fastcall IndexOf(const Idglobal::TIdBytes ABytes, int AStartPos = 0x0)/* overload */;
	int __fastcall IndexOf(const System::UnicodeString AString, int AStartPos = 0x0, Idglobal::_di_IIdTextEncoding AByteEncoding = Idglobal::_di_IIdTextEncoding())/* overload */;
	System::Byte __fastcall PeekByte(int AIndex);
	void __fastcall Remove(int AByteCount);
	void __fastcall SaveToStream(System::Classes::TStream* const AStream);
	void __fastcall Write(const System::UnicodeString AString, Idglobal::_di_IIdTextEncoding AByteEncoding = Idglobal::_di_IIdTextEncoding(), const int ADestIndex = 0xffffffff)/* overload */;
	void __fastcall Write(const Idglobal::TIdBytes ABytes, const int ADestIndex = 0xffffffff)/* overload */;
	void __fastcall Write(const Idglobal::TIdBytes ABytes, const int ALength, const int AOffset, const int ADestIndex = 0xffffffff)/* overload */;
	void __fastcall Write(System::Classes::TStream* AStream, int AByteCount = 0x0)/* overload */;
	void __fastcall Write(const unsigned __int64 AValue, const int ADestIndex = 0xffffffff)/* overload */;
	void __fastcall Write(const unsigned AValue, const int ADestIndex = 0xffffffff)/* overload */;
	void __fastcall Write(const System::Word AValue, const int ADestIndex = 0xffffffff)/* overload */;
	void __fastcall Write(const System::Byte AValue, const int ADestIndex = 0xffffffff)/* overload */;
	void __fastcall Write(const Idglobal::TIdIPv6Address &AValue, const int ADestIndex = 0xffffffff)/* overload */;
	__property int Capacity = {read=GetCapacity, write=SetCapacity, nodefault};
	__property Idglobal::_di_IIdTextEncoding Encoding = {read=FByteEncoding, write=FByteEncoding};
	__property int GrowthFactor = {read=FGrowthFactor, write=FGrowthFactor, nodefault};
	__property int Size = {read=FSize, nodefault};
	__property System::UnicodeString AsString = {read=GetAsString};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Idbuffer */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDBUFFER)
using namespace Idbuffer;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdbufferHPP
