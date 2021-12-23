/* Generated by Nim Compiler v1.6.2 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

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
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__systemZassertions_56)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(void, openDefaultBrowserImpl__pureZbrowsers_8)(NimStringDesc* url);
N_LIB_PRIVATE N_NIMCALL(NI, nosexecShellCmd)(NimStringDesc* command);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nospquoteShell)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, prepare__pureZbrowsers_5)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__pureZstrutils_1631)(NimStringDesc* s, NimStringDesc* sub);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, absolutePath__pureZos_743)(NimStringDesc* path, NimStringDesc* root);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
STRING_LITERAL(TM__CZNeKGdQ8AWxD1HSDIq5DQ_2, "browsers.nim(69, 12) `url.len > 0` URL must not be empty string", 63);
STRING_LITERAL(TM__CZNeKGdQ8AWxD1HSDIq5DQ_3, "open ", 5);
STRING_LITERAL(TM__CZNeKGdQ8AWxD1HSDIq5DQ_4, "://", 3);
STRING_LITERAL(TM__CZNeKGdQ8AWxD1HSDIq5DQ_5, "file://", 7);
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
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, prepare__pureZbrowsers_5)(NimStringDesc* s) {
	NimStringDesc* result;
	result = NIM_NIL;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = contains__pureZstrutils_1631(s, ((NimStringDesc*) &TM__CZNeKGdQ8AWxD1HSDIq5DQ_4));
		if (!T3_) goto LA4_;
		result = copyString(s);
	}
	goto LA1_;
	LA4_: ;
	{
		NimStringDesc* T7_;
		NimStringDesc* T8_;
		NimStringDesc* T9_;
		T7_ = NIM_NIL;
		T8_ = NIM_NIL;
		T8_ = nosgetCurrentDir();
		T9_ = NIM_NIL;
		T9_ = absolutePath__pureZos_743(s, T8_);
		T7_ = rawNewString((T9_ ? T9_->Sup.len : 0) + 7);
appendString(T7_, ((NimStringDesc*) &TM__CZNeKGdQ8AWxD1HSDIq5DQ_5));
appendString(T7_, T9_);
		result = T7_;
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, openDefaultBrowserImpl__pureZbrowsers_8)(NimStringDesc* url) {
	NimStringDesc* T1_;
	NimStringDesc* T2_;
	NimStringDesc* T3_;
	NI T4_;
	T1_ = NIM_NIL;
	T2_ = NIM_NIL;
	T2_ = prepare__pureZbrowsers_5(url);
	T3_ = NIM_NIL;
	T3_ = nospquoteShell(T2_);
	T1_ = rawNewString((T3_ ? T3_->Sup.len : 0) + 5);
appendString(T1_, ((NimStringDesc*) &TM__CZNeKGdQ8AWxD1HSDIq5DQ_3));
appendString(T1_, T3_);
	T4_ = (NI)0;
	T4_ = nosexecShellCmd(T1_);
	(void)(T4_);
}
N_LIB_PRIVATE N_NIMCALL(void, openDefaultBrowser__pureZbrowsers_10)(NimStringDesc* url) {
	{
		if (!!((((NI) 0) < (url ? url->Sup.len : 0)))) goto LA3_;
		failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__CZNeKGdQ8AWxD1HSDIq5DQ_2));
	}
	LA3_: ;
	openDefaultBrowserImpl__pureZbrowsers_8(url);
}
