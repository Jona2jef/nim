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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct RootObj RootObj;
typedef struct tySequence__xv3aaFd3JCw8NbmALHiezQ tySequence__xv3aaFd3JCw8NbmALHiezQ;
typedef struct tyTuple__sPaDkVPSC0MkcoXCxPH9ccA tyTuple__sPaDkVPSC0MkcoXCxPH9ccA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct tyObject_KeyError__t7nhKLvXTQS9cS8ByJU9bIag tyObject_KeyError__t7nhKLvXTQS9cS8ByJU9bIag;
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
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
struct RootObj {
TNimType* m_type;
};
typedef NU8 tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ;
struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg {
  RootObj Sup;
NI counter;
tySequence__xv3aaFd3JCw8NbmALHiezQ* data;
tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ mode;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyTuple__sPaDkVPSC0MkcoXCxPH9ccA {
NimStringDesc* Field0;
NimStringDesc* Field1;
NIM_BOOL Field2;
};
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
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_KeyError__t7nhKLvXTQS9cS8ByJU9bIag {
  tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw Sup;
};
typedef NU8 tySet_tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg;
typedef NU8 tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg;
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__xv3aaFd3JCw8NbmALHiezQ {
  TGenericSeq Sup;
  tyTuple__sPaDkVPSC0MkcoXCxPH9ccA data[SEQ_DECL_SIZE];
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__xv3aaFd3JCw8NbmALHiezQ)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef__n9cmoMXcDs47wYDFGEXuCfw)(void* p, NI op);
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefRC1)(void* p);
static N_INLINE(void, decRef__system_5345)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__system_5343)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__system_5294)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5300)(void* usr);
N_LIB_PRIVATE N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(NI, rawGet__pureZstrtabs_121)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(NI, myhash__pureZstrtabs_101)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_279)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreCase__pureZhashes_353)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreStyle__pureZhashes_290)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, myCmp__pureZstrtabs_105)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(NI, cmp__system_1549)(NimStringDesc* x, NimStringDesc* y);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nextTry__pureZstrtabs_117)(NI h, NI maxHash);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__system_5338)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, mustRehash__pureZstrtabs_110)(NI length, NI counter);
N_LIB_PRIVATE N_NIMCALL(void, enlarge__pureZstrtabs_199)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t);
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(void, rawInsert__pureZstrtabs_187)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, tySequence__xv3aaFd3JCw8NbmALHiezQ** data, NimStringDesc* key, NimStringDesc* val);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getValue__pureZstrtabs_317)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, tySet_tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg flags, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsthasKey)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getOrDefault__pureZstrtabs_173)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key, NimStringDesc* default_0);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getEnv__pureZos_400)(NimStringDesc* key, NimStringDesc* default_0);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, raiseFormatException__pureZstrtabs_314)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__system_7773)(NimStringDesc* s, NI first, NI last);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
extern TNimType NTIrootobj__ytyiCJqK439aF9cIibuRVpAg_;
N_LIB_PRIVATE TNimType NTIstringtableobj__V5PVrt9bIxZEeV7lfvqqtNg_;
extern TNimType NTIint__rR5Bzr1D5krxoo1NcNyeMA_;
N_LIB_PRIVATE TNimType NTIkeyvaluepair__sPaDkVPSC0MkcoXCxPH9ccA_;
extern TNimType NTIstring__77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_;
N_LIB_PRIVATE TNimType NTIkeyvaluepairseq__xv3aaFd3JCw8NbmALHiezQ_;
N_LIB_PRIVATE TNimType NTIstringtablemode__G9c4wVDFIzf0xHmQvxso9a9cQ_;
N_LIB_PRIVATE TNimType NTIstringtableref__n9cmoMXcDs47wYDFGEXuCfw_;
extern TNimType NTIrefkeyerror__8SzoIAgLw9ci2v0yafHj9b6Q_;
extern TNimType NTIkeyerror__t7nhKLvXTQS9cS8ByJU9bIag_;
STRING_LITERAL(TM__ZT9crccxweoChVXn9cHcxIXQ_7, "key not found: ", 15);
extern TNimType NTIrefvalueerror__Ie1m0dv1ZHg72IgPRr1cDw_;
extern TNimType NTIvalueerror__yoNlBGx0D2tRizIdhQuENw_;
STRING_LITERAL(TM__ZT9crccxweoChVXn9cHcxIXQ_8, "format string: key not found: ", 30);
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__system_5247;
static N_NIMCALL(void, Marker_tySequence__xv3aaFd3JCw8NbmALHiezQ)(void* p, NI op) {
	tySequence__xv3aaFd3JCw8NbmALHiezQ* a;
	NI T1_;
	a = (tySequence__xv3aaFd3JCw8NbmALHiezQ*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].Field0, op);
	nimGCvisit((void*)a->data[T1_].Field1, op);
	}
}
static N_NIMCALL(void, Marker_tyRef__n9cmoMXcDs47wYDFGEXuCfw)(void* p, NI op) {
	tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* a;
	a = (tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*)p;
	nimGCvisit((void*)(*a).data, op);
}
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((NU64)(((NU) (x))) < (NU64)(((NU) (y))));
	return result;
}
static N_INLINE(void, rtlAddZCT__system_5343)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT__system_5294((&gch__system_5247.zct), c);
}
static N_INLINE(void, decRef__system_5345)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = minuspercent___system_716((*c).refcount, ((NI) 8));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent___system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		rtlAddZCT__system_5343(c);
	}
	LA4_: ;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5300)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = (NI)0;
	T1_ = minuspercent___system_716(((NI) (ptrdiff_t) (usr)), ((NI) 16));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	return result;
}
static N_INLINE(void, nimGCunrefRC1)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__system_5300(p);
	decRef__system_5345(T1_);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*, nstnewStringTable)(tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ mode) {
	tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* result;
	result = NIM_NIL;
	result = (tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*) newObj((&NTIstringtableref__n9cmoMXcDs47wYDFGEXuCfw_), sizeof(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg));
	(*result).Sup.m_type = (&NTIstringtableobj__V5PVrt9bIxZEeV7lfvqqtNg_);
	(*result).mode = mode;
	(*result).counter = ((NI) 0);
	if ((*result).data) { nimGCunrefRC1((*result).data); (*result).data = NIM_NIL; }
	(*result).data = (tySequence__xv3aaFd3JCw8NbmALHiezQ*) newSeqRC1((&NTIkeyvaluepairseq__xv3aaFd3JCw8NbmALHiezQ_), ((NI) 64));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, myhash__pureZstrtabs_101)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key) {
	NI result;
	result = (NI)0;
	switch ((*t).mode) {
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ) 0):
	{
		result = hash__pureZhashes_279(key);
	}
	break;
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ) 1):
	{
		result = hashIgnoreCase__pureZhashes_353(key);
	}
	break;
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ) 2):
	{
		result = hashIgnoreStyle__pureZhashes_290(key);
	}
	break;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, myCmp__pureZstrtabs_105)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	switch ((*t).mode) {
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ) 0):
	{
		NI T2_;
		T2_ = (NI)0;
		T2_ = cmp__system_1549(a, b);
		result = (T2_ == ((NI) 0));
	}
	break;
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ) 1):
	{
		NI T4_;
		T4_ = (NI)0;
		T4_ = nsuCmpIgnoreCase(a, b);
		result = (T4_ == ((NI) 0));
	}
	break;
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ) 2):
	{
		NI T6_;
		T6_ = (NI)0;
		T6_ = nsuCmpIgnoreStyle(a, b);
		result = (T6_ == ((NI) 0));
	}
	break;
	}
	return result;
}
static N_INLINE(NI, nextTry__pureZstrtabs_117)(NI h, NI maxHash) {
	NI result;
	result = (NI)0;
	result = (NI)((NI)(h + ((NI) 1)) & maxHash);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rawGet__pureZstrtabs_121)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key) {
	NI result;
	NI h;
	NI T1_;
	NI T2_;
{	result = (NI)0;
	T1_ = (NI)0;
	T1_ = myhash__pureZstrtabs_101(t, key);
	T2_ = (((*t).data ? (*t).data->Sup.len : 0)-1);
	h = (NI)(T1_ & T2_);
	{
		while (1) {
			NI T10_;
			if (!(*t).data->data[h].Field2) goto LA4;
			{
				NIM_BOOL T7_;
				T7_ = (NIM_BOOL)0;
				T7_ = myCmp__pureZstrtabs_105(t, (*t).data->data[h].Field0, key);
				if (!T7_) goto LA8_;
				result = h;
				goto BeforeRet_;
			}
			LA8_: ;
			T10_ = (((*t).data ? (*t).data->Sup.len : 0)-1);
			h = nextTry__pureZstrtabs_117(h, T10_);
		} LA4: ;
	}
	result = ((NI) -1);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsthasKey)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key) {
	NIM_BOOL result;
	NI T1_;
	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = rawGet__pureZstrtabs_121(t, key);
	result = (((NI) 0) <= T1_);
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
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) + (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(void, incRef__system_5338)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = pluspercent___system_696((*c).refcount, ((NI) 8));
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__system_5300(src);
		incRef__system_5338(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__system_5300((*dest));
		decRef__system_5345(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc**, nstTake)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key) {
	NimStringDesc** result;
	NI indexX60gensym3_;
	result = (NimStringDesc**)0;
	indexX60gensym3_ = rawGet__pureZstrtabs_121(t, key);
	{
		if (!(((NI) 0) <= indexX60gensym3_)) goto LA3_;
		result = (&(*t).data->data[indexX60gensym3_].Field1);
	}
	goto LA1_;
	LA3_: ;
	{
		tyObject_KeyError__t7nhKLvXTQS9cS8ByJU9bIag* T6_;
		NimStringDesc* T7_;
		T6_ = NIM_NIL;
		T6_ = (tyObject_KeyError__t7nhKLvXTQS9cS8ByJU9bIag*) newObj((&NTIrefkeyerror__8SzoIAgLw9ci2v0yafHj9b6Q_), sizeof(tyObject_KeyError__t7nhKLvXTQS9cS8ByJU9bIag));
		(*T6_).Sup.Sup.Sup.Sup.m_type = (&NTIkeyerror__t7nhKLvXTQS9cS8ByJU9bIag_);
		(*T6_).Sup.Sup.Sup.name = "KeyError";
		T7_ = NIM_NIL;
		T7_ = rawNewString((key ? key->Sup.len : 0) + 15);
appendString(T7_, ((NimStringDesc*) &TM__ZT9crccxweoChVXn9cHcxIXQ_7));
appendString(T7_, key);
		asgnRef((void**) (&(*T6_).Sup.Sup.Sup.message), T7_);
		asgnRef((void**) (&(*T6_).Sup.Sup.Sup.parent), ((Exception*) NIM_NIL));
		raiseExceptionEx((Exception*)T6_, "KeyError", "[]", "strtabs.nim", 144);
	}
	LA1_: ;
	return result;
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__system_5300(p);
	decRef__system_5345(T1_);
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, mustRehash__pureZstrtabs_110)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = ((NI)(length * ((NI) 2)) < (NI)(counter * ((NI) 3)));
	if (T1_) goto LA2_;
	T1_ = ((NI)(length - counter) < ((NI) 4));
	LA2_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, rawInsert__pureZstrtabs_187)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, tySequence__xv3aaFd3JCw8NbmALHiezQ** data, NimStringDesc* key, NimStringDesc* val) {
	NI h;
	NI T1_;
	NI T2_;
	NimStringDesc* T6_;
	NimStringDesc* T7_;
	T1_ = (NI)0;
	T1_ = myhash__pureZstrtabs_101(t, key);
	T2_ = (((*data) ? (*data)->Sup.len : 0)-1);
	h = (NI)(T1_ & T2_);
	{
		while (1) {
			NI T5_;
			if (!(*data)->data[h].Field2) goto LA4;
			T5_ = (((*data) ? (*data)->Sup.len : 0)-1);
			h = nextTry__pureZstrtabs_117(h, T5_);
		} LA4: ;
	}
	T6_ = NIM_NIL;
	T6_ = (*data)->data[h].Field0; (*data)->data[h].Field0 = copyStringRC1(key);
	if (T6_) nimGCunrefNoCycle(T6_);
	T7_ = NIM_NIL;
	T7_ = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(val);
	if (T7_) nimGCunrefNoCycle(T7_);
	(*data)->data[h].Field2 = NIM_TRUE;
}
N_LIB_PRIVATE N_NIMCALL(void, enlarge__pureZstrtabs_199)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t) {
	tySequence__xv3aaFd3JCw8NbmALHiezQ* n;
	NI T1_;
	tySequence__xv3aaFd3JCw8NbmALHiezQ* T12_;
	n = NIM_NIL;
	T1_ = ((*t).data ? (*t).data->Sup.len : 0);
	n = (tySequence__xv3aaFd3JCw8NbmALHiezQ*) newSeq((&NTIkeyvaluepairseq__xv3aaFd3JCw8NbmALHiezQ_), ((NI) ((NI)(T1_ * ((NI) 2)))));
	{
		NI i;
		NI colontmp_;
		NI T3_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T3_ = (((*t).data ? (*t).data->Sup.len : 0)-1);
		colontmp_ = T3_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA5;
				i = res;
				{
					NimStringDesc* T10_;
					NimStringDesc* T11_;
					if (!(*t).data->data[i].Field2) goto LA8_;
					T10_ = NIM_NIL;
					T10_ = (*t).data->data[i].Field0;
					asgnRef((void**) (&(*t).data->data[i].Field0), NIM_NIL);
					T11_ = NIM_NIL;
					T11_ = (*t).data->data[i].Field1;
					asgnRef((void**) (&(*t).data->data[i].Field1), NIM_NIL);
					rawInsert__pureZstrtabs_187(t, (&n), T10_, T11_);
				}
				LA8_: ;
				res += ((NI) 1);
			} LA5: ;
		}
	}
	T12_ = NIM_NIL;
	T12_ = (*t).data;
	asgnRef((void**) (&(*t).data), n);
	n = T12_;
}
N_LIB_PRIVATE N_NIMCALL(void, nstPut)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key, NimStringDesc* val) {
	NI index;
	index = rawGet__pureZstrtabs_121(t, key);
	{
		NimStringDesc* T5_;
		if (!(((NI) 0) <= index)) goto LA3_;
		T5_ = NIM_NIL;
		T5_ = (*t).data->data[index].Field1; (*t).data->data[index].Field1 = copyStringRC1(val);
		if (T5_) nimGCunrefNoCycle(T5_);
	}
	goto LA1_;
	LA3_: ;
	{
		{
			NI T9_;
			NIM_BOOL T10_;
			T9_ = ((*t).data ? (*t).data->Sup.len : 0);
			T10_ = (NIM_BOOL)0;
			T10_ = mustRehash__pureZstrtabs_110(T9_, (*t).counter);
			if (!T10_) goto LA11_;
			enlarge__pureZstrtabs_199(t);
		}
		LA11_: ;
		rawInsert__pureZstrtabs_187(t, (&(*t).data), key, val);
		(*t).counter += ((NI) 1);
	}
	LA1_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, del__pureZstrtabs_356)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key) {
	NI i;
	NI msk;
	NI T1_;
	i = rawGet__pureZstrtabs_121(t, key);
	T1_ = (((*t).data ? (*t).data->Sup.len : 0)-1);
	msk = T1_;
	{
		if (!(((NI) 0) <= i)) goto LA4_;
		(*t).counter -= ((NI) 1);
		{
			{
				while (1) {
					NI j;
					NI r;
					j = i;
					r = j;
					(*t).data->data[i].Field2 = NIM_FALSE;
					asgnRef((void**) (&(*t).data->data[i].Field0), ((NimStringDesc*) NIM_NIL));
					asgnRef((void**) (&(*t).data->data[i].Field1), ((NimStringDesc*) NIM_NIL));
					{
						while (1) {
							NI T15_;
							i = (NI)((NI)(i + ((NI) 1)) & msk);
							{
								if (!!((*t).data->data[i].Field2)) goto LA13_;
								goto LA6;
							}
							LA13_: ;
							T15_ = (NI)0;
							T15_ = myhash__pureZstrtabs_101(t, (*t).data->data[i].Field0);
							r = (NI)(T15_ & msk);
							{
								NIM_BOOL T18_;
								NIM_BOOL T19_;
								NIM_BOOL T20_;
								NIM_BOOL T23_;
								NIM_BOOL T26_;
								T18_ = (NIM_BOOL)0;
								T19_ = (NIM_BOOL)0;
								T20_ = (NIM_BOOL)0;
								T20_ = (r <= i);
								if (!(T20_)) goto LA21_;
								T20_ = (j < r);
								LA21_: ;
								T19_ = T20_;
								if (T19_) goto LA22_;
								T23_ = (NIM_BOOL)0;
								T23_ = (j < r);
								if (!(T23_)) goto LA24_;
								T23_ = (i < j);
								LA24_: ;
								T19_ = T23_;
								LA22_: ;
								T18_ = T19_;
								if (T18_) goto LA25_;
								T26_ = (NIM_BOOL)0;
								T26_ = (i < j);
								if (!(T26_)) goto LA27_;
								T26_ = (r <= i);
								LA27_: ;
								T18_ = T26_;
								LA25_: ;
								if (!!(T18_)) goto LA28_;
								goto LA9;
							}
							LA28_: ;
						}
					} LA9: ;
					asgnRef((void**) (&(*t).data->data[j].Field0), (*t).data->data[i].Field0);
					asgnRef((void**) (&(*t).data->data[j].Field1), (*t).data->data[i].Field1);
					(*t).data->data[j].Field2 = (*t).data->data[i].Field2;
				}
			}
		} LA6: ;
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, nstlen)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t) {
	NI result;
	result = (NI)0;
	result = (*t).counter;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getOrDefault__pureZstrtabs_173)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key, NimStringDesc* default_0) {
	NimStringDesc* result;
	NI index;
	result = NIM_NIL;
	index = rawGet__pureZstrtabs_121(t, key);
	{
		if (!(((NI) 0) <= index)) goto LA3_;
		result = copyString((*t).data->data[index].Field1);
	}
	goto LA1_;
	LA3_: ;
	{
		result = copyString(default_0);
	}
	LA1_: ;
	return result;
}
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[(*dest).Sup.len] = c;
	(*dest).data[(NI)((*dest).Sup.len + ((NI) 1))] = 0;
	(*dest).Sup.len += ((NI) 1);
}
N_LIB_PRIVATE N_NIMCALL(void, raiseFormatException__pureZstrtabs_314)(NimStringDesc* s) {
	tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* T1_;
	NimStringDesc* T2_;
	T1_ = NIM_NIL;
	T1_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTIrefvalueerror__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTIvalueerror__yoNlBGx0D2tRizIdhQuENw_);
	(*T1_).Sup.Sup.name = "ValueError";
	T2_ = NIM_NIL;
	T2_ = rawNewString((s ? s->Sup.len : 0) + 30);
appendString(T2_, ((NimStringDesc*) &TM__ZT9crccxweoChVXn9cHcxIXQ_8));
appendString(T2_, s);
	asgnRef((void**) (&(*T1_).Sup.Sup.message), T2_);
	asgnRef((void**) (&(*T1_).Sup.Sup.parent), ((Exception*) NIM_NIL));
	raiseExceptionEx((Exception*)T1_, "ValueError", "raiseFormatException", "strtabs.nim", 299);
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getValue__pureZstrtabs_317)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, tySet_tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg flags, NimStringDesc* key) {
	NimStringDesc* result;
{	result = NIM_NIL;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nsthasKey(t, key);
		if (!T3_) goto LA4_;
		result = getOrDefault__pureZstrtabs_173(t, key, ((NimStringDesc*) NIM_NIL));
		goto BeforeRet_;
	}
	LA4_: ;
	{
		if (!((flags &((NU8)1<<((NU)(((tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg) 0))&7U)))!=0)) goto LA8_;
		result = getEnv__pureZos_400(key, ((NimStringDesc*) NIM_NIL));
	}
	goto LA6_;
	LA8_: ;
	{
		result = ((NimStringDesc*) NIM_NIL);
	}
	LA6_: ;
	{
		if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA13_;
		{
			NimStringDesc* T19_;
			if (!((flags &((NU8)1<<((NU)(((tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg) 2))&7U)))!=0)) goto LA17_;
			T19_ = NIM_NIL;
			T19_ = rawNewString((key ? key->Sup.len : 0) + 1);
appendChar(T19_, 36);
appendString(T19_, key);
			result = T19_;
		}
		goto LA15_;
		LA17_: ;
		{
			if (!!(((flags &((NU8)1<<((NU)(((tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg) 1))&7U)))!=0))) goto LA21_;
			raiseFormatException__pureZstrtabs_314(key);
		}
		goto LA15_;
		LA21_: ;
		LA15_: ;
	}
	LA13_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, tySet_tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg flags) {
	NimStringDesc* result;
	NI i;
	result = NIM_NIL;
	result = ((NimStringDesc*) NIM_NIL);
	i = ((NI) 0);
	{
		while (1) {
			if (!(i < (f ? f->Sup.len : 0))) goto LA2;
			{
				if (!((NU8)(f->data[i]) == (NU8)(36))) goto LA5_;
				switch (((NU8)(f->data[(NI)(i + ((NI) 1))]))) {
				case 36:
				{
					result = addChar(result, 36);
					i += ((NI) 2);
				}
				break;
				case 123:
				{
					NI j;
					NimStringDesc* T13_;
					NimStringDesc* T14_;
					j = (NI)(i + ((NI) 1));
					{
						while (1) {
							NIM_BOOL T11_;
							T11_ = (NIM_BOOL)0;
							T11_ = (j < (f ? f->Sup.len : 0));
							if (!(T11_)) goto LA12_;
							T11_ = !(((NU8)(f->data[j]) == (NU8)(125)));
							LA12_: ;
							if (!T11_) goto LA10;
							j += ((NI) 1);
						} LA10: ;
					}
					T13_ = NIM_NIL;
					T13_ = substr__system_7773(f, (NI)(i + ((NI) 2)), (NI)(j - ((NI) 1)));
					T14_ = NIM_NIL;
					T14_ = getValue__pureZstrtabs_317(t, flags, T13_);
					result = resizeString(result, (T14_ ? T14_->Sup.len : 0) + 0);
appendString(result, T14_);
					i = (NI)(j + ((NI) 1));
				}
				break;
				case 97 ... 122:
				case 65 ... 90:
				case 128 ... 255:
				case 95:
				{
					NI j_2;
					NimStringDesc* T20_;
					NimStringDesc* T21_;
					j_2 = (NI)(i + ((NI) 1));
					{
						while (1) {
							NIM_BOOL T18_;
							T18_ = (NIM_BOOL)0;
							T18_ = (j_2 < (f ? f->Sup.len : 0));
							if (!(T18_)) goto LA19_;
							T18_ = (((NU8)(f->data[j_2])) >= ((NU8)(97)) && ((NU8)(f->data[j_2])) <= ((NU8)(122)) || ((NU8)(f->data[j_2])) >= ((NU8)(65)) && ((NU8)(f->data[j_2])) <= ((NU8)(90)) || ((NU8)(f->data[j_2])) >= ((NU8)(48)) && ((NU8)(f->data[j_2])) <= ((NU8)(57)) || ((NU8)(f->data[j_2])) == ((NU8)(95)) || ((NU8)(f->data[j_2])) >= ((NU8)(128)) && ((NU8)(f->data[j_2])) <= ((NU8)(255)));
							LA19_: ;
							if (!T18_) goto LA17;
							j_2 += ((NI) 1);
						} LA17: ;
					}
					T20_ = NIM_NIL;
					T20_ = substr__system_7773(f, (NI)(i + ((NI) 1)), (NI)(j_2 - ((NI) 1)));
					T21_ = NIM_NIL;
					T21_ = getValue__pureZstrtabs_317(t, flags, T20_);
					result = resizeString(result, (T21_ ? T21_->Sup.len : 0) + 0);
appendString(result, T21_);
					i = j_2;
				}
				break;
				default:
				{
					result = addChar(result, f->data[i]);
					i += ((NI) 1);
				}
				break;
				}
			}
			goto LA3_;
			LA5_: ;
			{
				result = addChar(result, f->data[i]);
				i += ((NI) 1);
			}
			LA3_: ;
		} LA2: ;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_strtabsDatInit000)(void) {
static TNimNode* TM__ZT9crccxweoChVXn9cHcxIXQ_2_3[3];
static TNimNode* TM__ZT9crccxweoChVXn9cHcxIXQ_3_3[3];
static TNimNode* TM__ZT9crccxweoChVXn9cHcxIXQ_4_3[3];
NI TM__ZT9crccxweoChVXn9cHcxIXQ_6;
static char* NIM_CONST TM__ZT9crccxweoChVXn9cHcxIXQ_5[3] = {
"modeCaseSensitive", 
"modeCaseInsensitive", 
"modeStyleInsensitive"};
static TNimNode TM__ZT9crccxweoChVXn9cHcxIXQ_0[12];
NTIstringtableobj__V5PVrt9bIxZEeV7lfvqqtNg_.size = sizeof(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg);
NTIstringtableobj__V5PVrt9bIxZEeV7lfvqqtNg_.align = NIM_ALIGNOF(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg);
NTIstringtableobj__V5PVrt9bIxZEeV7lfvqqtNg_.kind = 17;
NTIstringtableobj__V5PVrt9bIxZEeV7lfvqqtNg_.base = (&NTIrootobj__ytyiCJqK439aF9cIibuRVpAg_);
TM__ZT9crccxweoChVXn9cHcxIXQ_2_3[0] = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[1];
TM__ZT9crccxweoChVXn9cHcxIXQ_0[1].kind = 1;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[1].offset = offsetof(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg, counter);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[1].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[1].name = "counter";
TM__ZT9crccxweoChVXn9cHcxIXQ_2_3[1] = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[2];
NTIkeyvaluepair__sPaDkVPSC0MkcoXCxPH9ccA_.size = sizeof(tyTuple__sPaDkVPSC0MkcoXCxPH9ccA);
NTIkeyvaluepair__sPaDkVPSC0MkcoXCxPH9ccA_.align = NIM_ALIGNOF(tyTuple__sPaDkVPSC0MkcoXCxPH9ccA);
NTIkeyvaluepair__sPaDkVPSC0MkcoXCxPH9ccA_.kind = 18;
NTIkeyvaluepair__sPaDkVPSC0MkcoXCxPH9ccA_.base = 0;
TM__ZT9crccxweoChVXn9cHcxIXQ_3_3[0] = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[4];
TM__ZT9crccxweoChVXn9cHcxIXQ_0[4].kind = 1;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[4].offset = offsetof(tyTuple__sPaDkVPSC0MkcoXCxPH9ccA, Field0);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[4].typ = (&NTIstring__77mFvmsOLKik79ci2hXkHEg_);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[4].name = "Field0";
TM__ZT9crccxweoChVXn9cHcxIXQ_3_3[1] = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[5];
TM__ZT9crccxweoChVXn9cHcxIXQ_0[5].kind = 1;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[5].offset = offsetof(tyTuple__sPaDkVPSC0MkcoXCxPH9ccA, Field1);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[5].typ = (&NTIstring__77mFvmsOLKik79ci2hXkHEg_);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[5].name = "Field1";
TM__ZT9crccxweoChVXn9cHcxIXQ_3_3[2] = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[6];
TM__ZT9crccxweoChVXn9cHcxIXQ_0[6].kind = 1;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[6].offset = offsetof(tyTuple__sPaDkVPSC0MkcoXCxPH9ccA, Field2);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[6].typ = (&NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[6].name = "Field2";
TM__ZT9crccxweoChVXn9cHcxIXQ_0[3].len = 3; TM__ZT9crccxweoChVXn9cHcxIXQ_0[3].kind = 2; TM__ZT9crccxweoChVXn9cHcxIXQ_0[3].sons = &TM__ZT9crccxweoChVXn9cHcxIXQ_3_3[0];
NTIkeyvaluepair__sPaDkVPSC0MkcoXCxPH9ccA_.node = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[3];
NTIkeyvaluepairseq__xv3aaFd3JCw8NbmALHiezQ_.size = sizeof(tySequence__xv3aaFd3JCw8NbmALHiezQ*);
NTIkeyvaluepairseq__xv3aaFd3JCw8NbmALHiezQ_.align = NIM_ALIGNOF(tySequence__xv3aaFd3JCw8NbmALHiezQ*);
NTIkeyvaluepairseq__xv3aaFd3JCw8NbmALHiezQ_.kind = 24;
NTIkeyvaluepairseq__xv3aaFd3JCw8NbmALHiezQ_.base = (&NTIkeyvaluepair__sPaDkVPSC0MkcoXCxPH9ccA_);
NTIkeyvaluepairseq__xv3aaFd3JCw8NbmALHiezQ_.marker = Marker_tySequence__xv3aaFd3JCw8NbmALHiezQ;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[2].kind = 1;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[2].offset = offsetof(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg, data);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[2].typ = (&NTIkeyvaluepairseq__xv3aaFd3JCw8NbmALHiezQ_);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[2].name = "data";
TM__ZT9crccxweoChVXn9cHcxIXQ_2_3[2] = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[7];
NTIstringtablemode__G9c4wVDFIzf0xHmQvxso9a9cQ_.size = sizeof(tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ);
NTIstringtablemode__G9c4wVDFIzf0xHmQvxso9a9cQ_.align = NIM_ALIGNOF(tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ);
NTIstringtablemode__G9c4wVDFIzf0xHmQvxso9a9cQ_.kind = 14;
NTIstringtablemode__G9c4wVDFIzf0xHmQvxso9a9cQ_.base = 0;
NTIstringtablemode__G9c4wVDFIzf0xHmQvxso9a9cQ_.flags = 3;
for (TM__ZT9crccxweoChVXn9cHcxIXQ_6 = 0; TM__ZT9crccxweoChVXn9cHcxIXQ_6 < 3; TM__ZT9crccxweoChVXn9cHcxIXQ_6++) {
TM__ZT9crccxweoChVXn9cHcxIXQ_0[TM__ZT9crccxweoChVXn9cHcxIXQ_6+8].kind = 1;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[TM__ZT9crccxweoChVXn9cHcxIXQ_6+8].offset = TM__ZT9crccxweoChVXn9cHcxIXQ_6;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[TM__ZT9crccxweoChVXn9cHcxIXQ_6+8].name = TM__ZT9crccxweoChVXn9cHcxIXQ_5[TM__ZT9crccxweoChVXn9cHcxIXQ_6];
TM__ZT9crccxweoChVXn9cHcxIXQ_4_3[TM__ZT9crccxweoChVXn9cHcxIXQ_6] = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[TM__ZT9crccxweoChVXn9cHcxIXQ_6+8];
}
TM__ZT9crccxweoChVXn9cHcxIXQ_0[11].len = 3; TM__ZT9crccxweoChVXn9cHcxIXQ_0[11].kind = 2; TM__ZT9crccxweoChVXn9cHcxIXQ_0[11].sons = &TM__ZT9crccxweoChVXn9cHcxIXQ_4_3[0];
NTIstringtablemode__G9c4wVDFIzf0xHmQvxso9a9cQ_.node = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[11];
TM__ZT9crccxweoChVXn9cHcxIXQ_0[7].kind = 1;
TM__ZT9crccxweoChVXn9cHcxIXQ_0[7].offset = offsetof(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg, mode);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[7].typ = (&NTIstringtablemode__G9c4wVDFIzf0xHmQvxso9a9cQ_);
TM__ZT9crccxweoChVXn9cHcxIXQ_0[7].name = "mode";
TM__ZT9crccxweoChVXn9cHcxIXQ_0[0].len = 3; TM__ZT9crccxweoChVXn9cHcxIXQ_0[0].kind = 2; TM__ZT9crccxweoChVXn9cHcxIXQ_0[0].sons = &TM__ZT9crccxweoChVXn9cHcxIXQ_2_3[0];
NTIstringtableobj__V5PVrt9bIxZEeV7lfvqqtNg_.node = &TM__ZT9crccxweoChVXn9cHcxIXQ_0[0];
NTIstringtableref__n9cmoMXcDs47wYDFGEXuCfw_.size = sizeof(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*);
NTIstringtableref__n9cmoMXcDs47wYDFGEXuCfw_.align = NIM_ALIGNOF(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*);
NTIstringtableref__n9cmoMXcDs47wYDFGEXuCfw_.kind = 22;
NTIstringtableref__n9cmoMXcDs47wYDFGEXuCfw_.base = (&NTIstringtableobj__V5PVrt9bIxZEeV7lfvqqtNg_);
NTIstringtableref__n9cmoMXcDs47wYDFGEXuCfw_.marker = Marker_tyRef__n9cmoMXcDs47wYDFGEXuCfw;
}

