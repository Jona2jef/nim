/* Generated by Nim Compiler v1.6.2 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <setjmp.h>
#include <sys/ioctl.h>
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
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
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
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_EOFError__KGSY1JdrNB7Xi8KDhXFhSg tyObject_EOFError__KGSY1JdrNB7Xi8KDhXFhSg;
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
struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
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
typedef NU8 tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg;
typedef NCSTRING tyArray__Djap3EijveoDksCG9bY8s5w[5];
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
};
struct tyObject_EOFError__KGSY1JdrNB7Xi8KDhXFhSg {
  tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw Sup;
};
typedef NU8 tyEnum_FileSeekPos__I9aQjuvWxs8BspGbxwsngWw;
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__systemZio_176)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(void, checkErr__systemZio_141)(FILE* f);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___systemZdollars_3)(NI x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__systemZio_96)(NimStringDesc* msg) __attribute__((noreturn));
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef__system_5345)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__system_5343)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__system_5294)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5300)(void* usr);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__system_5338)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__systemZio_389)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__systemZio_228)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, close__systemZio_217)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NIM_BOOL, eqeq___system_7753)(NCSTRING x, NCSTRING y);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAll__systemZio_350)(FILE* file);
N_LIB_PRIVATE N_NIMCALL(NI64, rawFileSize__systemZio_333)(FILE* file);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllFile__systemZio_341)(FILE* file, NI64 len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__systemZio_144)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endOfFile__systemZio_337)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllBuffer__systemZio_328)(FILE* file);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(void, popSafePoint)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimLeaveFinally)(void);
N_LIB_PRIVATE N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine__systemZio_238)(FILE* f, NimStringDesc** line);
N_LIB_PRIVATE N_NOINLINE(void, raiseEOF__systemZio_117)(void) __attribute__((noreturn));
N_LIB_PRIVATE N_NIMCALL(void, write__systemZio_205)(FILE* f, NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*, newSeq__systemZio_501)(NI len);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, setInheritable__systemZio_234)(int f, NIM_BOOL inheritable);
extern TNimType NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_;
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_2, "errno: ", 7);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_3, " `", 2);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_4, "`", 1);
extern TNimType NTIrefioerror__HMIVdYjdZYWskTmTQVo5BQ_;
extern TNimType NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_;
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_5, "cannot write string to file", 27);
N_LIB_PRIVATE NIM_CONST tyArray__Djap3EijveoDksCG9bY8s5w FormatOpen__systemZio_371 = {"rbe",
"wbe",
"w+be",
"r+be",
"abe"}
;
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_6, "cannot open: ", 13);
extern TNimType NTIrefeoferror__LEclZrWX2FQAodlapxGITw_;
extern TNimType NTIeoferror__KGSY1JdrNB7Xi8KDhXFhSg_;
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_8, "EOF reached", 11);
N_LIB_PRIVATE TNimType NTIcfile__MAWzaQJYFu3mlxj0Ppxhmw_;
N_LIB_PRIVATE TNimType NTIfile__XBeRj4rw9bUuE7CB3DS1rgg_;
N_LIB_PRIVATE TNimType NTIfilehandle__2gIj3gQlK3HZJjQaYCP6ZQ_;
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_11, "cannot set file position", 24);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_12, "cannot retrieve file position", 29);
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__system_5247;
extern TSafePoint* excHandler__system_2565;
extern TSafePoint* excHandler__system_2565;
extern TSafePoint* excHandler__system_2565;
extern TSafePoint* excHandler__system_2565;
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
N_LIB_PRIVATE N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0) {
	int T5_;
	int T6_;
	flockfile(stdout);
	{
		NimStringDesc** s;
		NI i;
		s = (NimStringDesc**)0;
		i = ((NI) 0);
		{
			while (1) {
				int T4_;
				if (!(i < argsLen_0)) goto LA3;
				s = (&args[i]);
				T4_ = (int)0;
				T4_ = fwrite(((void*) (nimToCStringConv((*s)))), ((size_t) (((*s) ? (*s)->Sup.len : 0))), ((size_t) 1), stdout);
				(void)(T4_);
				i += ((NI) 1);
			} LA3: ;
		}
	}
	T5_ = (int)0;
	T5_ = fwrite(((void*) ("\012")), ((size_t) 1), ((size_t) 1), stdout);
	(void)(T5_);
	T6_ = (int)0;
	T6_ = fflush(stdout);
	(void)(T6_);
	funlockfile(stdout);
}
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__systemZio_228)(FILE* f) {
	int result;
	result = (int)0;
	result = fileno(f);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*, newSeq__systemZio_501)(NI len) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* result;
	result = NIM_NIL;
	result = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_), len);
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
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__system_5300(p);
	decRef__system_5345(T1_);
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
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__systemZio_96)(NimStringDesc* msg) {
	tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T1_;
	NimStringDesc* T2_;
	T1_ = NIM_NIL;
	T1_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTIrefioerror__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_);
	(*T1_).Sup.Sup.name = "IOError";
	T2_ = NIM_NIL;
	T2_ = (*T1_).Sup.Sup.message; (*T1_).Sup.Sup.message = copyStringRC1(msg);
	if (T2_) nimGCunrefNoCycle(T2_);
	asgnRef((void**) (&(*T1_).Sup.Sup.parent), ((Exception*) NIM_NIL));
	raiseExceptionEx((Exception*)T1_, "IOError", "raiseEIO", "io.nim", 139);
}
N_LIB_PRIVATE N_NIMCALL(void, checkErr__systemZio_141)(FILE* f) {
	{
		int T3_;
		NimStringDesc* msg;
		NimStringDesc* T6_;
		NimStringDesc* T7_;
		NCSTRING T8_;
		NimStringDesc* T9_;
		T3_ = (int)0;
		T3_ = ferror(f);
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		T6_ = NIM_NIL;
		T7_ = NIM_NIL;
		T7_ = dollar___systemZdollars_3(((NI) (errno)));
		T8_ = (NCSTRING)0;
		T8_ = strerror(errno);
		T9_ = NIM_NIL;
		T9_ = cstrToNimstr(T8_);
		T6_ = rawNewString((T7_ ? T7_->Sup.len : 0) + (T9_ ? T9_->Sup.len : 0) + 10);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_2));
appendString(T6_, T7_);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_3));
appendString(T6_, T9_);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_4));
		msg = T6_;
		clearerr(f);
		raiseEIO__systemZio_96(msg);
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__systemZio_176)(FILE* f, void* buffer, NI len) {
	NI result;
	int T1_;
	result = (NI)0;
	T1_ = (int)0;
	T1_ = fwrite(buffer, ((size_t) 1), ((size_t) (len)), f);
	result = ((NI) (T1_));
	checkErr__systemZio_141(f);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, write__systemZio_205)(FILE* f, NimStringDesc* s) {
	{
		NI T3_;
		T3_ = (NI)0;
		T3_ = writeBuffer__systemZio_176(f, ((void*) (nimToCStringConv(s))), ((NI) ((s ? s->Sup.len : 0))));
		if (!!((T3_ == (s ? s->Sup.len : 0)))) goto LA4_;
		raiseEIO__systemZio_96(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_5));
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, flushFile__systemZio_226)(FILE* f) {
	int T1_;
	T1_ = (int)0;
	T1_ = fflush(f);
	(void)(T1_);
}
N_LIB_PRIVATE N_NIMCALL(void, close__systemZio_217)(FILE* f) {
	{
		int T5_;
		if (!!((f == 0))) goto LA3_;
		T5_ = (int)0;
		T5_ = fclose(f);
		(void)(T5_);
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__systemZio_389)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize) {
	NIM_BOOL result;
	void* p;
{	result = (NIM_BOOL)0;
	p = fopen(nimToCStringConv(filename), FormatOpen__systemZio_371[(mode)- 0]);
	{
		FILE* f2;
		struct stat res;
		if (!!((p == NIM_NIL))) goto LA3_;
		f2 = ((FILE*) (p));
		{
			NIM_BOOL T7_;
			int T8_;
			int T9_;
			T7_ = (NIM_BOOL)0;
			T8_ = (int)0;
			T8_ = getFileHandle__systemZio_228(f2);
			T9_ = (int)0;
			T9_ = fstat(T8_, (&res));
			T7_ = (((NI32) 0) <= T9_);
			if (!(T7_)) goto LA10_;
			T7_ = S_ISDIR(res.st_mode);
			LA10_: ;
			if (!T7_) goto LA11_;
			close__systemZio_217(f2);
			result = NIM_FALSE;
			goto BeforeRet_;
		}
		LA11_: ;
		result = NIM_TRUE;
		(*f) = ((FILE*) (p));
		{
			NIM_BOOL T15_;
			int T19_;
			T15_ = (NIM_BOOL)0;
			T15_ = (((NI) 0) < bufSize);
			if (!(T15_)) goto LA16_;
			T15_ = (bufSize <= ((NI) 2147483647));
			LA16_: ;
			if (!T15_) goto LA17_;
			T19_ = (int)0;
			T19_ = setvbuf((*f), NIM_NIL, _IOFBF, ((size_t) (bufSize)));
			(void)(T19_);
		}
		goto LA13_;
		LA17_: ;
		{
			int T23_;
			if (!(bufSize == ((NI) 0))) goto LA21_;
			T23_ = (int)0;
			T23_ = setvbuf((*f), NIM_NIL, _IONBF, ((size_t) 0));
			(void)(T23_);
		}
		goto LA13_;
		LA21_: ;
		LA13_: ;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(FILE*, open__systemZio_430)(NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize) {
	FILE* result;
	result = (FILE*)0;
	{
		NIM_BOOL T3_;
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T6_;
		NimStringDesc* T7_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__systemZio_389(&result, filename, mode, bufSize);
		if (!!(T3_)) goto LA4_;
		T6_ = NIM_NIL;
		T6_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTIrefioerror__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
		(*T6_).Sup.Sup.Sup.m_type = (&NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_);
		(*T6_).Sup.Sup.name = "IOError";
		T7_ = NIM_NIL;
		T7_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T7_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_6));
appendString(T7_, filename);
		asgnRef((void**) (&(*T6_).Sup.Sup.message), T7_);
		asgnRef((void**) (&(*T6_).Sup.Sup.parent), ((Exception*) NIM_NIL));
		raiseExceptionEx((Exception*)T6_, "IOError", "open", "io.nim", 745);
	}
	LA4_: ;
	return result;
}
static N_INLINE(NIM_BOOL, eqeq___system_7753)(NCSTRING x, NCSTRING y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		if (!(((void*) (x)) == ((void*) (y)))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		T6_ = (NIM_BOOL)0;
		T6_ = (x == 0);
		if (T6_) goto LA7_;
		T6_ = (y == 0);
		LA7_: ;
		if (!T6_) goto LA8_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA8_: ;
	{
		int T11_;
		T11_ = (int)0;
		T11_ = strcmp(x, y);
		result = (T11_ == ((NI32) 0));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine__systemZio_238)(FILE* f, NimStringDesc** line) {
	NIM_BOOL result;
	NI pos;
	NI sp;
{	result = (NIM_BOOL)0;
	pos = ((NI) 0);
	sp = ((((*line) ? (*line)->Sup.len : 0) >= ((NI) 80)) ? ((*line) ? (*line)->Sup.len : 0) : ((NI) 80));
	unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) (sp))));
	{
		while (1) {
			NIM_BOOL fgetsSuccess;
			void* m;
			{
				NI i;
				NI i_2;
				i = (NI)0;
				i_2 = ((NI) 0);
				{
					while (1) {
						if (!(i_2 < sp)) goto LA5;
						i = i_2;
						(*line)->data[(NI)(pos + i)] = 10;
						i_2 += ((NI) 1);
					} LA5: ;
				}
			}
			fgetsSuccess = (NIM_BOOL)0;
			{
				while (1) {
					{
						NCSTRING T9_;
						NIM_BOOL T10_;
						T9_ = (NCSTRING)0;
						T9_ = fgets(((NCSTRING) ((&(*line)->data[pos]))), ((int) (sp)), f);
						T10_ = (NIM_BOOL)0;
						T10_ = eqeq___system_7753(T9_, ((NCSTRING) NIM_NIL));
						fgetsSuccess = !(T10_);
						{
							if (!fgetsSuccess) goto LA13_;
							goto LA6;
						}
						LA13_: ;
						{
							if (!(errno == EINTR)) goto LA17_;
							errno = ((int) 0);
							clearerr(f);
							goto LA8;
						}
						LA17_: ;
						checkErr__systemZio_141(f);
						goto LA6;
					} LA8: ;
				}
			} LA6: ;
			m = memchr(((void*) ((&(*line)->data[pos]))), ((int) 10), ((size_t) (sp)));
			{
				NI last;
				NIM_BOOL T42_;
				if (!!((m == NIM_NIL))) goto LA21_;
				last = (NI)(((NI) (ptrdiff_t) (m)) - ((NI) (ptrdiff_t) ((&(*line)->data[((NI) 0)]))));
				{
					NIM_BOOL T25_;
					NIM_BOOL T29_;
					T25_ = (NIM_BOOL)0;
					T25_ = (((NI) 0) < last);
					if (!(T25_)) goto LA26_;
					T25_ = ((NU8)((*line)->data[(NI)(last - ((NI) 1))]) == (NU8)(13));
					LA26_: ;
					if (!T25_) goto LA27_;
					unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) ((NI)(last - ((NI) 1))))));
					T29_ = (NIM_BOOL)0;
					T29_ = (((NI) 1) < last);
					if (T29_) goto LA30_;
					T29_ = fgetsSuccess;
					LA30_: ;
					result = T29_;
					goto BeforeRet_;
				}
				goto LA23_;
				LA27_: ;
				{
					NIM_BOOL T32_;
					T32_ = (NIM_BOOL)0;
					T32_ = (((NI) 0) < last);
					if (!(T32_)) goto LA33_;
					T32_ = ((NU8)((*line)->data[(NI)(last - ((NI) 1))]) == (NU8)(0));
					LA33_: ;
					if (!T32_) goto LA34_;
					{
						NIM_BOOL T38_;
						T38_ = (NIM_BOOL)0;
						T38_ = (last < (NI)((NI)(pos + sp) - ((NI) 1)));
						if (!(T38_)) goto LA39_;
						T38_ = !(((NU8)((*line)->data[(NI)(last + ((NI) 1))]) == (NU8)(0)));
						LA39_: ;
						if (!T38_) goto LA40_;
						last -= ((NI) 1);
					}
					LA40_: ;
				}
				goto LA23_;
				LA34_: ;
				LA23_: ;
				unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) (last))));
				T42_ = (NIM_BOOL)0;
				T42_ = (((NI) 0) < last);
				if (T42_) goto LA43_;
				T42_ = fgetsSuccess;
				LA43_: ;
				result = T42_;
				goto BeforeRet_;
			}
			goto LA19_;
			LA21_: ;
			{
				sp -= ((NI) 1);
			}
			LA19_: ;
			pos += sp;
			sp = ((NI) 128);
			unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) ((NI)(pos + sp)))));
		}
	}
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).prev = excHandler__system_2565;
	excHandler__system_2565 = s;
}
N_LIB_PRIVATE N_NIMCALL(NI64, rawFileSize__systemZio_333)(FILE* file) {
	NI64 result;
	NI64 oldPos;
	int T1_;
	int T2_;
	result = (NI64)0;
	oldPos = ftello(file);
	T1_ = (int)0;
	T1_ = fseeko(file, IL64(0), ((int) 2));
	(void)(T1_);
	result = ftello(file);
	T2_ = (int)0;
	T2_ = fseeko(file, oldPos, ((int) 0));
	(void)(T2_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__systemZio_144)(FILE* f, void* buffer, NI len) {
	NI result;
	size_t T1_;
	result = (NI)0;
	T1_ = (size_t)0;
	T1_ = fread(buffer, ((size_t) 1), ((size_t) (len)), f);
	result = ((NI) (T1_));
	{
		if (!!((result == ((NI) (len))))) goto LA4_;
		checkErr__systemZio_141(f);
	}
	LA4_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endOfFile__systemZio_337)(FILE* f) {
	NIM_BOOL result;
	int c;
	int T1_;
{	result = (NIM_BOOL)0;
	c = fgetc(f);
	T1_ = (int)0;
	T1_ = ungetc(c, f);
	(void)(T1_);
	result = (c < ((NI32) 0));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllBuffer__systemZio_328)(FILE* file) {
	NimStringDesc* result;
	NimStringDesc* buffer;
	result = NIM_NIL;
	result = ((NimStringDesc*) NIM_NIL);
	buffer = mnewString(((NI) 4000));
	{
		while (1) {
			NI bytesRead;
			bytesRead = readBuffer__systemZio_144(file, ((void*) ((&buffer->data[((NI) 0)]))), ((NI) 4000));
			{
				if (!(bytesRead == ((NI) 4000))) goto LA5_;
				result = resizeString(result, (buffer ? buffer->Sup.len : 0) + 0);
appendString(result, buffer);
			}
			goto LA3_;
			LA5_: ;
			{
				buffer = setLengthStr(buffer, ((NI) (bytesRead)));
				result = resizeString(result, (buffer ? buffer->Sup.len : 0) + 0);
appendString(result, buffer);
				goto LA1;
			}
			LA3_: ;
		}
	} LA1: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllFile__systemZio_341)(FILE* file, NI64 len) {
	NimStringDesc* result;
	NI bytes;
	result = NIM_NIL;
	result = mnewString(((NI) (len)));
	bytes = readBuffer__systemZio_144(file, ((void*) ((&result->data[((NI) 0)]))), ((NI) (len)));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = endOfFile__systemZio_337(file);
		if (!T3_) goto LA4_;
		{
			if (!(((NI64) (bytes)) < len)) goto LA8_;
			result = setLengthStr(result, ((NI) (bytes)));
		}
		LA8_: ;
	}
	goto LA1_;
	LA4_: ;
	{
		NimStringDesc* T11_;
		T11_ = NIM_NIL;
		T11_ = readAllBuffer__systemZio_328(file);
		result = resizeString(result, (T11_ ? T11_->Sup.len : 0) + 0);
appendString(result, T11_);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAll__systemZio_350)(FILE* file) {
	NimStringDesc* result;
	NI64 len;
	result = NIM_NIL;
	{
		if (!!((file == stdin))) goto LA3_;
		len = rawFileSize__systemZio_333(file);
	}
	goto LA1_;
	LA3_: ;
	{
		len = IL64(-1);
	}
	LA1_: ;
	{
		if (!(IL64(0) < len)) goto LA8_;
		result = readAllFile__systemZio_341(file, len);
	}
	goto LA6_;
	LA8_: ;
	{
		result = readAllBuffer__systemZio_328(file);
	}
	LA6_: ;
	return result;
}
static N_INLINE(void, popSafePoint)(void) {
	excHandler__system_2565 = (*excHandler__system_2565).prev;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readFile__systemZio_469)(NimStringDesc* filename) {
	NimStringDesc* volatile result;
	FILE* f;
	result = NIM_NIL;
	f = ((FILE*) NIM_NIL);
	{
		NIM_BOOL T3_;
		TSafePoint TM__MnCJ0VAmeZ9aTATUB39cx60Q_7;
		T3_ = (NIM_BOOL)0;
		T3_ = open__systemZio_389(&f, filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0), ((NI) -1));
		if (!T3_) goto LA4_;
		pushSafePoint(&TM__MnCJ0VAmeZ9aTATUB39cx60Q_7);
		TM__MnCJ0VAmeZ9aTATUB39cx60Q_7.status = _setjmp(TM__MnCJ0VAmeZ9aTATUB39cx60Q_7.context);
		if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_7.status == 0) {
		result = readAll__systemZio_350(f);
		popSafePoint();
		}
		else {
			popSafePoint();
		}
		{
			close__systemZio_217(f);
			if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_7.status != 0) nimLeaveFinally();
		}
		if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_7.status != 0) reraiseException();
	}
	goto LA1_;
	LA4_: ;
	{
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T9_;
		NimStringDesc* T10_;
		T9_ = NIM_NIL;
		T9_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTIrefioerror__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
		(*T9_).Sup.Sup.Sup.m_type = (&NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_);
		(*T9_).Sup.Sup.name = "IOError";
		T10_ = NIM_NIL;
		T10_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T10_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_6));
appendString(T10_, filename);
		asgnRef((void**) (&(*T9_).Sup.Sup.message), T10_);
		asgnRef((void**) (&(*T9_).Sup.Sup.parent), ((Exception*) NIM_NIL));
		raiseExceptionEx((Exception*)T9_, "IOError", "readFile", "io.nim", 853);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, readChars__systemZio_156)(FILE* f, NIM_CHAR* a, NI aLen_0) {
	NI result;
	result = (NI)0;
	result = readBuffer__systemZio_144(f, ((void*) ((&a[((NI) 0)]))), ((NI) (aLen_0)));
	return result;
}
N_LIB_PRIVATE N_NOINLINE(void, raiseEOF__systemZio_117)(void) {
	tyObject_EOFError__KGSY1JdrNB7Xi8KDhXFhSg* T1_;
	NimStringDesc* T2_;
	T1_ = NIM_NIL;
	T1_ = (tyObject_EOFError__KGSY1JdrNB7Xi8KDhXFhSg*) newObj((&NTIrefeoferror__LEclZrWX2FQAodlapxGITw_), sizeof(tyObject_EOFError__KGSY1JdrNB7Xi8KDhXFhSg));
	(*T1_).Sup.Sup.Sup.Sup.m_type = (&NTIeoferror__KGSY1JdrNB7Xi8KDhXFhSg_);
	(*T1_).Sup.Sup.Sup.name = "EOFError";
	T2_ = NIM_NIL;
	T2_ = (*T1_).Sup.Sup.Sup.message; (*T1_).Sup.Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_8));
	if (T2_) nimGCunrefNoCycle(T2_);
	asgnRef((void**) (&(*T1_).Sup.Sup.Sup.parent), ((Exception*) NIM_NIL));
	raiseExceptionEx((Exception*)T1_, "EOFError", "raiseEOF", "io.nim", 142);
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readLine__systemZio_271)(FILE* f) {
	NimStringDesc* result;
	result = NIM_NIL;
	result = rawNewString(((NI) 80));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = readLine__systemZio_238(f, (&result));
		if (!!(T3_)) goto LA4_;
		raiseEOF__systemZio_117();
	}
	LA4_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, writeFile__systemZio_474)(NimStringDesc* filename, NimStringDesc* content) {
	FILE* f;
	f = ((FILE*) NIM_NIL);
	{
		NIM_BOOL T3_;
		TSafePoint TM__MnCJ0VAmeZ9aTATUB39cx60Q_9;
		T3_ = (NIM_BOOL)0;
		T3_ = open__systemZio_389(&f, filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 1), ((NI) -1));
		if (!T3_) goto LA4_;
		pushSafePoint(&TM__MnCJ0VAmeZ9aTATUB39cx60Q_9);
		TM__MnCJ0VAmeZ9aTATUB39cx60Q_9.status = _setjmp(TM__MnCJ0VAmeZ9aTATUB39cx60Q_9.context);
		if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_9.status == 0) {
		write__systemZio_205(f, content);
		popSafePoint();
		}
		else {
			popSafePoint();
		}
		{
			close__systemZio_217(f);
			if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_9.status != 0) nimLeaveFinally();
		}
		if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_9.status != 0) reraiseException();
	}
	goto LA1_;
	LA4_: ;
	{
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T9_;
		NimStringDesc* T10_;
		T9_ = NIM_NIL;
		T9_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTIrefioerror__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
		(*T9_).Sup.Sup.Sup.m_type = (&NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_);
		(*T9_).Sup.Sup.name = "IOError";
		T10_ = NIM_NIL;
		T10_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T10_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_6));
appendString(T10_, filename);
		asgnRef((void**) (&(*T9_).Sup.Sup.message), T10_);
		asgnRef((void**) (&(*T9_).Sup.Sup.parent), ((Exception*) NIM_NIL));
		raiseExceptionEx((Exception*)T9_, "IOError", "writeFile", "io.nim", 866);
	}
	LA1_: ;
}
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*, readLines__systemZio_492)(NimStringDesc* filename, NI n) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* volatile result;
	FILE* f;
	result = NIM_NIL;
	f = ((FILE*) NIM_NIL);
	{
		NIM_BOOL T3_;
		TSafePoint TM__MnCJ0VAmeZ9aTATUB39cx60Q_10;
		T3_ = (NIM_BOOL)0;
		T3_ = open__systemZio_389(&f, filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0), ((NI) -1));
		if (!T3_) goto LA4_;
		pushSafePoint(&TM__MnCJ0VAmeZ9aTATUB39cx60Q_10);
		TM__MnCJ0VAmeZ9aTATUB39cx60Q_10.status = _setjmp(TM__MnCJ0VAmeZ9aTATUB39cx60Q_10.context);
		if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_10.status == 0) {
		result = newSeq__systemZio_501(n);
		{
			NI i;
			NI colontmp_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (NI)(((NI) (n)) - ((NI) 1));
			res = ((NI) 0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA8;
					i = res;
					{
						NIM_BOOL T11_;
						T11_ = (NIM_BOOL)0;
						T11_ = readLine__systemZio_238(f, (&result->data[i]));
						if (!!(T11_)) goto LA12_;
						raiseEOF__systemZio_117();
					}
					LA12_: ;
					res += ((NI) 1);
				} LA8: ;
			}
		}
		popSafePoint();
		}
		else {
			popSafePoint();
		}
		{
			close__systemZio_217(f);
			if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_10.status != 0) nimLeaveFinally();
		}
		if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_10.status != 0) reraiseException();
	}
	goto LA1_;
	LA4_: ;
	{
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T17_;
		NimStringDesc* T18_;
		T17_ = NIM_NIL;
		T17_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTIrefioerror__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
		(*T17_).Sup.Sup.Sup.m_type = (&NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_);
		(*T17_).Sup.Sup.name = "IOError";
		T18_ = NIM_NIL;
		T18_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T18_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_6));
appendString(T18_, filename);
		asgnRef((void**) (&(*T17_).Sup.Sup.message), T18_);
		asgnRef((void**) (&(*T17_).Sup.Sup.parent), ((Exception*) NIM_NIL));
		raiseExceptionEx((Exception*)T17_, "IOError", "readLines", "io.nim", 896);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, setInheritable__systemZio_234)(int f, NIM_BOOL inheritable) {
	NIM_BOOL result;
	int T1_;
	int T7_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	{
		if (!inheritable) goto LA4_;
		T1_ = FIONCLEX;
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = FIOCLEX;
	}
	LA2_: ;
	T7_ = (int)0;
	T7_ = ioctl(f, T1_);
	result = !((T7_ == ((NI32) -1)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__systemZio_420)(FILE** f, int filehandle, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode) {
	NIM_BOOL result;
	int oshandle;
{	result = (NIM_BOOL)0;
	oshandle = filehandle;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = setInheritable__systemZio_234(oshandle, NIM_FALSE);
		if (!!(T3_)) goto LA4_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA4_: ;
	(*f) = fdopen(filehandle, FormatOpen__systemZio_371[(mode)- 0]);
	result = !(((*f) == ((FILE*) NIM_NIL)));
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, setFilePos__systemZio_436)(FILE* f, NI64 pos, tyEnum_FileSeekPos__I9aQjuvWxs8BspGbxwsngWw relativeTo) {
	{
		int T3_;
		T3_ = (int)0;
		T3_ = fseeko(f, pos, ((int) (relativeTo)));
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		raiseEIO__systemZio_96(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_11));
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI64, getFilePos__systemZio_449)(FILE* f) {
	NI64 result;
	result = (NI64)0;
	result = ftello(f);
	{
		if (!(result < IL64(0))) goto LA3_;
		raiseEIO__systemZio_96(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_12));
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, write__systemZio_304)(FILE* f, NimStringDesc** a, NI aLen_0) {
	{
		NimStringDesc** x;
		NI i;
		x = (NimStringDesc**)0;
		i = ((NI) 0);
		{
			while (1) {
				if (!(i < aLen_0)) goto LA3;
				x = (&a[i]);
				write__systemZio_205(f, (*x));
				i += ((NI) 1);
			} LA3: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_ioDatInit000)(void) {
static TNimNode TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[1];
NTIcfile__MAWzaQJYFu3mlxj0Ppxhmw_.size = sizeof(void*);
NTIcfile__MAWzaQJYFu3mlxj0Ppxhmw_.align = NIM_ALIGNOF(void*);
NTIcfile__MAWzaQJYFu3mlxj0Ppxhmw_.kind = 18;
NTIcfile__MAWzaQJYFu3mlxj0Ppxhmw_.base = 0;
NTIcfile__MAWzaQJYFu3mlxj0Ppxhmw_.flags = 1;
NTIcfile__MAWzaQJYFu3mlxj0Ppxhmw_.node = &TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[0];
NTIfile__XBeRj4rw9bUuE7CB3DS1rgg_.size = sizeof(FILE*);
NTIfile__XBeRj4rw9bUuE7CB3DS1rgg_.align = NIM_ALIGNOF(FILE*);
NTIfile__XBeRj4rw9bUuE7CB3DS1rgg_.kind = 21;
NTIfile__XBeRj4rw9bUuE7CB3DS1rgg_.base = (&NTIcfile__MAWzaQJYFu3mlxj0Ppxhmw_);
NTIfile__XBeRj4rw9bUuE7CB3DS1rgg_.flags = 3;
NTIfilehandle__2gIj3gQlK3HZJjQaYCP6ZQ_.size = sizeof(int);
NTIfilehandle__2gIj3gQlK3HZJjQaYCP6ZQ_.align = NIM_ALIGNOF(int);
NTIfilehandle__2gIj3gQlK3HZJjQaYCP6ZQ_.kind = 34;
NTIfilehandle__2gIj3gQlK3HZJjQaYCP6ZQ_.base = 0;
NTIfilehandle__2gIj3gQlK3HZJjQaYCP6ZQ_.flags = 3;
}

