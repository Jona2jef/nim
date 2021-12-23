/* Generated by Nim Compiler v1.6.2 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
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
typedef struct tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
typedef NU8 tyArray__YtcvxHNKV4YiecPE9ap1mcA[20];
typedef NU32 tyArray__xsE8WL1yT5DKfrMdYB89bYA[5];
typedef NU8 tyArray__w5VB8h5K8DB3oWrO5U2wqg[64];
struct tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow {
NI count;
tyArray__xsE8WL1yT5DKfrMdYB89bYA state;
tyArray__w5VB8h5K8DB3oWrO5U2wqg buf;
};
typedef NU32 tyArray__BhDmUZcWSpYFIy5J8Xi8mQ[80];
typedef NIM_CHAR tyArray__1NlJ8ipZDU6GZ9bDFAyQjfQ[8];
typedef NU8 tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg;
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, allCharsInSet__pureZstrutils_1341)(NimStringDesc* s, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw theSet);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, newSha1State__stdZsha49_10)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* Result);
N_LIB_PRIVATE N_NIMCALL(void, update__stdZsha49_777)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx, NIM_CHAR* data, NI dataLen_0);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, transform__stdZsha49_27)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx);
static N_INLINE(void, bigEndian32__pureZendians_65)(void* outp, void* inp);
static N_INLINE(void, swapEndian32__pureZendians_25)(void* outp, void* inp);
N_LIB_PRIVATE N_NIMCALL(void, finalize__stdZsha49_821)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result);
static N_INLINE(void, bigEndian64__pureZendians_62)(void* outp, void* inp);
static N_INLINE(void, swapEndian64__pureZendians_13)(void* outp, void* inp);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toHex__pureZstrutils_1792)(NI x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(FILE*, open__systemZio_432)(NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, readChars__systemZio_156)(FILE* f, NIM_CHAR* a, NI aLen_0);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, close__systemZio_218)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NI, nsuParseHexInt)(NimStringDesc* s);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___stdZsha49_924)(tyArray__YtcvxHNKV4YiecPE9ap1mcA x, tyArray__YtcvxHNKV4YiecPE9ap1mcA y);
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__SpWH4VocI3fFoiOGE4MzWw_2 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x03,
0x7e, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM__SpWH4VocI3fFoiOGE4MzWw_3, "\200", 1);
STRING_LITERAL(TM__SpWH4VocI3fFoiOGE4MzWw_4, "\000", 1);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isValidSha1Hash__stdZsha49_949)(NimStringDesc* s) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = ((s ? s->Sup.len : 0) == ((NI) 40));
	if (!(T1_)) goto LA2_;
	T1_ = allCharsInSet__pureZstrutils_1341(s, TM__SpWH4VocI3fFoiOGE4MzWw_2);
	LA2_: ;
	result = T1_;
	return result;
}
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(void, newSha1State__stdZsha49_10)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* Result) {
	nimZeroMem((void*)Result, sizeof(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow));
	(*Result).count = ((NI) 0);
	(*Result).state[(((NI) 0))- 0] = ((NU32) 1732584193);
	(*Result).state[(((NI) 1))- 0] = ((NU32) IL64(4023233417));
	(*Result).state[(((NI) 2))- 0] = ((NU32) IL64(2562383102));
	(*Result).state[(((NI) 3))- 0] = ((NU32) 271733878);
	(*Result).state[(((NI) 4))- 0] = ((NU32) IL64(3285377520));
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, swapEndian32__pureZendians_25)(void* outp, void* inp) {
	NU32 tmpX60gensym1_;
	tmpX60gensym1_ = (NU32)0;
	copyMem__system_1727(((void*) ((&tmpX60gensym1_))), inp, ((NI) 4));
	tmpX60gensym1_ = __builtin_bswap32(tmpX60gensym1_);
	copyMem__system_1727(outp, ((void*) ((&tmpX60gensym1_))), ((NI) 4));
}
static N_INLINE(void, bigEndian32__pureZendians_65)(void* outp, void* inp) {
	swapEndian32__pureZendians_25(outp, inp);
}
N_LIB_PRIVATE N_NIMCALL(void, transform__stdZsha49_27)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx) {
	tyArray__BhDmUZcWSpYFIy5J8Xi8mQ w;
	NU32 a;
	NU32 b;
	NU32 c;
	NU32 d;
	NU32 e;
	NI t;
	nimZeroMem((void*)w, sizeof(tyArray__BhDmUZcWSpYFIy5J8Xi8mQ));
	a = (NU32)0;
	b = (NU32)0;
	c = (NU32)0;
	d = (NU32)0;
	e = (NU32)0;
	t = ((NI) 0);
	a = (*ctx).state[(((NI) 0))- 0];
	b = (*ctx).state[(((NI) 1))- 0];
	c = (*ctx).state[(((NI) 2))- 0];
	d = (*ctx).state[(((NI) 3))- 0];
	e = (*ctx).state[(((NI) 4))- 0];
	{
		while (1) {
			if (!(t < ((NI) 15))) goto LA2;
			bigEndian32__pureZendians_65(((void*) ((&w[((NI)(t + ((NI) 0)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 0)) * ((NI) 4)))- 0]))));
			e += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 27))) | (NU32)((NU64)(a) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 0)))- 0]))) + (NU32)((NU32)(d ^ (NU32)(b & (NU32)(c ^ d)))))) + (NU32)(((NU32) 1518500249)));
			b = (NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 2))) | (NU32)((NU64)(b) << (NU64)(((NI) 30))));
			bigEndian32__pureZendians_65(((void*) ((&w[((NI)(t + ((NI) 1)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 1)) * ((NI) 4)))- 0]))));
			d += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 27))) | (NU32)((NU64)(e) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 1)))- 0]))) + (NU32)((NU32)(c ^ (NU32)(a & (NU32)(b ^ c)))))) + (NU32)(((NU32) 1518500249)));
			a = (NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 2))) | (NU32)((NU64)(a) << (NU64)(((NI) 30))));
			bigEndian32__pureZendians_65(((void*) ((&w[((NI)(t + ((NI) 2)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 2)) * ((NI) 4)))- 0]))));
			c += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 27))) | (NU32)((NU64)(d) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 2)))- 0]))) + (NU32)((NU32)(b ^ (NU32)(e & (NU32)(a ^ b)))))) + (NU32)(((NU32) 1518500249)));
			e = (NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 2))) | (NU32)((NU64)(e) << (NU64)(((NI) 30))));
			bigEndian32__pureZendians_65(((void*) ((&w[((NI)(t + ((NI) 3)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 3)) * ((NI) 4)))- 0]))));
			b += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 27))) | (NU32)((NU64)(c) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 3)))- 0]))) + (NU32)((NU32)(a ^ (NU32)(d & (NU32)(e ^ a)))))) + (NU32)(((NU32) 1518500249)));
			d = (NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 2))) | (NU32)((NU64)(d) << (NU64)(((NI) 30))));
			bigEndian32__pureZendians_65(((void*) ((&w[((NI)(t + ((NI) 4)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 4)) * ((NI) 4)))- 0]))));
			a += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 27))) | (NU32)((NU64)(b) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 4)))- 0]))) + (NU32)((NU32)(e ^ (NU32)(c & (NU32)(d ^ e)))))) + (NU32)(((NU32) 1518500249)));
			c = (NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 2))) | (NU32)((NU64)(c) << (NU64)(((NI) 30))));
			t += ((NI) 5);
		} LA2: ;
	}
	bigEndian32__pureZendians_65(((void*) ((&w[((NI)(t + ((NI) 0)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 0)) * ((NI) 4)))- 0]))));
	e += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 27))) | (NU32)((NU64)(a) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 0)))- 0]))) + (NU32)((NU32)(d ^ (NU32)(b & (NU32)(c ^ d)))))) + (NU32)(((NU32) 1518500249)));
	b = (NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 2))) | (NU32)((NU64)(b) << (NU64)(((NI) 30))));
	w[((NI)(t + ((NI) 1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
	d += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 27))) | (NU32)((NU64)(e) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 1)))- 0]))) + (NU32)((NU32)(c ^ (NU32)(a & (NU32)(b ^ c)))))) + (NU32)(((NU32) 1518500249)));
	a = (NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 2))) | (NU32)((NU64)(a) << (NU64)(((NI) 30))));
	w[((NI)(t + ((NI) 2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
	c += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 27))) | (NU32)((NU64)(d) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 2)))- 0]))) + (NU32)((NU32)(b ^ (NU32)(e & (NU32)(a ^ b)))))) + (NU32)(((NU32) 1518500249)));
	e = (NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 2))) | (NU32)((NU64)(e) << (NU64)(((NI) 30))));
	w[((NI)(t + ((NI) 3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
	b += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 27))) | (NU32)((NU64)(c) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 3)))- 0]))) + (NU32)((NU32)(a ^ (NU32)(d & (NU32)(e ^ a)))))) + (NU32)(((NU32) 1518500249)));
	d = (NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 2))) | (NU32)((NU64)(d) << (NU64)(((NI) 30))));
	w[((NI)(t + ((NI) 4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
	a += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 27))) | (NU32)((NU64)(b) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 4)))- 0]))) + (NU32)((NU32)(e ^ (NU32)(c & (NU32)(d ^ e)))))) + (NU32)(((NU32) 1518500249)));
	c = (NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 2))) | (NU32)((NU64)(c) << (NU64)(((NI) 30))));
	t = ((NI) 20);
	{
		while (1) {
			if (!(t < ((NI) 40))) goto LA4;
			w[((NI)(t + ((NI) 0)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			e += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 27))) | (NU32)((NU64)(a) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 0)))- 0]))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(((NU32) 1859775393)));
			b = (NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 2))) | (NU32)((NU64)(b) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			d += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 27))) | (NU32)((NU64)(e) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 1)))- 0]))) + (NU32)((NU32)((NU32)(a ^ b) ^ c)))) + (NU32)(((NU32) 1859775393)));
			a = (NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 2))) | (NU32)((NU64)(a) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			c += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 27))) | (NU32)((NU64)(d) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 2)))- 0]))) + (NU32)((NU32)((NU32)(e ^ a) ^ b)))) + (NU32)(((NU32) 1859775393)));
			e = (NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 2))) | (NU32)((NU64)(e) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			b += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 27))) | (NU32)((NU64)(c) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 3)))- 0]))) + (NU32)((NU32)((NU32)(d ^ e) ^ a)))) + (NU32)(((NU32) 1859775393)));
			d = (NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 2))) | (NU32)((NU64)(d) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			a += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 27))) | (NU32)((NU64)(b) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 4)))- 0]))) + (NU32)((NU32)((NU32)(c ^ d) ^ e)))) + (NU32)(((NU32) 1859775393)));
			c = (NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 2))) | (NU32)((NU64)(c) << (NU64)(((NI) 30))));
			t += ((NI) 5);
		} LA4: ;
	}
	{
		while (1) {
			if (!(t < ((NI) 60))) goto LA6;
			w[((NI)(t + ((NI) 0)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			e += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 27))) | (NU32)((NU64)(a) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 0)))- 0]))) + (NU32)((NU32)((NU32)(b & c) | (NU32)(d & (NU32)(b | c)))))) + (NU32)(((NU32) IL64(2400959708))));
			b = (NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 2))) | (NU32)((NU64)(b) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			d += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 27))) | (NU32)((NU64)(e) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 1)))- 0]))) + (NU32)((NU32)((NU32)(a & b) | (NU32)(c & (NU32)(a | b)))))) + (NU32)(((NU32) IL64(2400959708))));
			a = (NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 2))) | (NU32)((NU64)(a) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			c += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 27))) | (NU32)((NU64)(d) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 2)))- 0]))) + (NU32)((NU32)((NU32)(e & a) | (NU32)(b & (NU32)(e | a)))))) + (NU32)(((NU32) IL64(2400959708))));
			e = (NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 2))) | (NU32)((NU64)(e) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			b += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 27))) | (NU32)((NU64)(c) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 3)))- 0]))) + (NU32)((NU32)((NU32)(d & e) | (NU32)(a & (NU32)(d | e)))))) + (NU32)(((NU32) IL64(2400959708))));
			d = (NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 2))) | (NU32)((NU64)(d) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			a += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 27))) | (NU32)((NU64)(b) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 4)))- 0]))) + (NU32)((NU32)((NU32)(c & d) | (NU32)(e & (NU32)(c | d)))))) + (NU32)(((NU32) IL64(2400959708))));
			c = (NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 2))) | (NU32)((NU64)(c) << (NU64)(((NI) 30))));
			t += ((NI) 5);
		} LA6: ;
	}
	{
		while (1) {
			if (!(t < ((NI) 80))) goto LA8;
			w[((NI)(t + ((NI) 0)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			e += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 27))) | (NU32)((NU64)(a) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 0)))- 0]))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(((NU32) IL64(3395469782))));
			b = (NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 2))) | (NU32)((NU64)(b) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			d += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 27))) | (NU32)((NU64)(e) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 1)))- 0]))) + (NU32)((NU32)((NU32)(a ^ b) ^ c)))) + (NU32)(((NU32) IL64(3395469782))));
			a = (NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 2))) | (NU32)((NU64)(a) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			c += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 27))) | (NU32)((NU64)(d) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 2)))- 0]))) + (NU32)((NU32)((NU32)(e ^ a) ^ b)))) + (NU32)(((NU32) IL64(3395469782))));
			e = (NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 2))) | (NU32)((NU64)(e) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			b += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 27))) | (NU32)((NU64)(c) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 3)))- 0]))) + (NU32)((NU32)((NU32)(d ^ e) ^ a)))) + (NU32)(((NU32) IL64(3395469782))));
			d = (NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 2))) | (NU32)((NU64)(d) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			a += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 27))) | (NU32)((NU64)(b) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 4)))- 0]))) + (NU32)((NU32)((NU32)(c ^ d) ^ e)))) + (NU32)(((NU32) IL64(3395469782))));
			c = (NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 2))) | (NU32)((NU64)(c) << (NU64)(((NI) 30))));
			t += ((NI) 5);
		} LA8: ;
	}
	(*ctx).state[(((NI) 0))- 0] += a;
	(*ctx).state[(((NI) 1))- 0] += b;
	(*ctx).state[(((NI) 2))- 0] += c;
	(*ctx).state[(((NI) 3))- 0] += d;
	(*ctx).state[(((NI) 4))- 0] += e;
}
N_LIB_PRIVATE N_NIMCALL(void, update__stdZsha49_777)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx, NIM_CHAR* data, NI dataLen_0) {
	NI i;
	NI j;
	NI len;
	i = (NI)((*ctx).count % ((NI) 64));
	j = ((NI) 0);
	len = dataLen_0;
	{
		if (!((NI)(((NI) 64) - i) < len)) goto LA3_;
		copyMem__system_1727(((void*) ((&(*ctx).buf[(i)- 0]))), ((void*) ((&data[j]))), ((NI) ((NI)(((NI) 64) - i))));
		len -= (NI)(((NI) 64) - i);
		j += (NI)(((NI) 64) - i);
		transform__stdZsha49_27(ctx);
		i = ((NI) 0);
	}
	LA3_: ;
	{
		while (1) {
			if (!(((NI) 64) <= len)) goto LA6;
			copyMem__system_1727(((void*) ((&(*ctx).buf[(((NI) 0))- 0]))), ((void*) ((&data[j]))), ((NI) 64));
			len -= ((NI) 64);
			j += ((NI) 64);
			transform__stdZsha49_27(ctx);
		} LA6: ;
	}
	{
		while (1) {
			if (!(((NI) 0) < len)) goto LA8;
			len -= ((NI) 1);
			(*ctx).buf[(i)- 0] = ((NU8) (((NU8)(data[j]))));
			i += ((NI) 1);
			j += ((NI) 1);
			{
				if (!(i == ((NI) 64))) goto LA11_;
				transform__stdZsha49_27(ctx);
				i = ((NI) 0);
			}
			LA11_: ;
		} LA8: ;
	}
	(*ctx).count += dataLen_0;
}
static N_INLINE(void, swapEndian64__pureZendians_13)(void* outp, void* inp) {
	NU64 tmpX60gensym0_;
	tmpX60gensym0_ = (NU64)0;
	copyMem__system_1727(((void*) ((&tmpX60gensym0_))), inp, ((NI) 8));
	tmpX60gensym0_ = __builtin_bswap64(tmpX60gensym0_);
	copyMem__system_1727(outp, ((void*) ((&tmpX60gensym0_))), ((NI) 8));
}
static N_INLINE(void, bigEndian64__pureZendians_62)(void* outp, void* inp) {
	swapEndian64__pureZendians_13(outp, inp);
}
N_LIB_PRIVATE N_NIMCALL(void, finalize__stdZsha49_821)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result) {
	NU64 cnt;
	tyArray__1NlJ8ipZDU6GZ9bDFAyQjfQ tmp;
	nimZeroMem((void*)Result, sizeof(tyArray__YtcvxHNKV4YiecPE9ap1mcA));
	cnt = ((NU64) ((NI)((*ctx).count * ((NI) 8))));
	update__stdZsha49_777(ctx, ((NimStringDesc*) &TM__SpWH4VocI3fFoiOGE4MzWw_3)->data, (((NimStringDesc*) &TM__SpWH4VocI3fFoiOGE4MzWw_3) ? ((NimStringDesc*) &TM__SpWH4VocI3fFoiOGE4MzWw_3)->Sup.len : 0));
	{
		while (1) {
			if (!!(((NI)((*ctx).count % ((NI) 64)) == ((NI) 56)))) goto LA2;
			update__stdZsha49_777(ctx, ((NimStringDesc*) &TM__SpWH4VocI3fFoiOGE4MzWw_4)->data, (((NimStringDesc*) &TM__SpWH4VocI3fFoiOGE4MzWw_4) ? ((NimStringDesc*) &TM__SpWH4VocI3fFoiOGE4MzWw_4)->Sup.len : 0));
		} LA2: ;
	}
	nimZeroMem((void*)tmp, sizeof(tyArray__1NlJ8ipZDU6GZ9bDFAyQjfQ));
	bigEndian64__pureZendians_62(((void*) ((&tmp[(((NI) 0))- 0]))), ((void*) ((&cnt))));
	update__stdZsha49_777(ctx, tmp, 8);
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < ((NI) 5))) goto LA5;
				i = i_2;
				bigEndian32__pureZendians_65(((void*) ((&(*ctx).state[(i)- 0]))), ((void*) ((&(*ctx).state[(i)- 0]))));
				i_2 += ((NI) 1);
			} LA5: ;
		}
	}
	copyMem__system_1727(((void*) ((&Result[(((NI) 0))- 0]))), ((void*) ((&(*ctx).state[(((NI) 0))- 0]))), ((NI) 20));
}
N_LIB_PRIVATE N_NIMCALL(void, secureHash__stdZsha49_840)(NIM_CHAR* str, NI strLen_0, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result) {
	tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow state;
	nimZeroMem((void*)(&state), sizeof(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow));
	newSha1State__stdZsha49_10((&state));
	update__stdZsha49_777((&state), str, strLen_0);
	finalize__stdZsha49_821((&state), Result);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == ((NimStringDesc*) NIM_NIL)))) goto LA3_;
		copyMem__system_1727(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___stdZsha49_879)(tyArray__YtcvxHNKV4YiecPE9ap1mcA self) {
	NimStringDesc* result;
	result = NIM_NIL;
	result = ((NimStringDesc*) NIM_NIL);
	{
		NU8 v;
		tyArray__YtcvxHNKV4YiecPE9ap1mcA colontmp_;
		NI i;
		v = (NU8)0;
		nimZeroMem((void*)colontmp_, sizeof(tyArray__YtcvxHNKV4YiecPE9ap1mcA));
		nimCopyMem((void*)colontmp_, (NIM_CONST void*)self, sizeof(tyArray__YtcvxHNKV4YiecPE9ap1mcA));
		i = ((NI) 0);
		{
			while (1) {
				NimStringDesc* T4_;
				v = colontmp_[(i)- 0];
				T4_ = NIM_NIL;
				T4_ = toHex__pureZstrutils_1792(((NI) (v)), ((NI) 2));
				result = resizeString(result, (T4_ ? T4_->Sup.len : 0) + 0);
appendString(result, T4_);
				{
					if (!(((NI) 19) <= ((NI) (i)))) goto LA7_;
					goto LA2;
				}
				LA7_: ;
				i += ((NI) 1);
			}
		} LA2: ;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, secureHashFile__stdZsha49_871)(NimStringDesc* filename, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result) {
	FILE* f;
	tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow state;
	NimStringDesc* buffer;
	f = open__systemZio_432(filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0), ((NI) -1));
	nimZeroMem((void*)(&state), sizeof(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow));
	newSha1State__stdZsha49_10((&state));
	buffer = mnewString(((NI) 8192));
	{
		while (1) {
			NI length;
			length = readChars__systemZio_156(f, buffer->data, (buffer ? buffer->Sup.len : 0));
			{
				if (!(length == ((NI) 0))) goto LA5_;
				goto LA1;
			}
			LA5_: ;
			buffer = setLengthStr(buffer, ((NI) (length)));
			update__stdZsha49_777((&state), buffer->data, (buffer ? buffer->Sup.len : 0));
			{
				if (!!((length == ((NI) 8192)))) goto LA9_;
				goto LA1;
			}
			LA9_: ;
		}
	} LA1: ;
	close__systemZio_218(f);
	finalize__stdZsha49_821((&state), Result);
}
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[(*dest).Sup.len] = c;
	(*dest).data[(NI)((*dest).Sup.len + ((NI) 1))] = 0;
	(*dest).Sup.len += ((NI) 1);
}
N_LIB_PRIVATE N_NIMCALL(void, parseSecureHash__stdZsha49_912)(NimStringDesc* hash, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result) {
	nimZeroMem((void*)Result, sizeof(tyArray__YtcvxHNKV4YiecPE9ap1mcA));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				NimStringDesc* T4_;
				NI T5_;
				if (!(i_2 < ((NI) 20))) goto LA3;
				i = i_2;
				T4_ = NIM_NIL;
				T4_ = rawNewString(2);
appendChar(T4_, hash->data[(NI)(i * ((NI) 2))]);
appendChar(T4_, hash->data[(NI)((NI)(i * ((NI) 2)) + ((NI) 1))]);
				T5_ = (NI)0;
				T5_ = nsuParseHexInt(T4_);
				Result[(i)- 0] = ((NU8) (T5_));
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___stdZsha49_924)(tyArray__YtcvxHNKV4YiecPE9ap1mcA x, tyArray__YtcvxHNKV4YiecPE9ap1mcA y) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		NI f;
		NI res;
		f = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= ((NI) 19))) goto LA3;
				f = ((NI) (res));
				{
					if (!!((x[(f)- 0] == y[(f)- 0]))) goto LA6_;
					goto BeforeRet_;
				}
				LA6_: ;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___stdZsha49_920)(tyArray__YtcvxHNKV4YiecPE9ap1mcA a, tyArray__YtcvxHNKV4YiecPE9ap1mcA b) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = eqeq___stdZsha49_924(a, b);
	return result;
}
