/* Generated by Nim Compiler v1.6.2 */
#define NIM_INTBITS 32

#include "nimbase.h"
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
typedef struct tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw;
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* tyArray__O7BaHX6ctEz6BpjFNHWCFQ[8192];
struct tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw {
tyArray__O7BaHX6ctEz6BpjFNHWCFQ buckets;
NI wordCounter;
tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* idAnon;
tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* idDelegator;
tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* emptyIdent;
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
typedef NU16 tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw;
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef__EiGmNYVHiKeimIyQkW82mg)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef__lnkYNZP9asc88UfiEGjLrbA)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA*, getIdent__idents_89)(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* ic, NCSTRING identifier, NI length, NI h);
N_LIB_PRIVATE N_NIMCALL(NI, cmpExact__idents_66)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__system_5300)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5262)(void* usr);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(void, decRef__system_5307)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__system_5305)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__system_5256)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(NI, cmpIgnoreStyle__idents_17)(NCSTRING a, NCSTRING b, NI blen);
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreStyle__pureZhashes_290)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA*, getIdent__idents_143)(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* ic, NimStringDesc* identifier);
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA*, getIdent__idents_147)(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* ic, NimStringDesc* identifier, NI h);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, reprEnum)(NI e, TNimType* typ);
N_LIB_PRIVATE TNimType NTItident__1LTsGP7bSxg45u9aHcxh6OA_;
extern TNimType NTIint__rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTIstring__77mFvmsOLKik79ci2hXkHEg_;
N_LIB_PRIVATE TNimType NTIpident__EiGmNYVHiKeimIyQkW82mg_;
N_LIB_PRIVATE TNimType NTIidentcache58objecttype__TzLHS09bRH9a0TYLs39cqcNaw_;
N_LIB_PRIVATE TNimType NTIarrayL48OO56495749_pidentT__O7BaHX6ctEz6BpjFNHWCFQ_;
N_LIB_PRIVATE TNimType NTIidentcache__lnkYNZP9asc88UfiEGjLrbA_;
STRING_LITERAL(TM__L3r6bVdeFMiI9cwmLpWIeKw_4, ":anonymous", 10);
STRING_LITERAL(TM__L3r6bVdeFMiI9cwmLpWIeKw_5, ":delegator", 10);
extern TNimType NTItspecialword__ycbpMCRV6Cd2eBh3X9biEiw_;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__system_5209;
static N_NIMCALL(void, Marker_tyRef__EiGmNYVHiKeimIyQkW82mg)(void* p, NI op) {
	tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* a;
	a = (tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA*)p;
	nimGCvisit((void*)(*a).s, op);
	nimGCvisit((void*)(*a).next, op);
}
static N_NIMCALL(void, Marker_tyRef__lnkYNZP9asc88UfiEGjLrbA)(void* p, NI op) {
	tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* a;
	NI T1_;
	a = (tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 8192; T1_++) {
	nimGCvisit((void*)(*a).buckets[T1_], op);
	}
	nimGCvisit((void*)(*a).idAnon, op);
	nimGCvisit((void*)(*a).idDelegator, op);
	nimGCvisit((void*)(*a).emptyIdent, op);
}
N_LIB_PRIVATE N_NIMCALL(NI, cmpExact__idents_66)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	result = (NI)0;
	i = ((NI) 0);
	j = ((NI) 0);
	result = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			if (!(j < blen)) goto LA2;
			aa = a[i];
			bb = b[j];
			result = (NI)(((NU8)(aa)) - ((NU8)(bb)));
			{
				NIM_BOOL T5_;
				T5_ = (NIM_BOOL)0;
				T5_ = !((result == ((NI) 0)));
				if (T5_) goto LA6_;
				T5_ = ((NU8)(aa) == (NU8)(0));
				LA6_: ;
				if (!T5_) goto LA7_;
				goto LA1;
			}
			LA7_: ;
			i += ((NI) 1);
			j += ((NI) 1);
		} LA2: ;
	} LA1: ;
	{
		if (!(result == ((NI) 0))) goto LA11_;
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA15_;
			result = ((NI) 1);
		}
		LA15_: ;
	}
	LA11_: ;
	return result;
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
N_LIB_PRIVATE N_NIMCALL(NI, cmpIgnoreStyle__idents_17)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
{	result = (NI)0;
	{
		if (!!(((NU8)(a[((NI) 0)]) == (NU8)(b[((NI) 0)])))) goto LA3_;
		result = ((NI) 1);
		goto BeforeRet_;
	}
	LA3_: ;
	i = ((NI) 0);
	j = ((NI) 0);
	result = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			if (!(j < blen)) goto LA6;
			{
				while (1) {
					if (!((NU8)(a[i]) == (NU8)(95))) goto LA8;
					i += ((NI) 1);
				} LA8: ;
			}
			{
				while (1) {
					if (!((NU8)(b[j]) == (NU8)(95))) goto LA10;
					j += ((NI) 1);
				} LA10: ;
			}
			aa = a[i];
			bb = b[j];
			{
				NIM_BOOL T13_;
				T13_ = (NIM_BOOL)0;
				T13_ = ((NU8)(65) <= (NU8)(aa));
				if (!(T13_)) goto LA14_;
				T13_ = ((NU8)(aa) <= (NU8)(90));
				LA14_: ;
				if (!T13_) goto LA15_;
				aa = ((NIM_CHAR) (((NI) ((NI)(((NU8)(aa)) + ((NI) 32))))));
			}
			LA15_: ;
			{
				NIM_BOOL T19_;
				T19_ = (NIM_BOOL)0;
				T19_ = ((NU8)(65) <= (NU8)(bb));
				if (!(T19_)) goto LA20_;
				T19_ = ((NU8)(bb) <= (NU8)(90));
				LA20_: ;
				if (!T19_) goto LA21_;
				bb = ((NIM_CHAR) (((NI) ((NI)(((NU8)(bb)) + ((NI) 32))))));
			}
			LA21_: ;
			result = (NI)(((NU8)(aa)) - ((NU8)(bb)));
			{
				NIM_BOOL T25_;
				T25_ = (NIM_BOOL)0;
				T25_ = !((result == ((NI) 0)));
				if (T25_) goto LA26_;
				T25_ = ((NU8)(aa) == (NU8)(0));
				LA26_: ;
				if (!T25_) goto LA27_;
				goto LA5;
			}
			LA27_: ;
			i += ((NI) 1);
			j += ((NI) 1);
		} LA6: ;
	} LA5: ;
	{
		if (!(result == ((NI) 0))) goto LA31_;
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA35_;
			result = ((NI) 1);
		}
		LA35_: ;
	}
	LA31_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA*, getIdent__idents_89)(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* ic, NCSTRING identifier, NI length, NI h) {
	tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* result;
	NI idx;
	tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* last;
	NI id;
{	result = NIM_NIL;
	idx = (NI)(h & ((NI) 8191));
	result = (*ic).buckets[(idx)- 0];
	last = ((tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA*) NIM_NIL);
	id = ((NI) 0);
	{
		while (1) {
			if (!!((result == ((tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA*) NIM_NIL)))) goto LA2;
			{
				NI T5_;
				T5_ = (NI)0;
				T5_ = cmpExact__idents_66(nimToCStringConv((*result).s), identifier, length);
				if (!(T5_ == ((NI) 0))) goto LA6_;
				{
					if (!!((last == ((tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA*) NIM_NIL)))) goto LA10_;
					asgnRef((void**) (&(*last).next), (*result).next);
					asgnRef((void**) (&(*result).next), (*ic).buckets[(idx)- 0]);
					asgnRef((void**) (&(*ic).buckets[(idx)- 0]), result);
				}
				LA10_: ;
				goto BeforeRet_;
			}
			goto LA3_;
			LA6_: ;
			{
				NI T13_;
				T13_ = (NI)0;
				T13_ = cmpIgnoreStyle__idents_17(nimToCStringConv((*result).s), identifier, length);
				if (!(T13_ == ((NI) 0))) goto LA14_;
				id = (*result).id;
			}
			goto LA3_;
			LA14_: ;
			LA3_: ;
			last = result;
			result = (*result).next;
		} LA2: ;
	}
	result = (tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA*) newObj((&NTIpident__EiGmNYVHiKeimIyQkW82mg_), sizeof(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA));
	(*result).h = h;
	asgnRef((void**) (&(*result).s), mnewString(((NI) (length))));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < length)) goto LA18;
				i = i_2;
				(*result).s->data[i] = identifier[i];
				i_2 += ((NI) 1);
			} LA18: ;
		}
	}
	asgnRef((void**) (&(*result).next), (*ic).buckets[(idx)- 0]);
	asgnRef((void**) (&(*ic).buckets[(idx)- 0]), result);
	{
		if (!(id == ((NI) 0))) goto LA21_;
		(*ic).wordCounter += ((NI) 1);
		(*result).id = ((NI32)-((*ic).wordCounter));
	}
	goto LA19_;
	LA21_: ;
	{
		(*result).id = id;
	}
	LA19_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA*, getIdent__idents_143)(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* ic, NimStringDesc* identifier) {
	tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* result;
	NI T1_;
	result = NIM_NIL;
	T1_ = (NI)0;
	T1_ = hashIgnoreStyle__pureZhashes_290(identifier);
	result = getIdent__idents_89(ic, nimToCStringConv(identifier), (identifier ? identifier->Sup.len : 0), T1_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw, whichKeyword__idents_214)(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* id) {
	tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw result;
	result = (tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw)0;
	{
		if (!((*id).id < ((NI) 0))) goto LA3_;
		result = ((tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw) ((*id).id));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA*, getIdent__idents_147)(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* ic, NimStringDesc* identifier, NI h) {
	tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* result;
	result = NIM_NIL;
	result = getIdent__idents_89(ic, nimToCStringConv(identifier), (identifier ? identifier->Sup.len : 0), h);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw*, newIdentCache__idents_152)(void) {
	tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* result;
	tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* T1_;
	result = NIM_NIL;
	T1_ = NIM_NIL;
	T1_ = (tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw*) newObj((&NTIidentcache__lnkYNZP9asc88UfiEGjLrbA_), sizeof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw));
	result = T1_;
	asgnRef((void**) (&(*result).idAnon), getIdent__idents_143(result, ((NimStringDesc*) &TM__L3r6bVdeFMiI9cwmLpWIeKw_4)));
	(*result).wordCounter = ((NI) 1);
	asgnRef((void**) (&(*result).idDelegator), getIdent__idents_143(result, ((NimStringDesc*) &TM__L3r6bVdeFMiI9cwmLpWIeKw_5)));
	asgnRef((void**) (&(*result).emptyIdent), getIdent__idents_143(result, ((NimStringDesc*) NIM_NIL)));
	{
		tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw s;
		NI res;
		s = (tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw)0;
		res = ((NI) 1);
		{
			while (1) {
				NI T5_;
				tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* T6_;
				if (!(res <= ((NI) 293))) goto LA4;
				s = ((tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw) (res));
				T5_ = (NI)0;
				T5_ = hashIgnoreStyle__pureZhashes_290(reprEnum((NI)s, (&NTItspecialword__ycbpMCRV6Cd2eBh3X9biEiw_)));
				T6_ = NIM_NIL;
				T6_ = getIdent__idents_147(result, reprEnum((NI)s, (&NTItspecialword__ycbpMCRV6Cd2eBh3X9biEiw_)), T5_);
				(*T6_).id = s;
				res += ((NI) 1);
			} LA4: ;
		}
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_identsDatInit000)(void) {
static TNimNode* TM__L3r6bVdeFMiI9cwmLpWIeKw_2_4[4];
static TNimNode* TM__L3r6bVdeFMiI9cwmLpWIeKw_3_5[5];
static TNimNode TM__L3r6bVdeFMiI9cwmLpWIeKw_0[11];
NTItident__1LTsGP7bSxg45u9aHcxh6OA_.size = sizeof(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA);
NTItident__1LTsGP7bSxg45u9aHcxh6OA_.align = NIM_ALIGNOF(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA);
NTItident__1LTsGP7bSxg45u9aHcxh6OA_.kind = 18;
NTItident__1LTsGP7bSxg45u9aHcxh6OA_.base = 0;
NTItident__1LTsGP7bSxg45u9aHcxh6OA_.flags = 2;
TM__L3r6bVdeFMiI9cwmLpWIeKw_2_4[0] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[1];
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[1].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[1].offset = offsetof(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA, id);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[1].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[1].name = "id";
TM__L3r6bVdeFMiI9cwmLpWIeKw_2_4[1] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[2];
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[2].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[2].offset = offsetof(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA, s);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[2].typ = (&NTIstring__77mFvmsOLKik79ci2hXkHEg_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[2].name = "s";
TM__L3r6bVdeFMiI9cwmLpWIeKw_2_4[2] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[3];
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[3].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[3].offset = offsetof(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA, next);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[3].typ = (&NTIpident__EiGmNYVHiKeimIyQkW82mg_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[3].name = "next";
TM__L3r6bVdeFMiI9cwmLpWIeKw_2_4[3] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[4];
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[4].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[4].offset = offsetof(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA, h);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[4].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[4].name = "h";
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[0].len = 4; TM__L3r6bVdeFMiI9cwmLpWIeKw_0[0].kind = 2; TM__L3r6bVdeFMiI9cwmLpWIeKw_0[0].sons = &TM__L3r6bVdeFMiI9cwmLpWIeKw_2_4[0];
NTItident__1LTsGP7bSxg45u9aHcxh6OA_.node = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[0];
NTIpident__EiGmNYVHiKeimIyQkW82mg_.size = sizeof(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA*);
NTIpident__EiGmNYVHiKeimIyQkW82mg_.align = NIM_ALIGNOF(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA*);
NTIpident__EiGmNYVHiKeimIyQkW82mg_.kind = 22;
NTIpident__EiGmNYVHiKeimIyQkW82mg_.base = (&NTItident__1LTsGP7bSxg45u9aHcxh6OA_);
NTIpident__EiGmNYVHiKeimIyQkW82mg_.marker = Marker_tyRef__EiGmNYVHiKeimIyQkW82mg;
NTIidentcache58objecttype__TzLHS09bRH9a0TYLs39cqcNaw_.size = sizeof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw);
NTIidentcache58objecttype__TzLHS09bRH9a0TYLs39cqcNaw_.align = NIM_ALIGNOF(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw);
NTIidentcache58objecttype__TzLHS09bRH9a0TYLs39cqcNaw_.kind = 18;
NTIidentcache58objecttype__TzLHS09bRH9a0TYLs39cqcNaw_.base = 0;
TM__L3r6bVdeFMiI9cwmLpWIeKw_3_5[0] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[6];
NTIarrayL48OO56495749_pidentT__O7BaHX6ctEz6BpjFNHWCFQ_.size = sizeof(tyArray__O7BaHX6ctEz6BpjFNHWCFQ);
NTIarrayL48OO56495749_pidentT__O7BaHX6ctEz6BpjFNHWCFQ_.align = NIM_ALIGNOF(tyArray__O7BaHX6ctEz6BpjFNHWCFQ);
NTIarrayL48OO56495749_pidentT__O7BaHX6ctEz6BpjFNHWCFQ_.kind = 16;
NTIarrayL48OO56495749_pidentT__O7BaHX6ctEz6BpjFNHWCFQ_.base = (&NTIpident__EiGmNYVHiKeimIyQkW82mg_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[6].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[6].offset = offsetof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw, buckets);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[6].typ = (&NTIarrayL48OO56495749_pidentT__O7BaHX6ctEz6BpjFNHWCFQ_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[6].name = "buckets";
TM__L3r6bVdeFMiI9cwmLpWIeKw_3_5[1] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[7];
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[7].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[7].offset = offsetof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw, wordCounter);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[7].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[7].name = "wordCounter";
TM__L3r6bVdeFMiI9cwmLpWIeKw_3_5[2] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[8];
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[8].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[8].offset = offsetof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw, idAnon);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[8].typ = (&NTIpident__EiGmNYVHiKeimIyQkW82mg_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[8].name = "idAnon";
TM__L3r6bVdeFMiI9cwmLpWIeKw_3_5[3] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[9];
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[9].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[9].offset = offsetof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw, idDelegator);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[9].typ = (&NTIpident__EiGmNYVHiKeimIyQkW82mg_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[9].name = "idDelegator";
TM__L3r6bVdeFMiI9cwmLpWIeKw_3_5[4] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[10];
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[10].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[10].offset = offsetof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw, emptyIdent);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[10].typ = (&NTIpident__EiGmNYVHiKeimIyQkW82mg_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[10].name = "emptyIdent";
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[5].len = 5; TM__L3r6bVdeFMiI9cwmLpWIeKw_0[5].kind = 2; TM__L3r6bVdeFMiI9cwmLpWIeKw_0[5].sons = &TM__L3r6bVdeFMiI9cwmLpWIeKw_3_5[0];
NTIidentcache58objecttype__TzLHS09bRH9a0TYLs39cqcNaw_.node = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[5];
NTIidentcache__lnkYNZP9asc88UfiEGjLrbA_.size = sizeof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw*);
NTIidentcache__lnkYNZP9asc88UfiEGjLrbA_.align = NIM_ALIGNOF(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw*);
NTIidentcache__lnkYNZP9asc88UfiEGjLrbA_.kind = 22;
NTIidentcache__lnkYNZP9asc88UfiEGjLrbA_.base = (&NTIidentcache58objecttype__TzLHS09bRH9a0TYLs39cqcNaw_);
NTIidentcache__lnkYNZP9asc88UfiEGjLrbA_.marker = Marker_tyRef__lnkYNZP9asc88UfiEGjLrbA;
}

