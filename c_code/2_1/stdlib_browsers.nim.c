/* Generated by Nim Compiler v1.6.2 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
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
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg;
typedef struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg;
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
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
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
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
};
typedef NU8 tySet_tyEnum_ProcessOption__bnU6W8LhTMnT4JaSWtGlSA;
typedef NimStringDesc* tyArray__nHXaesL0DJZHyVS07ARPRA[1];
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
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__systemZassertions_56)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(void, openDefaultBrowserImpl__pureZbrowsers_9)(NimStringDesc* url);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nospquoteShell)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, prepare__pureZbrowsers_6)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__pureZstrutils_1631)(NimStringDesc* s, NimStringDesc* sub);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, absolutePath__pureZos_742)(NimStringDesc* path, NimStringDesc* root);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NI, nosexecShellCmd)(NimStringDesc* command);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getEnv__pureZos_418)(NimStringDesc* key, NimStringDesc* default_0);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__system_7743)(NimStringDesc* s, NI first, NI last);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_LIB_PRIVATE N_NIMCALL(tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingDir, NimStringDesc** args, NI argsLen_0, tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* env, tySet_tyEnum_ProcessOption__bnU6W8LhTMnT4JaSWtGlSA options);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(void, popSafePoint)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, nimBorrowCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__system_5308)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5270)(void* usr);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(void, decRef__system_5315)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__system_5313)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__system_5264)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TM__CZNeKGdQ8AWxD1HSDIq5DQ_2, "browsers.nim(69, 12) `url.len > 0` URL must not be empty string", 63);
STRING_LITERAL(TM__CZNeKGdQ8AWxD1HSDIq5DQ_3, "://", 3);
STRING_LITERAL(TM__CZNeKGdQ8AWxD1HSDIq5DQ_4, "file://", 7);
STRING_LITERAL(TM__CZNeKGdQ8AWxD1HSDIq5DQ_5, "xdg-open ", 9);
STRING_LITERAL(TM__CZNeKGdQ8AWxD1HSDIq5DQ_6, "BROWSER", 7);
extern TNimType NTIoserror__BeJgrOdDsczOwEWOZbRfKA_;
extern TSafePoint* excHandler__system_2565;
extern TSafePoint* excHandler__system_2565;
extern TSafePoint* excHandler__system_2565;
extern TSafePoint* excHandler__system_2565;
extern Exception* currException__system_2566;
extern Exception* currException__system_2566;
extern Exception* currException__system_2566;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__system_5217;
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
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, prepare__pureZbrowsers_6)(NimStringDesc* s) {
	NimStringDesc* result;
	result = NIM_NIL;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = contains__pureZstrutils_1631(s, ((NimStringDesc*) &TM__CZNeKGdQ8AWxD1HSDIq5DQ_3));
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
		T9_ = absolutePath__pureZos_742(s, T8_);
		T7_ = rawNewString((T9_ ? T9_->Sup.len : 0) + 7);
appendString(T7_, ((NimStringDesc*) &TM__CZNeKGdQ8AWxD1HSDIq5DQ_4));
appendString(T7_, T9_);
		result = T7_;
	}
	LA1_: ;
	return result;
}
static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).prev = excHandler__system_2565;
	excHandler__system_2565 = s;
}
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
}
static N_INLINE(void, popSafePoint)(void) {
	excHandler__system_2565 = (*excHandler__system_2565).prev;
}
static N_INLINE(Exception*, nimBorrowCurrentException)(void) {
	Exception* result;
	result = NIM_NIL;
	result = currException__system_2566;
	return result;
}
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) + (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(void, incRef__system_5308)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = pluspercent___system_696((*c).refcount, ((NI) 8));
}
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5270)(void* usr) {
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
static N_INLINE(void, rtlAddZCT__system_5313)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT__system_5264((&gch__system_5217.zct), c);
}
static N_INLINE(void, decRef__system_5315)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = minuspercent___system_716((*c).refcount, ((NI) 8));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent___system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		rtlAddZCT__system_5313(c);
	}
	LA4_: ;
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__system_5270(src);
		incRef__system_5308(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__system_5270((*dest));
		decRef__system_5315(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currException__system_2566), (*currException__system_2566).up);
}
N_LIB_PRIVATE N_NIMCALL(void, openDefaultBrowserImpl__pureZbrowsers_9)(NimStringDesc* url) {
	NimStringDesc* u;
	NimStringDesc* T1_;
{	T1_ = NIM_NIL;
	T1_ = prepare__pureZbrowsers_6(url);
	u = nospquoteShell(T1_);
	{
		NimStringDesc* T4_;
		NI T5_;
		T4_ = NIM_NIL;
		T4_ = rawNewString((u ? u->Sup.len : 0) + 9);
appendString(T4_, ((NimStringDesc*) &TM__CZNeKGdQ8AWxD1HSDIq5DQ_5));
appendString(T4_, u);
		T5_ = (NI)0;
		T5_ = nosexecShellCmd(T4_);
		if (!(T5_ == ((NI) 0))) goto LA6_;
		goto BeforeRet_;
	}
	LA6_: ;
	{
		NimStringDesc* b;
		NimStringDesc* colontmp_;
		NI lastX60gensym34_;
		NI splitsX60gensym34_;
		b = NIM_NIL;
		colontmp_ = NIM_NIL;
		colontmp_ = getEnv__pureZos_418(((NimStringDesc*) &TM__CZNeKGdQ8AWxD1HSDIq5DQ_6), ((NimStringDesc*) NIM_NIL));
		lastX60gensym34_ = ((NI) 0);
		splitsX60gensym34_ = ((NI) -1);
		{
			while (1) {
				NI firstX60gensym34_;
				TSafePoint TM__CZNeKGdQ8AWxD1HSDIq5DQ_7;
				tyArray__nHXaesL0DJZHyVS07ARPRA T19_;
				tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg* T20_;
				if (!(lastX60gensym34_ <= (colontmp_ ? colontmp_->Sup.len : 0))) goto LA10;
				firstX60gensym34_ = lastX60gensym34_;
				{
					while (1) {
						NIM_BOOL T13_;
						T13_ = (NIM_BOOL)0;
						T13_ = (lastX60gensym34_ < (colontmp_ ? colontmp_->Sup.len : 0));
						if (!(T13_)) goto LA14_;
						T13_ = !(((NU8)(colontmp_->data[lastX60gensym34_]) == (NU8)(58)));
						LA14_: ;
						if (!T13_) goto LA12;
						lastX60gensym34_ += ((NI) 1);
					} LA12: ;
				}
				{
					if (!(splitsX60gensym34_ == ((NI) 0))) goto LA17_;
					lastX60gensym34_ = (colontmp_ ? colontmp_->Sup.len : 0);
				}
				LA17_: ;
				b = substr__system_7743(colontmp_, firstX60gensym34_, (NI)(lastX60gensym34_ - ((NI) 1)));
				pushSafePoint(&TM__CZNeKGdQ8AWxD1HSDIq5DQ_7);
				TM__CZNeKGdQ8AWxD1HSDIq5DQ_7.status = setjmp(TM__CZNeKGdQ8AWxD1HSDIq5DQ_7.context);
				if (TM__CZNeKGdQ8AWxD1HSDIq5DQ_7.status == 0) {
				nimZeroMem((void*)T19_, sizeof(tyArray__nHXaesL0DJZHyVS07ARPRA));
				T19_[0] = copyString(url);
				T20_ = NIM_NIL;
				T20_ = nospstartProcess(b, ((NimStringDesc*) NIM_NIL), T19_, 1, ((tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*) NIM_NIL), 2);
				(void)(T20_);
				popSafePoint();
				goto BeforeRet_;
				popSafePoint();
				}
				else {
					popSafePoint();
					if (isObj(nimBorrowCurrentException()->Sup.m_type, (&NTIoserror__BeJgrOdDsczOwEWOZbRfKA_))) {
						TM__CZNeKGdQ8AWxD1HSDIq5DQ_7.status = 0;
						popCurrentException();
					}
				}
				if (TM__CZNeKGdQ8AWxD1HSDIq5DQ_7.status != 0) reraiseException();
				{
					if (!(splitsX60gensym34_ == ((NI) 0))) goto LA25_;
					goto LA9;
				}
				LA25_: ;
				splitsX60gensym34_ -= ((NI) 1);
				lastX60gensym34_ += ((NI) 1);
			} LA10: ;
		} LA9: ;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, openDefaultBrowser__pureZbrowsers_13)(NimStringDesc* url) {
	{
		if (!!((((NI) 0) < (url ? url->Sup.len : 0)))) goto LA3_;
		failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__CZNeKGdQ8AWxD1HSDIq5DQ_2));
	}
	LA3_: ;
	openDefaultBrowserImpl__pureZbrowsers_9(url);
}
