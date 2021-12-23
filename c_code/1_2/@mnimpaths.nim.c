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
typedef struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg tyTuple__7q7q3E6Oj24ZNVJb9aonhAg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* tyArray__Re75IspeoxXy2oCZHwcRrA[2];
struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef NimStringDesc* tyArray__sMpvt1sOxOJ3LFGulnbeMQ[4];
typedef NimStringDesc* tyArray__nHXaesL0DJZHyVS07ARPRA[1];
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen_0);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NIM_BOOL, contains__pureZos_495)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item);
static N_INLINE(NI, find__pureZos_500)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__systemZassertions_56)(NimStringDesc* msg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___nimpaths_29)(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__pureZos_542)(NimStringDesc** s, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, interp__nimpaths_25)(NimStringDesc* path, NimStringDesc* nimr);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosfileExists)(NimStringDesc* filename);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nospquoteShell)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(NI, nosexecShellCmd)(NimStringDesc* command);
STRING_LITERAL(TM__O9aA9byHYLJvQWppK9cdLra6Q_2, "nimr", 4);
STRING_LITERAL(TM__O9aA9byHYLJvQWppK9cdLra6Q_3, "nimpaths.nim(37, 12) `\'$\' notin result` ", 40);
STRING_LITERAL(TM__O9aA9byHYLJvQWppK9cdLra6Q_4, "(", 1);
STRING_LITERAL(TM__O9aA9byHYLJvQWppK9cdLra6Q_5, ", ", 2);
STRING_LITERAL(TM__O9aA9byHYLJvQWppK9cdLra6Q_6, ",", 1);
STRING_LITERAL(TM__O9aA9byHYLJvQWppK9cdLra6Q_7, ")", 1);
STRING_LITERAL(TM__O9aA9byHYLJvQWppK9cdLra6Q_8, "$nimr/tools/dochack/dochack.js", 30);
STRING_LITERAL(TM__O9aA9byHYLJvQWppK9cdLra6Q_9, "$nim js -d:release $file", 24);
STRING_LITERAL(TM__O9aA9byHYLJvQWppK9cdLra6Q_10, "nim", 3);
STRING_LITERAL(TM__O9aA9byHYLJvQWppK9cdLra6Q_11, "file", 4);
STRING_LITERAL(TM__O9aA9byHYLJvQWppK9cdLra6Q_12, "$nimr/tools/dochack/dochack.nim", 31);
STRING_LITERAL(TM__O9aA9byHYLJvQWppK9cdLra6Q_13, "getDocHacksJs: cmd: ", 20);
STRING_LITERAL(TM__O9aA9byHYLJvQWppK9cdLra6Q_14, "nimpaths.nim(46, 14) `execShellCmd(cmd) == 0` ", 46);
STRING_LITERAL(TM__O9aA9byHYLJvQWppK9cdLra6Q_15, "nimpaths.nim(47, 12) `docHackJs2.fileExists` ", 45);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
}
static N_INLINE(NI, find__pureZos_500)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item) {
	NI result;
{	result = (NI)0;
	result = ((NI) 0);
	{
		NIM_CHAR i;
		NI i_2;
		i = (NIM_CHAR)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < aLen_0)) goto LA3;
				i = a[i_2];
				{
					if (!((NU8)(i) == (NU8)(item))) goto LA6_;
					goto BeforeRet_;
				}
				LA6_: ;
				result += ((NI) 1);
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NIM_BOOL, contains__pureZos_495)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item) {
	NIM_BOOL result;
	NI T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = find__pureZos_500(a, aLen_0, item);
	result = (((NI) 0) <= T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
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
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___nimpaths_29)(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg x) {
	NimStringDesc* result;
	NI count;
	result = NIM_NIL;
	result = copyString(((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_4));
	count = ((NI) 0);
	{
		if (!(((NI) 0) < count)) goto LA3_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_5));
	}
	LA3_: ;
	count += ((NI) 1);
	addQuoted__pureZos_542((&result), x.Field0);
	{
		if (!(((NI) 0) < count)) goto LA7_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_5));
	}
	LA7_: ;
	count += ((NI) 1);
	addQuoted__pureZos_542((&result), x.Field1);
	{
		if (!(((NI) 0) < count)) goto LA11_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_5));
	}
	LA11_: ;
	count += ((NI) 1);
	addQuoted__pureZos_542((&result), x.Field2);
	{
		if (!(count == ((NI) 1))) goto LA15_;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_6));
	}
	LA15_: ;
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_7));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, interp__nimpaths_25)(NimStringDesc* path, NimStringDesc* nimr) {
	NimStringDesc* result;
	tyArray__Re75IspeoxXy2oCZHwcRrA T1_;
	result = NIM_NIL;
	nimZeroMem((void*)T1_, sizeof(tyArray__Re75IspeoxXy2oCZHwcRrA));
	T1_[0] = copyString(((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_2));
	T1_[1] = copyString(nimr);
	result = nsuFormatOpenArray(path, T1_, 2);
	{
		NIM_BOOL T4_;
		NimStringDesc* T7_;
		tyTuple__7q7q3E6Oj24ZNVJb9aonhAg T8_;
		NimStringDesc* T9_;
		T4_ = (NIM_BOOL)0;
		T4_ = contains__pureZos_495(result->data, (result ? result->Sup.len : 0), 36);
		if (!!(!(T4_))) goto LA5_;
		T7_ = NIM_NIL;
		nimZeroMem((void*)(&T8_), sizeof(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg));
		T8_.Field0 = copyString(path);
		T8_.Field1 = copyString(nimr);
		T8_.Field2 = copyString(result);
		T9_ = NIM_NIL;
		T9_ = dollar___nimpaths_29(T8_);
		T7_ = rawNewString((T9_ ? T9_->Sup.len : 0) + 40);
appendString(T7_, ((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_3));
appendString(T7_, T9_);
		failedAssertImpl__systemZassertions_56(T7_);
	}
	LA5_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getDocHacksJs__nimpaths_93)(NimStringDesc* nimr, NimStringDesc* nim, NIM_BOOL forceRebuild) {
	NimStringDesc* result;
	NimStringDesc* docHackJs2;
	result = NIM_NIL;
	docHackJs2 = interp__nimpaths_25(((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_8), nimr);
	{
		NIM_BOOL T3_;
		NIM_BOOL T5_;
		NimStringDesc* cmd;
		tyArray__sMpvt1sOxOJ3LFGulnbeMQ T8_;
		NimStringDesc* T9_;
		tyArray__nHXaesL0DJZHyVS07ARPRA T10_;
		NimStringDesc* T11_;
		T3_ = (NIM_BOOL)0;
		T3_ = forceRebuild;
		if (T3_) goto LA4_;
		T5_ = (NIM_BOOL)0;
		T5_ = nosfileExists(docHackJs2);
		T3_ = !(T5_);
		LA4_: ;
		if (!T3_) goto LA6_;
		nimZeroMem((void*)T8_, sizeof(tyArray__sMpvt1sOxOJ3LFGulnbeMQ));
		T8_[0] = copyString(((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_10));
		T8_[1] = nospquoteShell(nim);
		T8_[2] = copyString(((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_11));
		T9_ = NIM_NIL;
		T9_ = interp__nimpaths_25(((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_12), nimr);
		T8_[3] = nospquoteShell(T9_);
		cmd = nsuFormatOpenArray(((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_9), T8_, 4);
		nimZeroMem((void*)T10_, sizeof(tyArray__nHXaesL0DJZHyVS07ARPRA));
		T11_ = NIM_NIL;
		T11_ = rawNewString((cmd ? cmd->Sup.len : 0) + 20);
appendString(T11_, ((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_13));
appendString(T11_, cmd);
		T10_[0] = T11_;
		echoBinSafe(T10_, 1);
		{
			NI T14_;
			NimStringDesc* T17_;
			T14_ = (NI)0;
			T14_ = nosexecShellCmd(cmd);
			if (!!((T14_ == ((NI) 0)))) goto LA15_;
			T17_ = NIM_NIL;
			T17_ = rawNewString((cmd ? cmd->Sup.len : 0) + 46);
appendString(T17_, ((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_14));
appendString(T17_, cmd);
			failedAssertImpl__systemZassertions_56(T17_);
		}
		LA15_: ;
	}
	LA6_: ;
	{
		NIM_BOOL T20_;
		T20_ = (NIM_BOOL)0;
		T20_ = nosfileExists(docHackJs2);
		if (!!(T20_)) goto LA21_;
		failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__O9aA9byHYLJvQWppK9cdLra6Q_15));
	}
	LA21_: ;
	result = copyString(docHackJs2);
	return result;
}
