/* Generated by Nim Compiler v1.6.2 */
#define NIM_INTBITS 64

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
typedef struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct RootObj RootObj;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence__WwUFq9cJ2xKRlsAWVEHyPRg tySequence__WwUFq9cJ2xKRlsAWVEHyPRg;
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
typedef tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* tyArray__USLYl0Lpkimm4FABiJ3ldA[4096];
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA {
  RootObj Sup;
tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* left;
tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* right;
NI L;
NimStringDesc* data;
};
typedef N_NIMCALL_PTR(void, tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
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
typedef NU8 tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg;
typedef NIM_CHAR tyArray__9bKy7UA2LOi2vzOViufaW1Q[1024];
struct tySequence__WwUFq9cJ2xKRlsAWVEHyPRg {
  TGenericSeq Sup;
  tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef__4hi0XQqK9aLiPuWT9acsXm9aQ)(void* p, NI op);
static N_NIMCALL(void, TM__Vw9cfUOQOae9b9bzZBlucMZQg_3)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, len__ropes_10)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* a);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_NIMCALL(void, Marker_tySequence__WwUFq9cJ2xKRlsAWVEHyPRg)(void* p, NI op);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__system_5309)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5271)(void* usr);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(void, decRef__system_5316)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__system_5314)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__system_5265)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*, pop__ropes_180)(tySequence__WwUFq9cJ2xKRlsAWVEHyPRg** s);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, setLengthSeqV2)(TGenericSeq* s, TNimType* typ, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, incrSeqV3)(TGenericSeq* s, TNimType* typ);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, add__ropes_162)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA** a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*, amp___ropes_140)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*, amp___ropes_128)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* a, tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* b);
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*, newRope__ropes_17)(NimStringDesc* data);
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*, rope__ropes_109)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*, insertInCache__ropes_90)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_291)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem__system_1735)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(void, add__ropes_159)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA** a, tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* b);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__systemZassertions_56)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__system_7744)(NimStringDesc* s, NI first, NI last);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___systemZdollars_6)(NI64 x);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__systemZio_391)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, equalsFile__ropes_385)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* r, FILE* f);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__systemZio_144)(FILE* f, void* buffer, NI len);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void, close__systemZio_218)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, writeRope__ropes_237)(FILE* f, tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* r);
N_LIB_PRIVATE N_NIMCALL(void, write__systemZio_205)(FILE* f, NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, equalsFile__ropes_453)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* r, NimStringDesc* filename);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, writeRope__ropes_241)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* head, NimStringDesc* filename);
extern TNimType NTIrootobj__ytyiCJqK439aF9cIibuRVpAg_;
N_LIB_PRIVATE TNimType NTIropeobj__OFzf0kSiPTcNreUIeJgWVA_;
extern TNimType NTIint__rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTIstring__77mFvmsOLKik79ci2hXkHEg_;
N_LIB_PRIVATE TNimType NTIrope__4hi0XQqK9aLiPuWT9acsXm9aQ_;
N_LIB_PRIVATE TNimType NTIarrayL48OO52485753_ropeT__USLYl0Lpkimm4FABiJ3ldA_;
N_LIB_PRIVATE TNimType NTIseqLropeT__WwUFq9cJ2xKRlsAWVEHyPRg_;
STRING_LITERAL(TM__Vw9cfUOQOae9b9bzZBlucMZQg_4, "$", 1);
STRING_LITERAL(TM__Vw9cfUOQOae9b9bzZBlucMZQg_5, "ropes.nim(237, 20) `false` invalid format string: ", 50);
STRING_LITERAL(TM__Vw9cfUOQOae9b9bzZBlucMZQg_6, "ropes.nim(249, 20) `false` invalid format string: ", 50);
STRING_LITERAL(TM__Vw9cfUOQOae9b9bzZBlucMZQg_7, "ropes.nim(252, 20) `false` invalid format string: ", 50);
STRING_LITERAL(TM__Vw9cfUOQOae9b9bzZBlucMZQg_8, "\012", 1);
STRING_LITERAL(TM__Vw9cfUOQOae9b9bzZBlucMZQg_9, "ropes.nim(262, 18) `false` invalid format string: ", 50);
N_LIB_PRIVATE tyArray__USLYl0Lpkimm4FABiJ3ldA cache__ropes_41;
N_LIB_PRIVATE NI gCacheTries__ropes_87 = ((NI) 0);
N_LIB_PRIVATE NI gCacheMisses__ropes_88 = ((NI) 0);
N_LIB_PRIVATE NI gCacheIntTries__ropes_89 = ((NI) 0);
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__system_5218;
static N_NIMCALL(void, Marker_tyRef__4hi0XQqK9aLiPuWT9acsXm9aQ)(void* p, NI op) {
	tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* a;
	a = (tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*)p;
	nimGCvisit((void*)(*a).left, op);
	nimGCvisit((void*)(*a).right, op);
	nimGCvisit((void*)(*a).data, op);
}
static N_NIMCALL(void, TM__Vw9cfUOQOae9b9bzZBlucMZQg_3)(void) {
	NI T1_;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 4096; T1_++) {
	nimGCvisit((void*)cache__ropes_41[T1_], 0);
	}
}
N_LIB_PRIVATE N_NIMCALL(NI, len__ropes_10)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* a) {
	NI result;
	result = (NI)0;
	{
		if (!(a == ((tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*) NIM_NIL))) goto LA3_;
		result = ((NI) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((*a).L > 0? ((*a).L) : -((*a).L));
	}
	LA1_: ;
	return result;
}
static N_NIMCALL(void, Marker_tySequence__WwUFq9cJ2xKRlsAWVEHyPRg)(void* p, NI op) {
	tySequence__WwUFq9cJ2xKRlsAWVEHyPRg* a;
	NI T1_;
	a = (tySequence__WwUFq9cJ2xKRlsAWVEHyPRg*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) + (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(void, incRef__system_5309)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = pluspercent___system_696((*c).refcount, ((NI) 8));
}
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5271)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = (NI)0;
	T1_ = minuspercent___system_716(((NI) (ptrdiff_t) (usr)), ((NI) 16));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	return result;
}
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((NU64)(((NU) (x))) < (NU64)(((NU) (y))));
	return result;
}
static N_INLINE(void, rtlAddZCT__system_5314)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT__system_5265((&gch__system_5218.zct), c);
}
static N_INLINE(void, decRef__system_5316)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = minuspercent___system_716((*c).refcount, ((NI) 8));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent___system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		rtlAddZCT__system_5314(c);
	}
	LA4_: ;
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__system_5271(src);
		incRef__system_5309(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__system_5271((*dest));
		decRef__system_5316(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
static N_INLINE(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*, pop__ropes_180)(tySequence__WwUFq9cJ2xKRlsAWVEHyPRg** s) {
	tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* result;
	NI L;
	NI T1_;
	result = NIM_NIL;
	T1_ = ((*s) ? (*s)->Sup.len : 0);
	L = (NI)(T1_ - ((NI) 1));
	result = (*s)->data[L];
	unsureAsgnRef((void**) (&(*s)), (tySequence__WwUFq9cJ2xKRlsAWVEHyPRg*) setLengthSeqV2(&((*s))->Sup, (&NTIseqLropeT__WwUFq9cJ2xKRlsAWVEHyPRg_), ((NI) (L))));
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
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___ropes_250)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* r) {
	NimStringDesc* result;
	NI T1_;
	result = NIM_NIL;
	T1_ = (NI)0;
	T1_ = len__ropes_10(r);
	result = mnewString(((NI) (T1_)));
	result = setLengthStr(result, ((NI) 0));
	{
		NimStringDesc* s;
		s = NIM_NIL;
		{
			tySequence__WwUFq9cJ2xKRlsAWVEHyPRg* stack;
			if (!!((r == ((tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*) NIM_NIL)))) goto LA5_;
			stack = (tySequence__WwUFq9cJ2xKRlsAWVEHyPRg*) newSeq((&NTIseqLropeT__WwUFq9cJ2xKRlsAWVEHyPRg_), 1);
			asgnRef((void**) (&stack->data[0]), r);
			{
				while (1) {
					NI T9_;
					tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* it;
					T9_ = (stack ? stack->Sup.len : 0);
					if (!(((NI) 0) < T9_)) goto LA8;
					it = pop__ropes_180((&stack));
					{
						while (1) {
							NI T12_;
							if (!!(((*it).left == ((tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*) NIM_NIL)))) goto LA11;
							stack = (tySequence__WwUFq9cJ2xKRlsAWVEHyPRg*) incrSeqV3((TGenericSeq*)(stack), (&NTIseqLropeT__WwUFq9cJ2xKRlsAWVEHyPRg_));
							T12_ = stack->Sup.len++;
							asgnRef((void**) (&stack->data[T12_]), (*it).right);
							it = (*it).left;
						} LA11: ;
					}
					s = (*it).data;
					result = resizeString(result, (s ? s->Sup.len : 0) + 0);
appendString(result, s);
				} LA8: ;
			}
		}
		LA5_: ;
	}
	return result;
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__system_5271(p);
	decRef__system_5316(T1_);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*, newRope__ropes_17)(NimStringDesc* data) {
	tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* result;
	NimStringDesc* T1_;
	result = NIM_NIL;
	result = (tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*) newObj((&NTIrope__4hi0XQqK9aLiPuWT9acsXm9aQ_), sizeof(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA));
	(*result).Sup.m_type = (&NTIropeobj__OFzf0kSiPTcNreUIeJgWVA_);
	(*result).L = ((NI64)-((data ? data->Sup.len : 0)));
	T1_ = NIM_NIL;
	T1_ = (*result).data; (*result).data = copyStringRC1(data);
	if (T1_) nimGCunrefNoCycle(T1_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*, amp___ropes_128)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* a, tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* b) {
	tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* result;
	result = NIM_NIL;
	{
		if (!(a == ((tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*) NIM_NIL))) goto LA3_;
		result = b;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(b == ((tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*) NIM_NIL))) goto LA6_;
		result = a;
	}
	goto LA1_;
	LA6_: ;
	{
		result = newRope__ropes_17(((NimStringDesc*) NIM_NIL));
		(*result).L = (NI)(((*a).L > 0? ((*a).L) : -((*a).L)) + ((*b).L > 0? ((*b).L) : -((*b).L)));
		asgnRef((void**) (&(*result).left), a);
		asgnRef((void**) (&(*result).right), b);
	}
	LA1_: ;
	return result;
}
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}
static N_INLINE(NIM_BOOL, equalMem__system_1735)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32) 0));
	return result;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI alen;
	NI blen;
{	result = (NIM_BOOL)0;
	alen = (a ? a->Sup.len : 0);
	blen = (b ? b->Sup.len : 0);
	{
		if (!(alen == blen)) goto LA3_;
		{
			if (!(alen == ((NI) 0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		result = equalMem__system_1735(((void*) ((&a->data[((NI) 0)]))), ((void*) ((&b->data[((NI) 0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*, insertInCache__ropes_90)(NimStringDesc* s) {
	tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* result;
	NI h;
	NI T1_;
	result = NIM_NIL;
	gCacheTries__ropes_87 += ((NI) 1);
	T1_ = (NI)0;
	T1_ = hash__pureZhashes_291(s);
	h = (NI)(T1_ & ((NI) 4095));
	result = cache__ropes_41[(h)- 0];
	{
		NIM_BOOL T4_;
		T4_ = (NIM_BOOL)0;
		T4_ = (result == 0);
		if (T4_) goto LA5_;
		T4_ = !(eqStrings((*result).data, s));
		LA5_: ;
		if (!T4_) goto LA6_;
		gCacheMisses__ropes_88 += ((NI) 1);
		result = newRope__ropes_17(s);
		asgnRef((void**) (&cache__ropes_41[(h)- 0]), result);
	}
	LA6_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*, rope__ropes_109)(NimStringDesc* s) {
	tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* result;
	result = NIM_NIL;
	{
		if (!((s ? s->Sup.len : 0) == ((NI) 0))) goto LA3_;
		result = ((tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*) NIM_NIL);
	}
	goto LA1_;
	LA3_: ;
	{
		result = insertInCache__ropes_90(s);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*, amp___ropes_140)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* a, NimStringDesc* b) {
	tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* result;
	tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* T1_;
	result = NIM_NIL;
	T1_ = NIM_NIL;
	T1_ = rope__ropes_109(b);
	result = amp___ropes_128(a, T1_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, add__ropes_162)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA** a, NimStringDesc* b) {
	unsureAsgnRef((void**) (&(*a)), amp___ropes_140((*a), b));
}
N_LIB_PRIVATE N_NIMCALL(void, add__ropes_159)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA** a, tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* b) {
	unsureAsgnRef((void**) (&(*a)), amp___ropes_128((*a), b));
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*, runtimeFormat__ropes_271)(NimStringDesc* frmt, tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA** args, NI argsLen_0) {
	tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* result;
	NI i;
	NI num;
	result = NIM_NIL;
	i = ((NI) 0);
	result = ((tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*) NIM_NIL);
	num = ((NI) 0);
	{
		while (1) {
			NI start;
			if (!(i < (frmt ? frmt->Sup.len : 0))) goto LA2;
			{
				if (!((NU8)(frmt->data[i]) == (NU8)(36))) goto LA5_;
				i += ((NI) 1);
				switch (((NU8)(frmt->data[i]))) {
				case 36:
				{
					add__ropes_162(&result, ((NimStringDesc*) &TM__Vw9cfUOQOae9b9bzZBlucMZQg_4));
					i += ((NI) 1);
				}
				break;
				case 35:
				{
					i += ((NI) 1);
					add__ropes_159(&result, args[num]);
					num += ((NI) 1);
				}
				break;
				case 48 ... 57:
				{
					NI j;
					j = ((NI) 0);
					{
						while (1) {
							j = (NI)((NI)((NI)(j * ((NI) 10)) + ((NU8)(frmt->data[i]))) - ((NI) 48));
							i += ((NI) 1);
							{
								NIM_BOOL T14_;
								T14_ = (NIM_BOOL)0;
								T14_ = ((frmt ? frmt->Sup.len : 0) <= i);
								if (T14_) goto LA15_;
								T14_ = !((((NU8)(frmt->data[i])) >= ((NU8)(48)) && ((NU8)(frmt->data[i])) <= ((NU8)(57))));
								LA15_: ;
								if (!T14_) goto LA16_;
								goto LA10;
							}
							LA16_: ;
						}
					} LA10: ;
					num = j;
					{
						if (!((NI)((argsLen_0-1) + ((NI) 1)) < j)) goto LA20_;
						{
							NimStringDesc* T26_;
							if (!NIM_TRUE) goto LA24_;
							T26_ = NIM_NIL;
							T26_ = rawNewString((frmt ? frmt->Sup.len : 0) + 50);
appendString(T26_, ((NimStringDesc*) &TM__Vw9cfUOQOae9b9bzZBlucMZQg_5));
appendString(T26_, frmt);
							failedAssertImpl__systemZassertions_56(T26_);
						}
						LA24_: ;
					}
					goto LA18_;
					LA20_: ;
					{
						add__ropes_159(&result, args[(NI)(j - ((NI) 1))]);
					}
					LA18_: ;
				}
				break;
				case 123:
				{
					NI j_2;
					i += ((NI) 1);
					j_2 = ((NI) 0);
					{
						while (1) {
							if (!(((NU8)(frmt->data[i])) >= ((NU8)(48)) && ((NU8)(frmt->data[i])) <= ((NU8)(57)))) goto LA30;
							j_2 = (NI)((NI)((NI)(j_2 * ((NI) 10)) + ((NU8)(frmt->data[i]))) - ((NI) 48));
							i += ((NI) 1);
						} LA30: ;
					}
					num = j_2;
					{
						if (!((NU8)(frmt->data[i]) == (NU8)(125))) goto LA33_;
						i += ((NI) 1);
					}
					goto LA31_;
					LA33_: ;
					{
						{
							NimStringDesc* T40_;
							if (!NIM_TRUE) goto LA38_;
							T40_ = NIM_NIL;
							T40_ = rawNewString((frmt ? frmt->Sup.len : 0) + 50);
appendString(T40_, ((NimStringDesc*) &TM__Vw9cfUOQOae9b9bzZBlucMZQg_6));
appendString(T40_, frmt);
							failedAssertImpl__systemZassertions_56(T40_);
						}
						LA38_: ;
					}
					LA31_: ;
					{
						if (!((NI)((argsLen_0-1) + ((NI) 1)) < j_2)) goto LA43_;
						{
							NimStringDesc* T49_;
							if (!NIM_TRUE) goto LA47_;
							T49_ = NIM_NIL;
							T49_ = rawNewString((frmt ? frmt->Sup.len : 0) + 50);
appendString(T49_, ((NimStringDesc*) &TM__Vw9cfUOQOae9b9bzZBlucMZQg_7));
appendString(T49_, frmt);
							failedAssertImpl__systemZassertions_56(T49_);
						}
						LA47_: ;
					}
					goto LA41_;
					LA43_: ;
					{
						add__ropes_159(&result, args[(NI)(j_2 - ((NI) 1))]);
					}
					LA41_: ;
				}
				break;
				case 110:
				{
					add__ropes_162(&result, ((NimStringDesc*) &TM__Vw9cfUOQOae9b9bzZBlucMZQg_8));
					i += ((NI) 1);
				}
				break;
				case 78:
				{
					add__ropes_162(&result, ((NimStringDesc*) &TM__Vw9cfUOQOae9b9bzZBlucMZQg_8));
					i += ((NI) 1);
				}
				break;
				default:
				{
					{
						NimStringDesc* T58_;
						if (!NIM_TRUE) goto LA56_;
						T58_ = NIM_NIL;
						T58_ = rawNewString((frmt ? frmt->Sup.len : 0) + 50);
appendString(T58_, ((NimStringDesc*) &TM__Vw9cfUOQOae9b9bzZBlucMZQg_9));
appendString(T58_, frmt);
						failedAssertImpl__systemZassertions_56(T58_);
					}
					LA56_: ;
				}
				break;
				}
			}
			LA5_: ;
			start = i;
			{
				while (1) {
					if (!(i < (frmt ? frmt->Sup.len : 0))) goto LA60;
					{
						if (!!(((NU8)(frmt->data[i]) == (NU8)(36)))) goto LA63_;
						i += ((NI) 1);
					}
					goto LA61_;
					LA63_: ;
					{
						goto LA59;
					}
					LA61_: ;
				} LA60: ;
			} LA59: ;
			{
				NimStringDesc* T70_;
				if (!(start <= (NI)(i - ((NI) 1)))) goto LA68_;
				T70_ = NIM_NIL;
				T70_ = substr__system_7744(frmt, start, (NI)(i - ((NI) 1)));
				add__ropes_162(&result, T70_);
			}
			LA68_: ;
		} LA2: ;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*, rope__ropes_115)(NI64 i) {
	tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* result;
	NimStringDesc* T1_;
	result = NIM_NIL;
	gCacheIntTries__ropes_89 += ((NI) 1);
	T1_ = NIM_NIL;
	T1_ = dollar___systemZdollars_6(i);
	result = rope__ropes_109(T1_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, prepend__ropes_265)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA** a, tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* b) {
	unsureAsgnRef((void**) (&(*a)), amp___ropes_128(b, (*a)));
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*, amp___ropes_144)(NimStringDesc* a, tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* b) {
	tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* result;
	tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* T1_;
	result = NIM_NIL;
	T1_ = NIM_NIL;
	T1_ = rope__ropes_109(a);
	result = amp___ropes_128(T1_, b);
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
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == ((NimStringDesc*) NIM_NIL));
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, equalsFile__ropes_385)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* r, FILE* f) {
	NIM_BOOL result;
	tyArray__9bKy7UA2LOi2vzOViufaW1Q buf;
	NI bpos;
	NI blen;
	NI btotal;
	NI rtotal;
	NIM_BOOL T27_;
	NI T28_;
{	result = (NIM_BOOL)0;
	nimZeroMem((void*)buf, sizeof(tyArray__9bKy7UA2LOi2vzOViufaW1Q));
	bpos = ((NI) 1024);
	blen = ((NI) 1024);
	btotal = ((NI) 0);
	rtotal = ((NI) 0);
	{
		NimStringDesc* s;
		s = NIM_NIL;
		{
			tySequence__WwUFq9cJ2xKRlsAWVEHyPRg* stack;
			if (!!((r == ((tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*) NIM_NIL)))) goto LA4_;
			stack = (tySequence__WwUFq9cJ2xKRlsAWVEHyPRg*) newSeq((&NTIseqLropeT__WwUFq9cJ2xKRlsAWVEHyPRg_), 1);
			asgnRef((void**) (&stack->data[0]), r);
			{
				while (1) {
					NI T8_;
					tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* it;
					NI spos;
					T8_ = (stack ? stack->Sup.len : 0);
					if (!(((NI) 0) < T8_)) goto LA7;
					it = pop__ropes_180((&stack));
					{
						while (1) {
							NI T11_;
							if (!!(((*it).left == ((tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*) NIM_NIL)))) goto LA10;
							stack = (tySequence__WwUFq9cJ2xKRlsAWVEHyPRg*) incrSeqV3((TGenericSeq*)(stack), (&NTIseqLropeT__WwUFq9cJ2xKRlsAWVEHyPRg_));
							T11_ = stack->Sup.len++;
							asgnRef((void**) (&stack->data[T11_]), (*it).right);
							it = (*it).left;
						} LA10: ;
					}
					s = (*it).data;
					spos = ((NI) 0);
					rtotal += (s ? s->Sup.len : 0);
					{
						while (1) {
							NI n;
							if (!(spos < (s ? s->Sup.len : 0))) goto LA13;
							{
								if (!(bpos == blen)) goto LA16_;
								bpos = ((NI) 0);
								blen = readBuffer__systemZio_144(f, ((void*) ((&buf[(((NI) 0))- 0]))), ((NI) 1024));
								btotal += blen;
								{
									if (!(blen == ((NI) 0))) goto LA20_;
									result = NIM_FALSE;
									goto BeforeRet_;
								}
								LA20_: ;
							}
							LA16_: ;
							n = (((NI)(blen - bpos) <= (NI)((s ? s->Sup.len : 0) - spos)) ? (NI)(blen - bpos) : (NI)((s ? s->Sup.len : 0) - spos));
							{
								NIM_BOOL T24_;
								T24_ = (NIM_BOOL)0;
								T24_ = equalMem__system_1735(((void*) ((&buf[(bpos)- 0]))), ((void*) ((NI)(((NI) (nimToCStringConv(s))) + spos))), ((NI) (n)));
								if (!!(T24_)) goto LA25_;
								result = NIM_FALSE;
								goto BeforeRet_;
							}
							LA25_: ;
							spos += n;
							bpos += n;
						} LA13: ;
					}
				} LA7: ;
			}
		}
		LA4_: ;
	}
	T27_ = (NIM_BOOL)0;
	T28_ = (NI)0;
	T28_ = readBuffer__systemZio_144(f, ((void*) ((&buf[(((NI) 0))- 0]))), ((NI) 1));
	T27_ = (T28_ == ((NI) 0));
	if (!(T27_)) goto LA29_;
	T27_ = (btotal == rtotal);
	LA29_: ;
	result = T27_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, equalsFile__ropes_453)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* r, NimStringDesc* filename) {
	NIM_BOOL result;
	FILE* f;
	result = (NIM_BOOL)0;
	f = (FILE*)0;
	result = open__systemZio_391(&f, filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0), ((NI) -1));
	{
		if (!result) goto LA3_;
		result = equalsFile__ropes_385(r, f);
		close__systemZio_218(f);
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, writeRope__ropes_237)(FILE* f, tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* r) {
	{
		NimStringDesc* s;
		s = NIM_NIL;
		{
			tySequence__WwUFq9cJ2xKRlsAWVEHyPRg* stack;
			if (!!((r == ((tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*) NIM_NIL)))) goto LA4_;
			stack = (tySequence__WwUFq9cJ2xKRlsAWVEHyPRg*) newSeq((&NTIseqLropeT__WwUFq9cJ2xKRlsAWVEHyPRg_), 1);
			asgnRef((void**) (&stack->data[0]), r);
			{
				while (1) {
					NI T8_;
					tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* it;
					T8_ = (stack ? stack->Sup.len : 0);
					if (!(((NI) 0) < T8_)) goto LA7;
					it = pop__ropes_180((&stack));
					{
						while (1) {
							NI T11_;
							if (!!(((*it).left == ((tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*) NIM_NIL)))) goto LA10;
							stack = (tySequence__WwUFq9cJ2xKRlsAWVEHyPRg*) incrSeqV3((TGenericSeq*)(stack), (&NTIseqLropeT__WwUFq9cJ2xKRlsAWVEHyPRg_));
							T11_ = stack->Sup.len++;
							asgnRef((void**) (&stack->data[T11_]), (*it).right);
							it = (*it).left;
						} LA10: ;
					}
					s = (*it).data;
					write__systemZio_205(f, s);
				} LA7: ;
			}
		}
		LA4_: ;
	}
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, writeRope__ropes_241)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* head, NimStringDesc* filename) {
	NIM_BOOL result;
	FILE* f;
	result = (NIM_BOOL)0;
	f = (FILE*)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__systemZio_391(&f, filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 1), ((NI) -1));
		if (!T3_) goto LA4_;
		{
			if (!!((head == ((tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*) NIM_NIL)))) goto LA8_;
			writeRope__ropes_237(f, head);
		}
		LA8_: ;
		close__systemZio_218(f);
		result = NIM_TRUE;
	}
	goto LA1_;
	LA4_: ;
	{
		result = NIM_FALSE;
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, writeRopeIfNotEqual__ropes_458)(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* r, NimStringDesc* filename) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = equalsFile__ropes_453(r, filename);
		if (!!(T3_)) goto LA4_;
		result = writeRope__ropes_241(r, filename);
	}
	goto LA1_;
	LA4_: ;
	{
		result = NIM_FALSE;
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_ropesInit000)(void) {
{
	TFrame FR_; FR_.len = 0;

	nimRegisterGlobalMarker(TM__Vw9cfUOQOae9b9bzZBlucMZQg_3);

}/* preInitProc end */
{
}
}

N_LIB_PRIVATE N_NIMCALL(void, compiler_ropesDatInit000)(void) {
static TNimNode* TM__Vw9cfUOQOae9b9bzZBlucMZQg_2_4[4];
static TNimNode TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[5];
NTIropeobj__OFzf0kSiPTcNreUIeJgWVA_.size = sizeof(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA);
NTIropeobj__OFzf0kSiPTcNreUIeJgWVA_.align = NIM_ALIGNOF(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA);
NTIropeobj__OFzf0kSiPTcNreUIeJgWVA_.kind = 17;
NTIropeobj__OFzf0kSiPTcNreUIeJgWVA_.base = (&NTIrootobj__ytyiCJqK439aF9cIibuRVpAg_);
NTIropeobj__OFzf0kSiPTcNreUIeJgWVA_.flags = 2;
TM__Vw9cfUOQOae9b9bzZBlucMZQg_2_4[0] = &TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[1];
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[1].kind = 1;
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[1].offset = offsetof(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA, left);
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[1].typ = (&NTIrope__4hi0XQqK9aLiPuWT9acsXm9aQ_);
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[1].name = "left";
TM__Vw9cfUOQOae9b9bzZBlucMZQg_2_4[1] = &TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[2];
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[2].kind = 1;
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[2].offset = offsetof(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA, right);
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[2].typ = (&NTIrope__4hi0XQqK9aLiPuWT9acsXm9aQ_);
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[2].name = "right";
TM__Vw9cfUOQOae9b9bzZBlucMZQg_2_4[2] = &TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[3];
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[3].kind = 1;
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[3].offset = offsetof(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA, L);
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[3].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[3].name = "L";
TM__Vw9cfUOQOae9b9bzZBlucMZQg_2_4[3] = &TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[4];
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[4].kind = 1;
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[4].offset = offsetof(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA, data);
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[4].typ = (&NTIstring__77mFvmsOLKik79ci2hXkHEg_);
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[4].name = "data";
TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[0].len = 4; TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[0].kind = 2; TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[0].sons = &TM__Vw9cfUOQOae9b9bzZBlucMZQg_2_4[0];
NTIropeobj__OFzf0kSiPTcNreUIeJgWVA_.node = &TM__Vw9cfUOQOae9b9bzZBlucMZQg_0[0];
NTIrope__4hi0XQqK9aLiPuWT9acsXm9aQ_.size = sizeof(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*);
NTIrope__4hi0XQqK9aLiPuWT9acsXm9aQ_.align = NIM_ALIGNOF(tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA*);
NTIrope__4hi0XQqK9aLiPuWT9acsXm9aQ_.kind = 22;
NTIrope__4hi0XQqK9aLiPuWT9acsXm9aQ_.base = (&NTIropeobj__OFzf0kSiPTcNreUIeJgWVA_);
NTIrope__4hi0XQqK9aLiPuWT9acsXm9aQ_.marker = Marker_tyRef__4hi0XQqK9aLiPuWT9acsXm9aQ;
NTIarrayL48OO52485753_ropeT__USLYl0Lpkimm4FABiJ3ldA_.size = sizeof(tyArray__USLYl0Lpkimm4FABiJ3ldA);
NTIarrayL48OO52485753_ropeT__USLYl0Lpkimm4FABiJ3ldA_.align = NIM_ALIGNOF(tyArray__USLYl0Lpkimm4FABiJ3ldA);
NTIarrayL48OO52485753_ropeT__USLYl0Lpkimm4FABiJ3ldA_.kind = 16;
NTIarrayL48OO52485753_ropeT__USLYl0Lpkimm4FABiJ3ldA_.base = (&NTIrope__4hi0XQqK9aLiPuWT9acsXm9aQ_);
NTIseqLropeT__WwUFq9cJ2xKRlsAWVEHyPRg_.size = sizeof(tySequence__WwUFq9cJ2xKRlsAWVEHyPRg*);
NTIseqLropeT__WwUFq9cJ2xKRlsAWVEHyPRg_.align = NIM_ALIGNOF(tySequence__WwUFq9cJ2xKRlsAWVEHyPRg*);
NTIseqLropeT__WwUFq9cJ2xKRlsAWVEHyPRg_.kind = 24;
NTIseqLropeT__WwUFq9cJ2xKRlsAWVEHyPRg_.base = (&NTIrope__4hi0XQqK9aLiPuWT9acsXm9aQ_);
NTIseqLropeT__WwUFq9cJ2xKRlsAWVEHyPRg_.marker = Marker_tySequence__WwUFq9cJ2xKRlsAWVEHyPRg;
}
