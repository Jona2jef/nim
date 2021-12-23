/* Generated by Nim Compiler v1.6.2 */
#define NIM_INTBITS 32

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
typedef struct tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 tyEnum_RodSection__UqBXi9atUziBvBoi1Bm6kuA;
typedef NU8 tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ;
struct tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg {
FILE* f;
tyEnum_RodSection__UqBXi9atUziBvBoi1Bm6kuA currentSection;
tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ err;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg;
typedef NU8 tyArray__cdsir9aPB24hAk6k77P9b9bCA[8];
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__systemZio_391)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
static N_INLINE(void, setError__icZrodfiles_52)(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg* f, tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ err);
N_LIB_PRIVATE N_NIMCALL(NI, readBytes__icZrodfiles_159)(FILE* f, NU8* a, NI aLen_0, NI start, NI len);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__systemZio_144)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___icZrodfiles_173)(tyArray__cdsir9aPB24hAk6k77P9b9bCA x, tyArray__cdsir9aPB24hAk6k77P9b9bCA y);
N_LIB_PRIVATE N_NIMCALL(void, loadPrim__icZrodfiles_255)(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg* f, tyEnum_RodSection__UqBXi9atUziBvBoi1Bm6kuA* x);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(void, close__systemZio_218)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NI, writeBytes__icZrodfiles_123)(FILE* f, NU8* a, NI aLen_0, NI start, NI len);
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__systemZio_176)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(void, storePrim__icZrodfiles_212)(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg* f, tyEnum_RodSection__UqBXi9atUziBvBoi1Bm6kuA x);
N_LIB_PRIVATE NIM_CONST tyArray__cdsir9aPB24hAk6k77P9b9bCA cookie__icZrodfiles_51 = {((NU8) 0),
((NU8) 82),
((NU8) 79),
((NU8) 68),
((NU8) 32),
((NU8) 1),
((NU8) 0),
((NU8) 1)}
;
N_LIB_PRIVATE TNimType NTIrodfileerror__0ZHDewZuAfbVKILlFg9cYCQ_;
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
}
static N_INLINE(void, setError__icZrodfiles_52)(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg* f, tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ err) {
	(*f).err = err;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg, open__icZrodfiles_286)(NimStringDesc* filename) {
	tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg result;
	nimZeroMem((void*)(&result), sizeof(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__systemZio_391(&result.f, filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0), ((NI) -1));
		if (!!(T3_)) goto LA4_;
		setError__icZrodfiles_52((&result), ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 2));
	}
	LA4_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, readBytes__icZrodfiles_159)(FILE* f, NU8* a, NI aLen_0, NI start, NI len) {
	NI result;
	result = (NI)0;
	result = readBuffer__systemZio_144(f, ((void*) ((&a[start]))), len);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___icZrodfiles_173)(tyArray__cdsir9aPB24hAk6k77P9b9bCA x, tyArray__cdsir9aPB24hAk6k77P9b9bCA y) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		NI f;
		NI res;
		f = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= ((NI) 7))) goto LA3;
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
N_LIB_PRIVATE N_NIMCALL(void, loadHeader__icZrodfiles_138)(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg* f) {
	tyArray__cdsir9aPB24hAk6k77P9b9bCA thisCookie;
{	{
		if (!!(((*f).err == ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 0)))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	nimZeroMem((void*)thisCookie, sizeof(tyArray__cdsir9aPB24hAk6k77P9b9bCA));
	{
		NI T7_;
		T7_ = (NI)0;
		T7_ = readBytes__icZrodfiles_159((*f).f, thisCookie, 8, ((NI) 0), ((NI) 8));
		if (!!((T7_ == ((NI) 8)))) goto LA8_;
		setError__icZrodfiles_52(f, ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 3));
	}
	goto LA5_;
	LA8_: ;
	{
		NIM_BOOL T11_;
		T11_ = (NIM_BOOL)0;
		T11_ = eqeq___icZrodfiles_173(thisCookie, cookie__icZrodfiles_51);
		if (!!(T11_)) goto LA12_;
		setError__icZrodfiles_52(f, ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 4));
	}
	goto LA5_;
	LA12_: ;
	LA5_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, loadPrim__icZrodfiles_255)(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg* f, tyEnum_RodSection__UqBXi9atUziBvBoi1Bm6kuA* x) {
{	{
		if (!!(((*f).err == ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 0)))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI T7_;
		T7_ = (NI)0;
		T7_ = readBuffer__systemZio_144((*f).f, ((void*) (x)), ((NI) 1));
		if (!!((T7_ == ((NI) 1)))) goto LA8_;
		setError__icZrodfiles_52(f, ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 3));
	}
	LA8_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, loadSection__icZrodfiles_247)(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg* f, tyEnum_RodSection__UqBXi9atUziBvBoi1Bm6kuA expected) {
	tyEnum_RodSection__UqBXi9atUziBvBoi1Bm6kuA s;
{	{
		if (!!(((*f).err == ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 0)))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	s = (tyEnum_RodSection__UqBXi9atUziBvBoi1Bm6kuA)0;
	loadPrim__icZrodfiles_255(f, (&s));
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = !((expected == s));
		if (!(T7_)) goto LA8_;
		T7_ = ((*f).err == ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 0));
		LA8_: ;
		if (!T7_) goto LA9_;
		setError__icZrodfiles_52(f, ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 5));
	}
	LA9_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, loadPrim__icZrodfiles_89)(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg* f, NimStringDesc** s) {
	NI32 lenPrefix;
{	{
		if (!!(((*f).err == ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 0)))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	lenPrefix = ((NI32) 0);
	{
		NI T7_;
		T7_ = (NI)0;
		T7_ = readBuffer__systemZio_144((*f).f, ((void*) ((&lenPrefix))), ((NI) 4));
		if (!!((T7_ == ((NI) 4)))) goto LA8_;
		setError__icZrodfiles_52(f, ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 3));
	}
	goto LA5_;
	LA8_: ;
	{
		unsureAsgnRef((void**) (&(*s)), mnewString(((NI) (lenPrefix))));
		{
			if (!(((NI32) 0) < lenPrefix)) goto LA13_;
			{
				NI T17_;
				T17_ = (NI)0;
				T17_ = readBuffer__systemZio_144((*f).f, ((void*) ((&(*s)->data[((NI) 0)]))), ((NI) (((*s) ? (*s)->Sup.len : 0))));
				if (!!((T17_ == ((*s) ? (*s)->Sup.len : 0)))) goto LA18_;
				setError__icZrodfiles_52(f, ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 3));
			}
			LA18_: ;
		}
		LA13_: ;
	}
	LA5_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, close__icZrodfiles_284)(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg* f) {
	close__systemZio_218((*f).f);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg, create__icZrodfiles_281)(NimStringDesc* filename) {
	tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg result;
	nimZeroMem((void*)(&result), sizeof(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__systemZio_391(&result.f, filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 1), ((NI) -1));
		if (!!(T3_)) goto LA4_;
		setError__icZrodfiles_52((&result), ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 2));
	}
	LA4_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, writeBytes__icZrodfiles_123)(FILE* f, NU8* a, NI aLen_0, NI start, NI len) {
	NI result;
	NI8* x;
	result = (NI)0;
	x = ((NI8*) (a));
	result = writeBuffer__systemZio_176(f, ((void*) ((&x[start]))), len);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, storeHeader__icZrodfiles_109)(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg* f) {
{	{
		if (!!(((*f).err == ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 0)))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI T7_;
		T7_ = (NI)0;
		T7_ = writeBytes__icZrodfiles_123((*f).f, cookie__icZrodfiles_51, 8, ((NI) 0), ((NI) 8));
		if (!!((T7_ == ((NI) 8)))) goto LA8_;
		setError__icZrodfiles_52(f, ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 3));
	}
	LA8_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, storePrim__icZrodfiles_212)(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg* f, tyEnum_RodSection__UqBXi9atUziBvBoi1Bm6kuA x) {
{	{
		if (!!(((*f).err == ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 0)))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI T7_;
		T7_ = (NI)0;
		T7_ = writeBuffer__systemZio_176((*f).f, ((void*) ((&x))), ((NI) 1));
		if (!!((T7_ == ((NI) 1)))) goto LA8_;
		setError__icZrodfiles_52(f, ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 3));
	}
	LA8_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, storeSection__icZrodfiles_198)(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg* f, tyEnum_RodSection__UqBXi9atUziBvBoi1Bm6kuA s) {
{	{
		if (!!(((*f).err == ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 0)))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	(*f).currentSection = s;
	storePrim__icZrodfiles_212(f, s);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, storePrim__icZrodfiles_64)(tyObject_RodFile__fLvYfGXSKRU29a9aEJ67yIvg* f, NimStringDesc* s) {
	NI32 lenPrefix;
{	{
		if (!!(((*f).err == ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 0)))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		if (!(((NI) 2147483647) <= (s ? s->Sup.len : 0))) goto LA7_;
		setError__icZrodfiles_52(f, ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 1));
		goto BeforeRet_;
	}
	LA7_: ;
	lenPrefix = ((NI32) ((s ? s->Sup.len : 0)));
	{
		NI T11_;
		T11_ = (NI)0;
		T11_ = writeBuffer__systemZio_176((*f).f, ((void*) ((&lenPrefix))), ((NI) 4));
		if (!!((T11_ == ((NI) 4)))) goto LA12_;
		setError__icZrodfiles_52(f, ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 3));
	}
	goto LA9_;
	LA12_: ;
	{
		{
			if (!!(((s ? s->Sup.len : 0) == ((NI) 0)))) goto LA17_;
			{
				NI T21_;
				T21_ = (NI)0;
				T21_ = writeBuffer__systemZio_176((*f).f, ((void*) ((&s->data[((NI) 0)]))), ((NI) ((s ? s->Sup.len : 0))));
				if (!!((T21_ == (s ? s->Sup.len : 0)))) goto LA22_;
				setError__icZrodfiles_52(f, ((tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ) 3));
			}
			LA22_: ;
		}
		LA17_: ;
	}
	LA9_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_rodfilesDatInit000)(void) {
static TNimNode* TM__FrEYEpNuSw2loAbEyX5AXw_2_8[8];
NI TM__FrEYEpNuSw2loAbEyX5AXw_4;
static char* NIM_CONST TM__FrEYEpNuSw2loAbEyX5AXw_3[8] = {
"ok", 
"tooBig", 
"cannotOpen", 
"ioFailure", 
"wrongHeader", 
"wrongSection", 
"configMismatch", 
"includeFileChanged"};
static TNimNode TM__FrEYEpNuSw2loAbEyX5AXw_0[9];
NTIrodfileerror__0ZHDewZuAfbVKILlFg9cYCQ_.size = sizeof(tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ);
NTIrodfileerror__0ZHDewZuAfbVKILlFg9cYCQ_.align = NIM_ALIGNOF(tyEnum_RodFileError__0ZHDewZuAfbVKILlFg9cYCQ);
NTIrodfileerror__0ZHDewZuAfbVKILlFg9cYCQ_.kind = 14;
NTIrodfileerror__0ZHDewZuAfbVKILlFg9cYCQ_.base = 0;
NTIrodfileerror__0ZHDewZuAfbVKILlFg9cYCQ_.flags = 3;
for (TM__FrEYEpNuSw2loAbEyX5AXw_4 = 0; TM__FrEYEpNuSw2loAbEyX5AXw_4 < 8; TM__FrEYEpNuSw2loAbEyX5AXw_4++) {
TM__FrEYEpNuSw2loAbEyX5AXw_0[TM__FrEYEpNuSw2loAbEyX5AXw_4+0].kind = 1;
TM__FrEYEpNuSw2loAbEyX5AXw_0[TM__FrEYEpNuSw2loAbEyX5AXw_4+0].offset = TM__FrEYEpNuSw2loAbEyX5AXw_4;
TM__FrEYEpNuSw2loAbEyX5AXw_0[TM__FrEYEpNuSw2loAbEyX5AXw_4+0].name = TM__FrEYEpNuSw2loAbEyX5AXw_3[TM__FrEYEpNuSw2loAbEyX5AXw_4];
TM__FrEYEpNuSw2loAbEyX5AXw_2_8[TM__FrEYEpNuSw2loAbEyX5AXw_4] = &TM__FrEYEpNuSw2loAbEyX5AXw_0[TM__FrEYEpNuSw2loAbEyX5AXw_4+0];
}
TM__FrEYEpNuSw2loAbEyX5AXw_0[8].len = 8; TM__FrEYEpNuSw2loAbEyX5AXw_0[8].kind = 2; TM__FrEYEpNuSw2loAbEyX5AXw_0[8].sons = &TM__FrEYEpNuSw2loAbEyX5AXw_2_8[0];
NTIrodfileerror__0ZHDewZuAfbVKILlFg9cYCQ_.node = &TM__FrEYEpNuSw2loAbEyX5AXw_0[8];
}

