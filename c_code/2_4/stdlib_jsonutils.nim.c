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
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
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
typedef struct tyTuple__jq7X5k7hWG0tdTZTDkiyGQ tyTuple__jq7X5k7hWG0tdTZTDkiyGQ;
typedef struct tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q;
typedef struct tyObject_Joptions__LkVLf5IMKBOgl3HJApAzgQ tyObject_Joptions__LkVLf5IMKBOgl3HJApAzgQ;
typedef struct tyTuple__d8cOxWret6fRDupvUsyoyw tyTuple__d8cOxWret6fRDupvUsyoyw;
typedef struct tyObject_ToJsonOptions__T9bCB8O1ZaL5BIvSkjYqMnQ tyObject_ToJsonOptions__T9bCB8O1ZaL5BIvSkjYqMnQ;
typedef struct tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg;
typedef struct tySequence__MlAD6nAPq9bHKla9cWiIZP0g tySequence__MlAD6nAPq9bHKla9cWiIZP0g;
typedef struct tySequence__oLpBKXzW3hF9aCVMo5EymfQ tySequence__oLpBKXzW3hF9aCVMo5EymfQ;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
typedef struct tyTuple__awOivLjlO76sGdHY7nQUjQ tyTuple__awOivLjlO76sGdHY7nQUjQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct tyTuple__jq7X5k7hWG0tdTZTDkiyGQ {
NimStringDesc* Field0;
tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* Field1;
};
struct tyObject_Joptions__LkVLf5IMKBOgl3HJApAzgQ {
NIM_BOOL allowExtraKeys;
NIM_BOOL allowMissingKeys;
};
struct tyTuple__d8cOxWret6fRDupvUsyoyw {
NimStringDesc* Field0;
NimStringDesc* Field1;
tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* Field2;
};
typedef NU8 tyEnum_EnumMode__VBQLiQclXYpinosAjWkfrg;
typedef NU8 tyEnum_JsonNodeMode__UTXRaEPTjXpNdVaD9bbN0bQ;
struct tyObject_ToJsonOptions__T9bCB8O1ZaL5BIvSkjYqMnQ {
tyEnum_EnumMode__VBQLiQclXYpinosAjWkfrg enumMode;
tyEnum_JsonNodeMode__UTXRaEPTjXpNdVaD9bbN0bQ jsonNodeMode;
};
typedef NU8 tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg;
struct tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg {
tySequence__MlAD6nAPq9bHKla9cWiIZP0g* data;
NI counter;
NI first;
NI last;
};
struct tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q {
NIM_BOOL isUnquoted;
tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg kind;
union{
struct {NimStringDesc* str;
} _kind_1;
struct {NI64 num;
} _kind_2;
struct {NF fnum;
} _kind_3;
struct {NIM_BOOL bval;
} _kind_4;
struct {tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg fields;
} _kind_6;
struct {tySequence__oLpBKXzW3hF9aCVMo5EymfQ* elems;
} _kind_7;
};
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tyTuple__awOivLjlO76sGdHY7nQUjQ {
NI Field0;
NI Field1;
NimStringDesc* Field2;
tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* Field3;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
struct tySequence__MlAD6nAPq9bHKla9cWiIZP0g {
  TGenericSeq Sup;
  tyTuple__awOivLjlO76sGdHY7nQUjQ data[SEQ_DECL_SIZE];
};
struct tySequence__oLpBKXzW3hF9aCVMo5EymfQ {
  TGenericSeq Sup;
  tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__system_5309)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5271)(void* usr);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(void, decRef__system_5316)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__system_5314)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__system_5265)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__pureZos_449)(NimStringDesc** s, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__stdZjsonutils_444)(NimStringDesc** s, tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___pureZjson_4465)(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* node);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___pureZjson_2044)(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* a, tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* b);
N_LIB_PRIVATE N_NOINLINE(void, raiseJsonException__stdZjsonutils_168)(NimStringDesc* condStr, NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___stdZjsonutils_407)(tyTuple__jq7X5k7hWG0tdTZTDkiyGQ x);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, to__stdZjsonutils_581)(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* node);
N_LIB_PRIVATE N_NIMCALL(void, initFromJson__pureZjson_5260)(NimStringDesc** dst, tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* jsonNode, NimStringDesc** jsonPath);
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*, percent___pureZjson_1790)(NimStringDesc* s);
extern TNimType NTIrefvalueerror__Ie1m0dv1ZHg72IgPRr1cDw_;
extern TNimType NTIvalueerror__yoNlBGx0D2tRizIdhQuENw_;
STRING_LITERAL(TM__D9aPSI6l3gZsoFvdx9c3FKBg_2, " failed: ", 9);
STRING_LITERAL(TM__D9aPSI6l3gZsoFvdx9c3FKBg_3, "(", 1);
STRING_LITERAL(TM__D9aPSI6l3gZsoFvdx9c3FKBg_4, ", ", 2);
STRING_LITERAL(TM__D9aPSI6l3gZsoFvdx9c3FKBg_5, "nil", 3);
STRING_LITERAL(TM__D9aPSI6l3gZsoFvdx9c3FKBg_6, ",", 1);
STRING_LITERAL(TM__D9aPSI6l3gZsoFvdx9c3FKBg_7, ")", 1);
STRING_LITERAL(TM__D9aPSI6l3gZsoFvdx9c3FKBg_8, "\012not (b == nil)", 15);
STRING_LITERAL(TM__D9aPSI6l3gZsoFvdx9c3FKBg_9, "string", 6);
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__system_5218;
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
N_LIB_PRIVATE N_NOINLINE(void, raiseJsonException__stdZjsonutils_168)(NimStringDesc* condStr, NimStringDesc* msg) {
	tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* T1_;
	NimStringDesc* T2_;
	T1_ = NIM_NIL;
	T1_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTIrefvalueerror__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTIvalueerror__yoNlBGx0D2tRizIdhQuENw_);
	(*T1_).Sup.Sup.name = "ValueError";
	T2_ = NIM_NIL;
	T2_ = rawNewString((condStr ? condStr->Sup.len : 0) + (msg ? msg->Sup.len : 0) + 9);
appendString(T2_, condStr);
appendString(T2_, ((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_2));
appendString(T2_, msg);
	asgnRef((void**) (&(*T1_).Sup.Sup.message), T2_);
	asgnRef((void**) (&(*T1_).Sup.Sup.parent), ((Exception*) NIM_NIL));
	raiseExceptionEx((Exception*)T1_, "ValueError", "raiseJsonException", "jsonutils.nim", 134);
}
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__stdZjsonutils_444)(NimStringDesc** s, tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* x) {
	NimStringDesc* T1_;
	T1_ = NIM_NIL;
	T1_ = dollar___pureZjson_4465(x);
	unsureAsgnRef((void**) (&(*s)), resizeString((*s), (T1_ ? T1_->Sup.len : 0) + 0));
appendString((*s), T1_);
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___stdZjsonutils_407)(tyTuple__jq7X5k7hWG0tdTZTDkiyGQ x) {
	NimStringDesc* result;
	NI count;
	result = NIM_NIL;
	result = copyString(((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_3));
	count = ((NI) 0);
	{
		if (!(((NI) 0) < count)) goto LA3_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_4));
	}
	LA3_: ;
	count += ((NI) 1);
	addQuoted__pureZos_449((&result), x.Field0);
	{
		if (!(((NI) 0) < count)) goto LA7_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_4));
	}
	LA7_: ;
	count += ((NI) 1);
	{
		if (!(x.Field1 == 0)) goto LA11_;
		result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_5));
	}
	goto LA9_;
	LA11_: ;
	{
		addQuoted__stdZjsonutils_444((&result), x.Field1);
	}
	LA9_: ;
	{
		if (!(count == ((NI) 1))) goto LA16_;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_6));
	}
	LA16_: ;
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_7));
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
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, to__stdZjsonutils_581)(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* node) {
	NimStringDesc* result;
	NimStringDesc* jsonPath;
	result = NIM_NIL;
	jsonPath = ((NimStringDesc*) NIM_NIL);
	initFromJson__pureZjson_5260((&result), node, (&jsonPath));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, fromJson__stdZjsonutils_566)(NimStringDesc** a, tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* b, tyObject_Joptions__LkVLf5IMKBOgl3HJApAzgQ opt) {
	{
		NIM_BOOL T3_;
		tyTuple__jq7X5k7hWG0tdTZTDkiyGQ T6_;
		NimStringDesc* T7_;
		T3_ = (NIM_BOOL)0;
		T3_ = eqeq___pureZjson_2044(b, ((tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*) NIM_NIL));
		if (!!(!(T3_))) goto LA4_;
		nimZeroMem((void*)(&T6_), sizeof(tyTuple__jq7X5k7hWG0tdTZTDkiyGQ));
		T6_.Field0 = copyString(((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_9));
		T6_.Field1 = b;
		T7_ = NIM_NIL;
		T7_ = dollar___stdZjsonutils_407(T6_);
		raiseJsonException__stdZjsonutils_168(((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_8), T7_);
	}
	LA4_: ;
	unsureAsgnRef((void**) (&(*a)), to__stdZjsonutils_581(b));
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___stdZjsonutils_504)(tyTuple__d8cOxWret6fRDupvUsyoyw x) {
	NimStringDesc* result;
	NI count;
	result = NIM_NIL;
	result = copyString(((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_3));
	count = ((NI) 0);
	{
		if (!(((NI) 0) < count)) goto LA3_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_4));
	}
	LA3_: ;
	count += ((NI) 1);
	addQuoted__pureZos_449((&result), x.Field0);
	{
		if (!(((NI) 0) < count)) goto LA7_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_4));
	}
	LA7_: ;
	count += ((NI) 1);
	addQuoted__pureZos_449((&result), x.Field1);
	{
		if (!(((NI) 0) < count)) goto LA11_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_4));
	}
	LA11_: ;
	count += ((NI) 1);
	{
		if (!(x.Field2 == 0)) goto LA15_;
		result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_5));
	}
	goto LA13_;
	LA15_: ;
	{
		addQuoted__stdZjsonutils_444((&result), x.Field2);
	}
	LA13_: ;
	{
		if (!(count == ((NI) 1))) goto LA20_;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_6));
	}
	LA20_: ;
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__D9aPSI6l3gZsoFvdx9c3FKBg_7));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*, toJson__stdZjsonutils_603)(NimStringDesc* a, tyObject_ToJsonOptions__T9bCB8O1ZaL5BIvSkjYqMnQ opt) {
	tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* result;
	result = NIM_NIL;
	result = percent___pureZjson_1790(a);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_ToJsonOptions__T9bCB8O1ZaL5BIvSkjYqMnQ, initToJsonOptions__stdZjsonutils_33)(void) {
	tyObject_ToJsonOptions__T9bCB8O1ZaL5BIvSkjYqMnQ result;
	nimZeroMem((void*)(&result), sizeof(tyObject_ToJsonOptions__T9bCB8O1ZaL5BIvSkjYqMnQ));
	nimZeroMem((void*)(&result), sizeof(tyObject_ToJsonOptions__T9bCB8O1ZaL5BIvSkjYqMnQ));
	result.enumMode = ((tyEnum_EnumMode__VBQLiQclXYpinosAjWkfrg) 0);
	result.jsonNodeMode = ((tyEnum_JsonNodeMode__UTXRaEPTjXpNdVaD9bbN0bQ) 0);
	return result;
}
