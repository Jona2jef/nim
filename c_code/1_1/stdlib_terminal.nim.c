/* Generated by Nim Compiler v1.6.2 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <io.h>
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
typedef struct tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_CONSOLE_SCREEN_BUFFER_INFO__r6d5R6U7A9aP1xHUbo2o04A tyObject_CONSOLE_SCREEN_BUFFER_INFO__r6d5R6U7A9aP1xHUbo2o04A;
typedef struct tyObject_COORD__38Oq1GgFPIYv2ksRi9c0fZA tyObject_COORD__38Oq1GgFPIYv2ksRi9c0fZA;
typedef struct tyObject_SMALL_RECT__GSDbaE1SdabWptSZYJG3XA tyObject_SMALL_RECT__GSDbaE1SdabWptSZYJG3XA;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg;
struct tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og {
NIM_BOOL trueColorIsSupported;
NIM_BOOL trueColorIsEnabled;
NIM_BOOL fgSetColor;
NI hStdout;
NI hStderr;
NI16 oldStdoutAttr;
NI16 oldStderrAttr;
};
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
typedef N_NIMCALL_PTR(void, tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef NU16 tySet_tyEnum_Style__NXKayqTLMsAibFwNceBlpA;
typedef N_STDCALL_PTR(NI, tyProc__zP2zGemcuVRvOUE82f9a0Pw) (NI32 nStdHandle);
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(NI32, tyProc__oew1DfaGl5XhHmnBK0HYXQ) (NI hSourceProcessHandle, NI hSourceHandle, NI hTargetProcessHandle, NI* lpTargetHandle, NI32 dwDesiredAccess, NI32 bInheritHandle, NI32 dwOptions);
typedef N_STDCALL_PTR(NI, tyProc__uryidYWkntM7ddjZSyxvyQ) (void);
struct tyObject_COORD__38Oq1GgFPIYv2ksRi9c0fZA {
NI16 x;
NI16 y;
};
struct tyObject_SMALL_RECT__GSDbaE1SdabWptSZYJG3XA {
NI16 left;
NI16 top;
NI16 right;
NI16 bottom;
};
struct tyObject_CONSOLE_SCREEN_BUFFER_INFO__r6d5R6U7A9aP1xHUbo2o04A {
tyObject_COORD__38Oq1GgFPIYv2ksRi9c0fZA dwSize;
tyObject_COORD__38Oq1GgFPIYv2ksRi9c0fZA dwCursorPosition;
NI16 wAttributes;
tyObject_SMALL_RECT__GSDbaE1SdabWptSZYJG3XA srWindow;
tyObject_COORD__38Oq1GgFPIYv2ksRi9c0fZA dwMaximumWindowSize;
};
typedef N_STDCALL_PTR(NI32, tyProc__vjGHiWUJwFzOgSxDffBb6Q) (NI hConsoleOutput, tyObject_CONSOLE_SCREEN_BUFFER_INFO__r6d5R6U7A9aP1xHUbo2o04A* lpConsoleScreenBufferInfo);
struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SPr7N6UKfuF549bNPiUvSRw[256];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SPr7N6UKfuF549bNPiUvSRw freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
typedef NU8 tyEnum_Style__NXKayqTLMsAibFwNceBlpA;
typedef N_STDCALL_PTR(NI32, tyProc__oPCjp4xTgEl9a8fqSzOv8lw) (NI hConsoleOutput, NI16 wAttributes);
typedef NU8 tyEnum_ForegroundColor__ez9ah4IgQc0AbdW68acioDg;
typedef NI tyArray__e7dTfxuKO1YfQGLA3anCHg[10];
static N_NIMCALL(void, Marker_tyRef__flNJLrANZti6Wiy5LTlGGA)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM__CN3raB9atujkEiPpxYAdlgQ_3)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRegisterThreadLocalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__systemZio_248)(FILE* f);
static N_INLINE(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*, getTerminal__pureZterminal_26)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*, newTerminal__pureZterminal_16)(void);
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(void, initTerminal__pureZterminal_191)(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* term);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
N_LIB_PRIVATE N_NIMCALL(NI16, getAttributes__pureZterminal_187)(NI h);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__system_5363)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5325)(void* usr);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(void, decRef__system_5370)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__system_5368)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__system_5319)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(NI16, toU16__system_301)(NI x);
N_LIB_PRIVATE TNimType NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_;
extern TNimType NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_;
extern TNimType NTIint__rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTIint4954__kDPg4wXyR8DDyA0MeEjIsw_;
N_LIB_PRIVATE TNimType NTIpterminal__flNJLrANZti6Wiy5LTlGGA_;
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_6, "kernel32", 8);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_7, "kernel32", 8);
N_LIB_PRIVATE NIM_CONST tyArray__e7dTfxuKO1YfQGLA3anCHg lookup__pureZterminal_515 = {((NI) 0),
((NI) 4),
((NI) 2),
((NI) 6),
((NI) 1),
((NI) 5),
((NI) 3),
((NI) 7),
((NI) 0),
((NI) 0)}
;
N_LIB_PRIVATE tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* gTerm__pureZterminal_15;
N_LIB_PRIVATE NI16 defaultForegroundColor__pureZterminal_501 = ((NI16) -1);
N_LIB_PRIVATE NI16 defaultBackgroundColor__pureZterminal_502 = ((NI16) -1);
extern tyProc__zP2zGemcuVRvOUE82f9a0Pw Dl_1291845795_;
static void* TM__CN3raB9atujkEiPpxYAdlgQ_4;
tyProc__oew1DfaGl5XhHmnBK0HYXQ Dl_1728053315_;
tyProc__uryidYWkntM7ddjZSyxvyQ Dl_1728053323_;
tyProc__vjGHiWUJwFzOgSxDffBb6Q Dl_1728053324_;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__system_5272;
tyProc__oPCjp4xTgEl9a8fqSzOv8lw Dl_1728053406_;
static N_NIMCALL(void, Marker_tyRef__flNJLrANZti6Wiy5LTlGGA)(void* p, NI op) {
	tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* a;
	a = (tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*)p;
}
static N_NIMCALL(void, TM__CN3raB9atujkEiPpxYAdlgQ_3)(void) {
	nimGCvisit((void*)gTerm__pureZterminal_15, 0);
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isatty__pureZterminal_649)(FILE* f) {
	NIM_BOOL result;
	int T1_;
	int T2_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = getFileHandle__systemZio_248(f);
	T2_ = (int)0;
	T2_ = _isatty(T1_);
	result = !((T2_ == ((NI32) 0)));
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
N_LIB_PRIVATE N_NIMCALL(NI16, getAttributes__pureZterminal_187)(NI h) {
	NI16 result;
	tyObject_CONSOLE_SCREEN_BUFFER_INFO__r6d5R6U7A9aP1xHUbo2o04A c;
{	result = (NI16)0;
	nimZeroMem((void*)(&c), sizeof(tyObject_CONSOLE_SCREEN_BUFFER_INFO__r6d5R6U7A9aP1xHUbo2o04A));
	{
		NI32 T3_;
		T3_ = (NI32)0;
		T3_ = Dl_1728053324_(h, (&c));
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		result = c.wAttributes;
		goto BeforeRet_;
	}
	LA4_: ;
	result = ((NI16) 112);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, initTerminal__pureZterminal_191)(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* term) {
	NI hStdoutTemp;
	NI hStderrTemp;
	hStdoutTemp = Dl_1291845795_(((NI32) -11));
	{
		NI T3_;
		NI T4_;
		NI32 T5_;
		T3_ = (NI)0;
		T3_ = Dl_1728053323_();
		T4_ = (NI)0;
		T4_ = Dl_1728053323_();
		T5_ = (NI32)0;
		T5_ = Dl_1728053315_(T3_, hStdoutTemp, T4_, (&(*term).hStdout), ((NI32) 0), ((NI32) 1), ((NI32) 2));
		if (!(T5_ == ((NI32) 0))) goto LA6_;
	}
	LA6_: ;
	hStderrTemp = Dl_1291845795_(((NI32) -12));
	{
		NI T10_;
		NI T11_;
		NI32 T12_;
		T10_ = (NI)0;
		T10_ = Dl_1728053323_();
		T11_ = (NI)0;
		T11_ = Dl_1728053323_();
		T12_ = (NI32)0;
		T12_ = Dl_1728053315_(T10_, hStderrTemp, T11_, (&(*term).hStderr), ((NI32) 0), ((NI32) 1), ((NI32) 2));
		if (!(T12_ == ((NI32) 0))) goto LA13_;
	}
	LA13_: ;
	(*term).oldStdoutAttr = getAttributes__pureZterminal_187((*term).hStdout);
	(*term).oldStderrAttr = getAttributes__pureZterminal_187((*term).hStderr);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*, newTerminal__pureZterminal_16)(void) {
	tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* result;
	result = NIM_NIL;
	result = (tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*) newObj((&NTIpterminal__flNJLrANZti6Wiy5LTlGGA_), sizeof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og));
	initTerminal__pureZterminal_191(result);
	return result;
}
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) + (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(void, incRef__system_5363)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = pluspercent___system_696((*c).refcount, ((NI) 8));
}
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5325)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = (NI)0;
	T1_ = minuspercent___system_716(((NI) (ptrdiff_t) (usr)), ((NI) 8));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	return result;
}
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((NU32)(((NU) (x))) < (NU32)(((NU) (y))));
	return result;
}
static N_INLINE(void, rtlAddZCT__system_5368)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT__system_5319((&gch__system_5272.zct), c);
}
static N_INLINE(void, decRef__system_5370)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = minuspercent___system_716((*c).refcount, ((NI) 8));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent___system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		rtlAddZCT__system_5368(c);
	}
	LA4_: ;
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__system_5325(src);
		incRef__system_5363(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__system_5325((*dest));
		decRef__system_5370(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
static N_INLINE(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*, getTerminal__pureZterminal_26)(void) {
	tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* result;
	result = NIM_NIL;
	{
		if (!(gTerm__pureZterminal_15 == 0)) goto LA3_;
		asgnRef((void**) (&gTerm__pureZterminal_15), newTerminal__pureZterminal_16());
	}
	LA3_: ;
	result = gTerm__pureZterminal_15;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, setStyle__pureZterminal_439)(FILE* f, tySet_tyEnum_Style__NXKayqTLMsAibFwNceBlpA style) {
	NI h;
	tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* termX60gensym19_;
	NI16 old;
	NI16 T6_;
	NI16 a;
	NI32 T23_;
	termX60gensym19_ = getTerminal__pureZterminal_26();
	{
		if (!(f == stderr)) goto LA3_;
		h = (*termX60gensym19_).hStderr;
	}
	goto LA1_;
	LA3_: ;
	{
		h = (*termX60gensym19_).hStdout;
	}
	LA1_: ;
	T6_ = (NI16)0;
	T6_ = getAttributes__pureZterminal_187(h);
	old = (NI16)(T6_ & ((NI16) 119));
	a = ((NI16) 0);
	{
		if (!((style &((NU16)1<<((NU)((((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) 1)- 1))&15U)))!=0)) goto LA9_;
		a = (NI16)(a | ((NI16) 8));
	}
	LA9_: ;
	{
		if (!((style &((NU16)1<<((NU)((((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) 5)- 1))&15U)))!=0)) goto LA13_;
		a = (NI16)(a | ((NI16) 128));
	}
	LA13_: ;
	{
		if (!((style &((NU16)1<<((NU)((((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) 7)- 1))&15U)))!=0)) goto LA17_;
		a = (NI16)(a | ((NI16) 16384));
	}
	LA17_: ;
	{
		if (!((style &((NU16)1<<((NU)((((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) 4)- 1))&15U)))!=0)) goto LA21_;
		a = (NI16)(a | ((NI16) -32768));
	}
	LA21_: ;
	T23_ = (NI32)0;
	T23_ = Dl_1728053406_(h, (NI16)(old | a));
	(void)(T23_);
}
N_LIB_PRIVATE N_NIMCALL(void, resetAttributes__pureZterminal_356)(FILE* f) {
	tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* term;
	term = getTerminal__pureZterminal_26();
	{
		NI32 T5_;
		if (!(f == stderr)) goto LA3_;
		T5_ = (NI32)0;
		T5_ = Dl_1728053406_((*term).hStderr, (*term).oldStderrAttr);
		(void)(T5_);
	}
	goto LA1_;
	LA3_: ;
	{
		NI32 T7_;
		T7_ = (NI32)0;
		T7_ = Dl_1728053406_((*term).hStdout, (*term).oldStdoutAttr);
		(void)(T7_);
	}
	LA1_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, setForegroundColor__pureZterminal_503)(FILE* f, tyEnum_ForegroundColor__ez9ah4IgQc0AbdW68acioDg fg, NIM_BOOL bright) {
	NI h;
	tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* termX60gensym24_;
	NI16 old;
	NI16 T6_;
	termX60gensym24_ = getTerminal__pureZterminal_26();
	{
		if (!(f == stderr)) goto LA3_;
		h = (*termX60gensym24_).hStderr;
	}
	goto LA1_;
	LA3_: ;
	{
		h = (*termX60gensym24_).hStdout;
	}
	LA1_: ;
	T6_ = (NI16)0;
	T6_ = getAttributes__pureZterminal_187(h);
	old = (NI16)(T6_ & ((NI16) -8));
	{
		if (!(defaultForegroundColor__pureZterminal_501 == ((NI16) -1))) goto LA9_;
		defaultForegroundColor__pureZterminal_501 = old;
	}
	LA9_: ;
	{
		if (!bright) goto LA13_;
		old = (NI16)(old | ((NI16) 8));
	}
	goto LA11_;
	LA13_: ;
	{
		old = (NI16)(old & ((NI16) -9));
	}
	LA11_: ;
	{
		NI16 T20_;
		NI32 T21_;
		if (!(fg == ((tyEnum_ForegroundColor__ez9ah4IgQc0AbdW68acioDg) 39))) goto LA18_;
		T20_ = (NI16)0;
		T20_ = toU16__system_301(((NI) ((NI16)(old | defaultForegroundColor__pureZterminal_501))));
		T21_ = (NI32)0;
		T21_ = Dl_1728053406_(h, T20_);
		(void)(T21_);
	}
	goto LA16_;
	LA18_: ;
	{
		NI16 T23_;
		NI32 T24_;
		T23_ = (NI16)0;
		T23_ = toU16__system_301((NI)(((NI) (old)) | lookup__pureZterminal_515[(fg)- 30]));
		T24_ = (NI32)0;
		T24_ = Dl_1728053406_(h, T23_);
		(void)(T24_);
	}
	LA16_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_terminalInit000)(void) {
{
	TFrame FR_; FR_.len = 0;

	nimRegisterThreadLocalMarker(TM__CN3raB9atujkEiPpxYAdlgQ_3);

}/* preInitProc end */
{
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_terminalDatInit000)(void) {
static TNimNode* TM__CN3raB9atujkEiPpxYAdlgQ_2_7[7];
static TNimNode TM__CN3raB9atujkEiPpxYAdlgQ_0[8];
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.size = sizeof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og);
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.align = NIM_ALIGNOF(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og);
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.kind = 18;
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.base = 0;
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.flags = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_2_7[0] = &TM__CN3raB9atujkEiPpxYAdlgQ_0[1];
TM__CN3raB9atujkEiPpxYAdlgQ_0[1].kind = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_0[1].offset = offsetof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og, trueColorIsSupported);
TM__CN3raB9atujkEiPpxYAdlgQ_0[1].typ = (&NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__CN3raB9atujkEiPpxYAdlgQ_0[1].name = "trueColorIsSupported";
TM__CN3raB9atujkEiPpxYAdlgQ_2_7[1] = &TM__CN3raB9atujkEiPpxYAdlgQ_0[2];
TM__CN3raB9atujkEiPpxYAdlgQ_0[2].kind = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_0[2].offset = offsetof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og, trueColorIsEnabled);
TM__CN3raB9atujkEiPpxYAdlgQ_0[2].typ = (&NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__CN3raB9atujkEiPpxYAdlgQ_0[2].name = "trueColorIsEnabled";
TM__CN3raB9atujkEiPpxYAdlgQ_2_7[2] = &TM__CN3raB9atujkEiPpxYAdlgQ_0[3];
TM__CN3raB9atujkEiPpxYAdlgQ_0[3].kind = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_0[3].offset = offsetof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og, fgSetColor);
TM__CN3raB9atujkEiPpxYAdlgQ_0[3].typ = (&NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__CN3raB9atujkEiPpxYAdlgQ_0[3].name = "fgSetColor";
TM__CN3raB9atujkEiPpxYAdlgQ_2_7[3] = &TM__CN3raB9atujkEiPpxYAdlgQ_0[4];
TM__CN3raB9atujkEiPpxYAdlgQ_0[4].kind = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_0[4].offset = offsetof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og, hStdout);
TM__CN3raB9atujkEiPpxYAdlgQ_0[4].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__CN3raB9atujkEiPpxYAdlgQ_0[4].name = "hStdout";
TM__CN3raB9atujkEiPpxYAdlgQ_2_7[4] = &TM__CN3raB9atujkEiPpxYAdlgQ_0[5];
TM__CN3raB9atujkEiPpxYAdlgQ_0[5].kind = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_0[5].offset = offsetof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og, hStderr);
TM__CN3raB9atujkEiPpxYAdlgQ_0[5].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__CN3raB9atujkEiPpxYAdlgQ_0[5].name = "hStderr";
TM__CN3raB9atujkEiPpxYAdlgQ_2_7[5] = &TM__CN3raB9atujkEiPpxYAdlgQ_0[6];
TM__CN3raB9atujkEiPpxYAdlgQ_0[6].kind = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_0[6].offset = offsetof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og, oldStdoutAttr);
TM__CN3raB9atujkEiPpxYAdlgQ_0[6].typ = (&NTIint4954__kDPg4wXyR8DDyA0MeEjIsw_);
TM__CN3raB9atujkEiPpxYAdlgQ_0[6].name = "oldStdoutAttr";
TM__CN3raB9atujkEiPpxYAdlgQ_2_7[6] = &TM__CN3raB9atujkEiPpxYAdlgQ_0[7];
TM__CN3raB9atujkEiPpxYAdlgQ_0[7].kind = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_0[7].offset = offsetof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og, oldStderrAttr);
TM__CN3raB9atujkEiPpxYAdlgQ_0[7].typ = (&NTIint4954__kDPg4wXyR8DDyA0MeEjIsw_);
TM__CN3raB9atujkEiPpxYAdlgQ_0[7].name = "oldStderrAttr";
TM__CN3raB9atujkEiPpxYAdlgQ_0[0].len = 7; TM__CN3raB9atujkEiPpxYAdlgQ_0[0].kind = 2; TM__CN3raB9atujkEiPpxYAdlgQ_0[0].sons = &TM__CN3raB9atujkEiPpxYAdlgQ_2_7[0];
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.node = &TM__CN3raB9atujkEiPpxYAdlgQ_0[0];
NTIpterminal__flNJLrANZti6Wiy5LTlGGA_.size = sizeof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*);
NTIpterminal__flNJLrANZti6Wiy5LTlGGA_.align = NIM_ALIGNOF(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*);
NTIpterminal__flNJLrANZti6Wiy5LTlGGA_.kind = 22;
NTIpterminal__flNJLrANZti6Wiy5LTlGGA_.base = (&NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_);
NTIpterminal__flNJLrANZti6Wiy5LTlGGA_.marker = Marker_tyRef__flNJLrANZti6Wiy5LTlGGA;
if (!((TM__CN3raB9atujkEiPpxYAdlgQ_4 = nimLoadLibrary(((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_6)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_7));
	Dl_1728053315_ = (tyProc__oew1DfaGl5XhHmnBK0HYXQ) nimGetProcAddr(TM__CN3raB9atujkEiPpxYAdlgQ_4, "DuplicateHandle");
	Dl_1728053323_ = (tyProc__uryidYWkntM7ddjZSyxvyQ) nimGetProcAddr(TM__CN3raB9atujkEiPpxYAdlgQ_4, "GetCurrentProcess");
	Dl_1728053324_ = (tyProc__vjGHiWUJwFzOgSxDffBb6Q) nimGetProcAddr(TM__CN3raB9atujkEiPpxYAdlgQ_4, "GetConsoleScreenBufferInfo");
	Dl_1728053406_ = (tyProc__oPCjp4xTgEl9a8fqSzOv8lw) nimGetProcAddr(TM__CN3raB9atujkEiPpxYAdlgQ_4, "SetConsoleTextAttribute");
}

