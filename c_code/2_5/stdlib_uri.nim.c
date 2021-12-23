/* Generated by Nim Compiler v1.6.2 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toHex__pureZstrutils_1792)(NI x, NI len);
STRING_LITERAL(TM__VzbRQH9cb1xm1tSKH4PwBSw_2, "+", 1);
STRING_LITERAL(TM__VzbRQH9cb1xm1tSKH4PwBSw_3, "%20", 3);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == ((NimStringDesc*) NIM_NIL)))) goto LA3_;
		copyMem__system_1727(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, encodeUrl__pureZuri_40)(NimStringDesc* s, NIM_BOOL usePlus) {
	NimStringDesc* result;
	NimStringDesc* fromSpace;
	result = NIM_NIL;
	result = rawNewString(((NI) ((NI)((s ? s->Sup.len : 0) + (NI)((NI64)((s ? s->Sup.len : 0)) >> (NU64)(((NI) 2)))))));
	{
		if (!usePlus) goto LA3_;
		fromSpace = copyString(((NimStringDesc*) &TM__VzbRQH9cb1xm1tSKH4PwBSw_2));
	}
	goto LA1_;
	LA3_: ;
	{
		fromSpace = copyString(((NimStringDesc*) &TM__VzbRQH9cb1xm1tSKH4PwBSw_3));
	}
	LA1_: ;
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = (s ? s->Sup.len : 0);
		{
			while (1) {
				if (!(i < L)) goto LA8;
				c = s->data[i];
				switch (((NU8)(c))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 45:
				case 46:
				case 95:
				case 126:
				{
					result = addChar(result, c);
				}
				break;
				case 32:
				{
					result = resizeString(result, (fromSpace ? fromSpace->Sup.len : 0) + 0);
appendString(result, fromSpace);
				}
				break;
				default:
				{
					NimStringDesc* T12_;
					result = addChar(result, 37);
					T12_ = NIM_NIL;
					T12_ = toHex__pureZstrutils_1792(((NU8)(c)), ((NI) 2));
					result = resizeString(result, (T12_ ? T12_->Sup.len : 0) + 0);
appendString(result, T12_);
				}
				break;
				}
				i += ((NI) 1);
			} LA8: ;
		}
	}
	return result;
}
