/* Generated by Nim Compiler v1.6.2 */
#define NIM_INTBITS 32

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
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TType__facALICuu8zUj0hjvbTLFg tyObject_TType__facALICuu8zUj0hjvbTLFg;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ;
typedef struct tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA;
typedef struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g;
typedef struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyObject_TNodeTable__wN7B39cKxLpMkvKNm9bduZ0A tyObject_TNodeTable__wN7B39cKxLpMkvKNm9bduZ0A;
typedef struct tySequence__vhmj4KkIKPinmRXny9c2Q6Q tySequence__vhmj4KkIKPinmRXny9c2Q6Q;
typedef struct tyObject_TNodePair__EZfI4tFqtDSTQys2UInNjg tyObject_TNodePair__EZfI4tFqtDSTQys2UInNjg;
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
struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag__jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType__facALICuu8zUj0hjvbTLFg* typ;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info;
tySet_tyEnum_TNodeFlag__jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
} _kind_1;
struct {NF floatVal;
} _kind_2;
struct {NimStringDesc* strVal;
} _kind_3;
struct {tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* sym;
} _kind_4;
struct {tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* ident;
} _kind_5;
struct {tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} _kind_6;
};
};
struct tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA {
NI id;
NimStringDesc* s;
tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* next;
NI h;
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
struct RootObj {
TNimType* m_type;
};
struct tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g {
NI32 module;
NI32 item;
};
struct tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w {
  RootObj Sup;
tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g itemId;
};
typedef NU8 tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw;
typedef NU16 tyEnum_TMagic__shZhZOdbVC5nnFvcXQAImg;
typedef NU64 tySet_tyEnum_TSymFlag__K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg;
typedef NU8 tyEnum_TLocKind__O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc__JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag__o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind__O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc__JK9cKMX3XnqHaUky9b6gkGEw storage;
tySet_tyEnum_TLocFlag__o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* lode;
tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* r;
};
struct tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ {
  tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w Sup;
tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* gcUnsafetyReason;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* transformedBody;
} _kind_1;
struct {tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* guard;
NI bitsize;
NI alignment;
} _kind_2;
};
tyEnum_TMagic__shZhZOdbVC5nnFvcXQAImg magic;
tyObject_TType__facALICuu8zUj0hjvbTLFg* typ;
tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* name;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info;
tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* owner;
tySet_tyEnum_TSymFlag__K9ay6LWMat9bUiT9bIbMxpDHw flags;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* ast;
tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg options;
NI position;
NI offset;
tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA* annex;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* constraint;
};
struct tyObject_TNodeTable__wN7B39cKxLpMkvKNm9bduZ0A {
NI counter;
tySequence__vhmj4KkIKPinmRXny9c2Q6Q* data;
};
struct tyObject_TNodePair__EZfI4tFqtDSTQys2UInNjg {
NI h;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* key;
NI val;
};
typedef NU8 tySet_tyEnum_TTypeCmpFlag__72pgRXSg7774cr9aCWVPORw;
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct tySequence__vhmj4KkIKPinmRXny9c2Q6Q {
  TGenericSeq Sup;
  tyObject_TNodePair__EZfI4tFqtDSTQys2UInNjg data[SEQ_DECL_SIZE];
};
struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, emarkamp___pureZhashes_3)(NI h, NI val);
N_LIB_PRIVATE N_NIMCALL(NI, toInt__system_1708)(NF f);
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_291)(NimStringDesc* x);
static N_INLINE(NI, len__ast_3198)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NI, hashTree__treetab_5)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
static N_INLINE(NI, emarkdollar___pureZhashes_18)(NI h);
N_LIB_PRIVATE N_NIMCALL(NI, nodeTableRawGet__treetab_85)(tyObject_TNodeTable__wN7B39cKxLpMkvKNm9bduZ0A t, NI k, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* key);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, treesEquivalent__treetab_37)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem__system_1735)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, sameTypeOrNil__types_1839)(tyObject_TType__facALICuu8zUj0hjvbTLFg* a, tyObject_TType__facALICuu8zUj0hjvbTLFg* b, tySet_tyEnum_TTypeCmpFlag__72pgRXSg7774cr9aCWVPORw flags);
static N_INLINE(NI, nextTry__astalgo_90)(NI h, NI maxHash);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, mustRehash__astalgo_87)(NI length, NI counter);
N_LIB_PRIVATE N_NIMCALL(tySequence__vhmj4KkIKPinmRXny9c2Q6Q*, newSeq__treetab_163)(NI len);
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(void, nodeTableRawInsert__treetab_119)(tySequence__vhmj4KkIKPinmRXny9c2Q6Q** data, NI k, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* key, NI val);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__system_5300)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5262)(void* usr);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(void, decRef__system_5307)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__system_5305)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__system_5256)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TNimType NTItnodepairseq__vhmj4KkIKPinmRXny9c2Q6Q_;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__system_5209;
static N_INLINE(NI, emarkamp___pureZhashes_3)(NI h, NI val) {
	NI result;
	NU h_2;
	NU val_2;
	NU res;
	result = (NI)0;
	h_2 = ((NU) (h));
	val_2 = ((NU) (val));
	res = (NU)((NU32)(h_2) + (NU32)(val_2));
	res = (NU)((NU32)(res) + (NU32)((NU)((NU32)(res) << (NU32)(((NI) 10)))));
	res = (NU)(res ^ (NU)((NU32)(res) >> (NU32)(((NI) 6))));
	result = ((NI) (res));
	return result;
}
static N_INLINE(NI, len__ast_3198)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = ((*n)._kind_6.sons ? (*n)._kind_6.sons->Sup.len : 0);
	result = T1_;
	return result;
}
static N_INLINE(NI, emarkdollar___pureZhashes_18)(NI h) {
	NI result;
	NU h_2;
	NU res;
	result = (NI)0;
	h_2 = ((NU) (h));
	res = (NU)((NU32)(h_2) + (NU32)((NU)((NU32)(h_2) << (NU32)(((NI) 3)))));
	res = (NU)(res ^ (NU)((NU32)(res) >> (NU32)(((NI) 11))));
	res = (NU)((NU32)(res) + (NU32)((NU)((NU32)(res) << (NU32)(((NI) 15)))));
	result = ((NI) (res));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hashTree__treetab_5)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
{	result = (NI)0;
	{
		if (!(n == 0)) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	result = (*n).kind;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 1):
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 23):
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 4):
	{
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 2):
	{
		result = emarkamp___pureZhashes_3(result, (*(*n)._kind_5.ident).h);
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* xX60gensym0_;
		xX60gensym0_ = (*n)._kind_4.sym;
		result = emarkamp___pureZhashes_3(result, (NI)((NI)((NU32)(((NI) ((*xX60gensym0_).Sup.itemId.module))) << (NU32)(((NI) 20))) + ((NI) ((*xX60gensym0_).Sup.itemId.item))));
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 5) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 15):
	{
		{
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = (IL64(-2147483648) <= (*n)._kind_1.intVal);
			if (!(T11_)) goto LA12_;
			T11_ = ((*n)._kind_1.intVal <= IL64(2147483647));
			LA12_: ;
			if (!T11_) goto LA13_;
			result = emarkamp___pureZhashes_3(result, ((NI) ((*n)._kind_1.intVal)));
		}
		LA13_: ;
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 16) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 18):
	{
		{
			NIM_BOOL T18_;
			NI T22_;
			T18_ = (NIM_BOOL)0;
			T18_ = (-1000000.0 <= (*n)._kind_2.floatVal);
			if (!(T18_)) goto LA19_;
			T18_ = ((*n)._kind_2.floatVal <= 1000000.0);
			LA19_: ;
			if (!T18_) goto LA20_;
			T22_ = (NI)0;
			T22_ = toInt__system_1708((*n)._kind_2.floatVal);
			result = emarkamp___pureZhashes_3(result, T22_);
		}
		LA20_: ;
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 20) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 22):
	{
		NI T24_;
		T24_ = (NI)0;
		T24_ = hash__pureZhashes_291((*n)._kind_3.strVal);
		result = emarkamp___pureZhashes_3(result, T24_);
	}
	break;
	default:
	{
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len__ast_3198(n);
			i_2 = ((NI) 0);
			{
				while (1) {
					NI T29_;
					if (!(i_2 < colontmp_)) goto LA28;
					i = i_2;
					T29_ = (NI)0;
					T29_ = hashTree__treetab_5((*n)._kind_6.sons->data[i]);
					result = emarkamp___pureZhashes_3(result, T29_);
					i_2 += ((NI) 1);
				} LA28: ;
			}
		}
	}
	break;
	}
	result = emarkdollar___pureZhashes_18(result);
	}BeforeRet_: ;
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, treesEquivalent__treetab_37)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* b) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		NIM_BOOL T7_;
		T6_ = (NIM_BOOL)0;
		T7_ = (NIM_BOOL)0;
		T7_ = !((a == ((tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*) NIM_NIL)));
		if (!(T7_)) goto LA8_;
		T7_ = !((b == ((tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*) NIM_NIL)));
		LA8_: ;
		T6_ = T7_;
		if (!(T6_)) goto LA9_;
		T6_ = ((*a).kind == (*b).kind);
		LA9_: ;
		if (!T6_) goto LA10_;
		switch ((*a).kind) {
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 1):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 23):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 4):
		{
			result = NIM_TRUE;
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* xX60gensym6_;
			tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* xX60gensym7_;
			xX60gensym6_ = (*a)._kind_4.sym;
			xX60gensym7_ = (*b)._kind_4.sym;
			result = ((NI)((NI)((NU32)(((NI) ((*xX60gensym6_).Sup.itemId.module))) << (NU32)(((NI) 20))) + ((NI) ((*xX60gensym6_).Sup.itemId.item))) == (NI)((NI)((NU32)(((NI) ((*xX60gensym7_).Sup.itemId.module))) << (NU32)(((NI) 20))) + ((NI) ((*xX60gensym7_).Sup.itemId.item))));
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 2):
		{
			result = ((*(*a)._kind_5.ident).id == (*(*b)._kind_5.ident).id);
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 5) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 15):
		{
			result = ((*a)._kind_1.intVal == (*b)._kind_1.intVal);
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 16) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 18):
		{
			result = ((*a)._kind_2.floatVal == (*b)._kind_2.floatVal);
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 20) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 22):
		{
			result = eqStrings((*a)._kind_3.strVal, (*b)._kind_3.strVal);
		}
		break;
		default:
		{
			{
				NI T21_;
				NI T22_;
				T21_ = (NI)0;
				T21_ = len__ast_3198(a);
				T22_ = (NI)0;
				T22_ = len__ast_3198(b);
				if (!(T21_ == T22_)) goto LA23_;
				{
					NI i;
					NI colontmp_;
					NI i_2;
					i = (NI)0;
					colontmp_ = (NI)0;
					colontmp_ = len__ast_3198(a);
					i_2 = ((NI) 0);
					{
						while (1) {
							if (!(i_2 < colontmp_)) goto LA27;
							i = i_2;
							{
								NIM_BOOL T30_;
								T30_ = (NIM_BOOL)0;
								T30_ = treesEquivalent__treetab_37((*a)._kind_6.sons->data[i], (*b)._kind_6.sons->data[i]);
								if (!!(T30_)) goto LA31_;
								goto BeforeRet_;
							}
							LA31_: ;
							i_2 += ((NI) 1);
						} LA27: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23_: ;
		}
		break;
		}
		{
			if (!result) goto LA35_;
			result = sameTypeOrNil__types_1839((*a).typ, (*b).typ, 0);
		}
		LA35_: ;
	}
	goto LA1_;
	LA10_: ;
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, nextTry__astalgo_90)(NI h, NI maxHash) {
	NI result;
	result = (NI)0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxHash);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nodeTableRawGet__treetab_85)(tyObject_TNodeTable__wN7B39cKxLpMkvKNm9bduZ0A t, NI k, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* key) {
	NI result;
	NI h;
	NI T1_;
{	result = (NI)0;
	T1_ = ((t.data ? t.data->Sup.len : 0)-1);
	h = (NI)(k & T1_);
	{
		while (1) {
			NI T10_;
			if (!!((t.data->data[h].key == ((tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*) NIM_NIL)))) goto LA3;
			{
				NIM_BOOL T6_;
				T6_ = (NIM_BOOL)0;
				T6_ = (t.data->data[h].h == k);
				if (!(T6_)) goto LA7_;
				T6_ = treesEquivalent__treetab_37(t.data->data[h].key, key);
				LA7_: ;
				if (!T6_) goto LA8_;
				result = h;
				goto BeforeRet_;
			}
			LA8_: ;
			T10_ = ((t.data ? t.data->Sup.len : 0)-1);
			h = nextTry__astalgo_90(h, T10_);
		} LA3: ;
	}
	result = ((NI) -1);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tySequence__vhmj4KkIKPinmRXny9c2Q6Q*, newSeq__treetab_163)(NI len) {
	tySequence__vhmj4KkIKPinmRXny9c2Q6Q* result;
	result = NIM_NIL;
	result = (tySequence__vhmj4KkIKPinmRXny9c2Q6Q*) newSeq((&NTItnodepairseq__vhmj4KkIKPinmRXny9c2Q6Q_), len);
	return result;
}
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) + (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(void, incRef__system_5300)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = pluspercent___system_696((*c).refcount, ((NI) 8));
}
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5262)(void* usr) {
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
static N_INLINE(void, rtlAddZCT__system_5305)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT__system_5256((&gch__system_5209.zct), c);
}
static N_INLINE(void, decRef__system_5307)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = minuspercent___system_716((*c).refcount, ((NI) 8));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent___system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		rtlAddZCT__system_5305(c);
	}
	LA4_: ;
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__system_5262(src);
		incRef__system_5300(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__system_5262((*dest));
		decRef__system_5307(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
N_LIB_PRIVATE N_NIMCALL(void, nodeTableRawInsert__treetab_119)(tySequence__vhmj4KkIKPinmRXny9c2Q6Q** data, NI k, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* key, NI val) {
	NI h;
	NI T1_;
	T1_ = (((*data) ? (*data)->Sup.len : 0)-1);
	h = (NI)(k & T1_);
	{
		while (1) {
			NI T4_;
			if (!!(((*data)->data[h].key == ((tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*) NIM_NIL)))) goto LA3;
			T4_ = (((*data) ? (*data)->Sup.len : 0)-1);
			h = nextTry__astalgo_90(h, T4_);
		} LA3: ;
	}
	(*data)->data[h].h = k;
	asgnRef((void**) (&(*data)->data[h].key), key);
	(*data)->data[h].val = val;
}
N_LIB_PRIVATE N_NIMCALL(NI, nodeTableTestOrSet__treetab_198)(tyObject_TNodeTable__wN7B39cKxLpMkvKNm9bduZ0A* t, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* key, NI val) {
	NI result;
	NI k;
	NI index;
	result = (NI)0;
	k = hashTree__treetab_5(key);
	index = nodeTableRawGet__treetab_85((*t), k, key);
	{
		if (!(((NI) 0) <= index)) goto LA3_;
		result = (*t).data->data[index].val;
	}
	goto LA1_;
	LA3_: ;
	{
		{
			NI T8_;
			NIM_BOOL T9_;
			tySequence__vhmj4KkIKPinmRXny9c2Q6Q* n;
			NI T12_;
			T8_ = ((*t).data ? (*t).data->Sup.len : 0);
			T9_ = (NIM_BOOL)0;
			T9_ = mustRehash__astalgo_87(T8_, (*t).counter);
			if (!T9_) goto LA10_;
			T12_ = ((*t).data ? (*t).data->Sup.len : 0);
			n = newSeq__treetab_163(((NI) ((NI)(T12_ * ((NI) 2)))));
			{
				NI i;
				NI colontmp_;
				NI T14_;
				NI res;
				i = (NI)0;
				colontmp_ = (NI)0;
				T14_ = (((*t).data ? (*t).data->Sup.len : 0)-1);
				colontmp_ = T14_;
				res = ((NI) 0);
				{
					while (1) {
						if (!(res <= colontmp_)) goto LA16;
						i = res;
						{
							if (!!(((*t).data->data[i].key == ((tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*) NIM_NIL)))) goto LA19_;
							nodeTableRawInsert__treetab_119((&n), (*t).data->data[i].h, (*t).data->data[i].key, (*t).data->data[i].val);
						}
						LA19_: ;
						res += ((NI) 1);
					} LA16: ;
				}
			}
			unsureAsgnRef((void**) (&(*t).data), n);
			n = NIM_NIL;
		}
		LA10_: ;
		nodeTableRawInsert__treetab_119((&(*t).data), k, key, val);
		result = val;
		(*t).counter += ((NI) 1);
	}
	LA1_: ;
	return result;
}
