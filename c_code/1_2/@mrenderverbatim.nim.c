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
typedef struct tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw;
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TType__facALICuu8zUj0hjvbTLFg tyObject_TType__facALICuu8zUj0hjvbTLFg;
typedef struct tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ;
typedef struct tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA;
typedef struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_LineData__W79a9bpfDJtmOKaRHvpAcCMg tyObject_LineData__W79a9bpfDJtmOKaRHvpAcCMg;
typedef struct tySequence__shxop0zPIs5Ec3k71aCLuQ tySequence__shxop0zPIs5Ec3k71aCLuQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag__jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw;
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
struct tyObject_LineData__W79a9bpfDJtmOKaRHvpAcCMg {
tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf;
NI lineFirst;
tySequence__shxop0zPIs5Ec3k71aCLuQ* lines;
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
struct tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ {
NI16 a;
NI b;
};
struct tySequence__shxop0zPIs5Ec3k71aCLuQ {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, lastSon__ast_4832)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, lastNodeRec__renderverbatim_6)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
static N_INLINE(NI, safeLen__ast_3191)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
static N_INLINE(NI, len__ast_3198)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NI, numLines__msgs_1089)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NI32 fileIdx);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, visitMultilineStrings__renderverbatim_50)(tyObject_LineData__W79a9bpfDJtmOKaRHvpAcCMg* ldata, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tripleStrLitStartsAtNextLine__renderverbatim_27)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, sourceLine__msgs_1100)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q i);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuContinuesWith)(NimStringDesc* s, NimStringDesc* substr, NI start);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__systemZassertions_56)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, setLengthSeqV2)(TGenericSeq* s, TNimType* typ, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, startOfLineInsideTriple__renderverbatim_89)(tyObject_LineData__W79a9bpfDJtmOKaRHvpAcCMg ldata, NI line);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isInIndentationBlock__renderverbatim_14)(NimStringDesc* src, NI indent);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(NimStringDesc*, X5BX5D___renderverbatim_164)(NimStringDesc* s, tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ x);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
static N_INLINE(tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ, dotdot___renderverbatim_137)(NI16 a, NI b);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
STRING_LITERAL(TM__9bwZ0lZ4vtVZHDwmqgGHGOQ_2, "\"\"\"", 3);
STRING_LITERAL(TM__9bwZ0lZ4vtVZHDwmqgGHGOQ_3, "renderverbatim.nim(42, 12) `src.continuesWith(tripleQuote, col)` ", 65);
STRING_LITERAL(TM__9bwZ0lZ4vtVZHDwmqgGHGOQ_4, "renderverbatim.nim(47, 16) `src.len == i` ", 42);
extern TNimType NTIseqLboolT__shxop0zPIs5Ec3k71aCLuQ_;
STRING_LITERAL(TM__9bwZ0lZ4vtVZHDwmqgGHGOQ_5, "\012", 1);
static N_INLINE(NI, len__ast_3198)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = ((*n)._kind_6.sons ? (*n)._kind_6.sons->Sup.len : 0);
	result = T1_;
	return result;
}
static N_INLINE(NI, safeLen__ast_3191)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	result = (NI)0;
	{
		if (!((*n).kind >= ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 0) && (*n).kind <= ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 23))) goto LA3_;
		result = ((NI) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = len__ast_3198(n);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, lastNodeRec__renderverbatim_6)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* result;
	result = NIM_NIL;
	result = n;
	{
		while (1) {
			NI T3_;
			NI T4_;
			T3_ = (NI)0;
			T3_ = safeLen__ast_3191(result);
			if (!(((NI) 0) < T3_)) goto LA2;
			T4_ = (NI)0;
			T4_ = len__ast_3198(result);
			result = (*result)._kind_6.sons->data[(NI)(T4_ - ((NI) 1))];
		} LA2: ;
	}
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tripleStrLitStartsAtNextLine__renderverbatim_27)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NIM_BOOL result;
	NimStringDesc* src;
	NI16 col;
	NI16 i;
	NIM_BOOL onlySpace;
{	result = (NIM_BOOL)0;
	src = sourceLine__msgs_1100(conf, (*n).info);
	col = (*n).info.col;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nsuContinuesWith(src, ((NimStringDesc*) &TM__9bwZ0lZ4vtVZHDwmqgGHGOQ_2), ((NI) (col)));
		if (!!(T3_)) goto LA4_;
		failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__9bwZ0lZ4vtVZHDwmqgGHGOQ_3));
	}
	LA4_: ;
	i = (NI16)(col + ((NI16) 3));
	onlySpace = NIM_TRUE;
	{
		while (1) {
			{
				if (!((src ? src->Sup.len : 0) <= ((NI) (i)))) goto LA10_;
				{
					if (!!(((src ? src->Sup.len : 0) == ((NI) (i))))) goto LA14_;
					failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__9bwZ0lZ4vtVZHDwmqgGHGOQ_4));
				}
				LA14_: ;
				result = onlySpace;
				goto BeforeRet_;
			}
			goto LA8_;
			LA10_: ;
			{
				NIM_BOOL T17_;
				NIM_BOOL T19_;
				T17_ = (NIM_BOOL)0;
				T17_ = nsuContinuesWith(src, ((NimStringDesc*) &TM__9bwZ0lZ4vtVZHDwmqgGHGOQ_2), ((NI) (i)));
				if (!(T17_)) goto LA18_;
				T19_ = (NIM_BOOL)0;
				T19_ = ((src ? src->Sup.len : 0) == ((NI) ((NI16)(i + ((NI16) 3)))));
				if (T19_) goto LA20_;
				T19_ = !(((NU8)(src->data[(NI16)(i + ((NI16) 3))]) == (NU8)(34)));
				LA20_: ;
				T17_ = T19_;
				LA18_: ;
				if (!T17_) goto LA21_;
				result = NIM_FALSE;
				goto BeforeRet_;
			}
			goto LA8_;
			LA21_: ;
			{
				if (!!(((NU8)(src->data[i]) == (NU8)(32)))) goto LA24_;
				onlySpace = NIM_FALSE;
			}
			goto LA8_;
			LA24_: ;
			LA8_: ;
			i += ((NI) 1);
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, visitMultilineStrings__renderverbatim_50)(tyObject_LineData__W79a9bpfDJtmOKaRHvpAcCMg* ldata, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NI cline;
	cline = (*ldata).lineFirst;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 22):
	{
		cline = ((NI) ((*n).info.line));
		{
			NIM_BOOL T4_;
			NI indexX60gensym11_;
			T4_ = (NIM_BOOL)0;
			T4_ = tripleStrLitStartsAtNextLine__renderverbatim_27((*ldata).conf, n);
			if (!T4_) goto LA5_;
			cline += ((NI) 1);
			indexX60gensym11_ = (NI)(cline - (*ldata).lineFirst);
			{
				NI T9_;
				T9_ = ((*ldata).lines ? (*ldata).lines->Sup.len : 0);
				if (!(T9_ < (NI)(indexX60gensym11_ + ((NI) 1)))) goto LA10_;
				unsureAsgnRef((void**) (&(*ldata).lines), (tySequence__shxop0zPIs5Ec3k71aCLuQ*) setLengthSeqV2(&((*ldata).lines)->Sup, (&NTIseqLboolT__shxop0zPIs5Ec3k71aCLuQ_), ((NI) ((NI)(indexX60gensym11_ + ((NI) 1))))));
			}
			LA10_: ;
			(*ldata).lines->data[indexX60gensym11_] = NIM_TRUE;
		}
		LA5_: ;
		{
			NIM_CHAR ai;
			NimStringDesc* colontmp_;
			NI i;
			NI L;
			ai = (NIM_CHAR)0;
			colontmp_ = NIM_NIL;
			colontmp_ = (*n)._kind_3.strVal;
			i = ((NI) 0);
			L = (colontmp_ ? colontmp_->Sup.len : 0);
			{
				while (1) {
					if (!(i < L)) goto LA14;
					ai = colontmp_->data[i];
					switch (((NU8)(ai))) {
					case 10:
					{
						NI indexX60gensym12_;
						cline += ((NI) 1);
						indexX60gensym12_ = (NI)(cline - (*ldata).lineFirst);
						{
							NI T18_;
							T18_ = ((*ldata).lines ? (*ldata).lines->Sup.len : 0);
							if (!(T18_ < (NI)(indexX60gensym12_ + ((NI) 1)))) goto LA19_;
							unsureAsgnRef((void**) (&(*ldata).lines), (tySequence__shxop0zPIs5Ec3k71aCLuQ*) setLengthSeqV2(&((*ldata).lines)->Sup, (&NTIseqLboolT__shxop0zPIs5Ec3k71aCLuQ_), ((NI) ((NI)(indexX60gensym12_ + ((NI) 1))))));
						}
						LA19_: ;
						(*ldata).lines->data[indexX60gensym12_] = NIM_TRUE;
					}
					break;
					default:
					{
					}
					break;
					}
					i += ((NI) 1);
				} LA14: ;
			}
		}
	}
	break;
	default:
	{
		{
			NI i_2;
			NI colontmp__2;
			NI i_3;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = safeLen__ast_3191(n);
			i_3 = ((NI) 0);
			{
				while (1) {
					if (!(i_3 < colontmp__2)) goto LA25;
					i_2 = i_3;
					visitMultilineStrings__renderverbatim_50(ldata, (*n)._kind_6.sons->data[i_2]);
					i_3 += ((NI) 1);
				} LA25: ;
			}
		}
	}
	break;
	}
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, startOfLineInsideTriple__renderverbatim_89)(tyObject_LineData__W79a9bpfDJtmOKaRHvpAcCMg ldata, NI line) {
	NIM_BOOL result;
	NI index;
	result = (NIM_BOOL)0;
	index = (NI)(line - ldata.lineFirst);
	{
		NI T3_;
		T3_ = (ldata.lines ? ldata.lines->Sup.len : 0);
		if (!(T3_ <= index)) goto LA4_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA4_: ;
	{
		result = ldata.lines->data[index];
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isInIndentationBlock__renderverbatim_14)(NimStringDesc* src, NI indent) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		NI j;
		NI i;
		j = (NI)0;
		i = ((NI) 0);
		{
			while (1) {
				if (!(i < indent)) goto LA3;
				j = i;
				{
					if (!((src ? src->Sup.len : 0) <= j)) goto LA6_;
					result = NIM_TRUE;
					goto BeforeRet_;
				}
				LA6_: ;
				{
					if (!!(((NU8)(src->data[j]) == (NU8)(32)))) goto LA10_;
					result = NIM_FALSE;
					goto BeforeRet_;
				}
				LA10_: ;
				i += ((NI) 1);
			} LA3: ;
		}
	}
	result = NIM_TRUE;
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
static N_INLINE(NimStringDesc*, X5BX5D___renderverbatim_164)(NimStringDesc* s, tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ x) {
	NimStringDesc* result;
	NI a;
	NI L;
	result = NIM_NIL;
	a = ((NI) (x.a));
	L = (NI)((NI)((NI)((s ? s->Sup.len : 0) - x.b) - a) + ((NI) 1));
	result = mnewString(((NI) (L)));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < L)) goto LA3;
				i = i_2;
				result->data[i] = s->data[(NI)(i + a)];
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
static N_INLINE(tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ, dotdot___renderverbatim_137)(NI16 a, NI b) {
	tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ));
	result.a = a;
	result.b = b;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, extractRunnableExamplesSource__renderverbatim_97)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, NI indent) {
	NimStringDesc* result;
	tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q first;
	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* T1_;
	tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q last;
	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* T7_;
	tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info;
	NI16 indent2;
	NU16 numLines;
	NI T8_;
	NI lastNonemptyPos;
	tyObject_LineData__W79a9bpfDJtmOKaRHvpAcCMg ldata;
	NI T9_;
	result = NIM_NIL;
	T1_ = NIM_NIL;
	T1_ = lastSon__ast_4832(n);
	first = (*T1_).info;
	{
		if (!(first.line == (*(*n)._kind_6.sons->data[((NI) 0)]).info.line)) goto LA4_;
	}
	goto LA2_;
	LA4_: ;
	{
		first.line = (NU16)((NU16)((*(*n)._kind_6.sons->data[((NI) 0)]).info.line) + (NU16)(((NU16) 1)));
	}
	LA2_: ;
	T7_ = NIM_NIL;
	T7_ = lastNodeRec__renderverbatim_6(n);
	last = (*T7_).info;
	info = first;
	indent2 = info.col;
	T8_ = (NI)0;
	T8_ = numLines__msgs_1089(conf, info.fileIndex);
	numLines = ((NU16) (T8_));
	lastNonemptyPos = ((NI) 0);
	nimZeroMem((void*)(&ldata), sizeof(tyObject_LineData__W79a9bpfDJtmOKaRHvpAcCMg));
	nimZeroMem((void*)(&ldata), sizeof(tyObject_LineData__W79a9bpfDJtmOKaRHvpAcCMg));
	ldata.lineFirst = ((NI) (first.line));
	ldata.conf = conf;
	T9_ = (NI)0;
	T9_ = len__ast_3198(n);
	visitMultilineStrings__renderverbatim_50((&ldata), (*n)._kind_6.sons->data[(NI)(T9_ - ((NI) 1))]);
	result = ((NimStringDesc*) NIM_NIL);
	{
		NU16 line;
		NI res;
		line = (NU16)0;
		res = ((NI) (first.line));
		{
			while (1) {
				NimStringDesc* src;
				NIM_BOOL special;
				if (!(res <= ((NI) (numLines)))) goto LA12;
				line = ((NU16) (res));
				info.line = line;
				src = sourceLine__msgs_1100(conf, info);
				special = startOfLineInsideTriple__renderverbatim_89(ldata, ((NI) (line)));
				{
					NIM_BOOL T15_;
					NIM_BOOL T16_;
					NIM_BOOL T19_;
					T15_ = (NIM_BOOL)0;
					T16_ = (NIM_BOOL)0;
					T16_ = ((NU16)(last.line) < (NU16)(line));
					if (!(T16_)) goto LA17_;
					T16_ = !(special);
					LA17_: ;
					T15_ = T16_;
					if (!(T15_)) goto LA18_;
					T19_ = (NIM_BOOL)0;
					T19_ = isInIndentationBlock__renderverbatim_14(src, ((NI) (indent2)));
					T15_ = !(T19_);
					LA18_: ;
					if (!T15_) goto LA20_;
					goto LA10;
				}
				LA20_: ;
				{
					if (!((NU16)(first.line) < (NU16)(line))) goto LA24_;
					result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__9bwZ0lZ4vtVZHDwmqgGHGOQ_5));
				}
				LA24_: ;
				{
					if (!special) goto LA28_;
					result = resizeString(result, (src ? src->Sup.len : 0) + 0);
appendString(result, src);
					lastNonemptyPos = (result ? result->Sup.len : 0);
				}
				goto LA26_;
				LA28_: ;
				{
					tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ T36_;
					NimStringDesc* T37_;
					if (!(((NI) (indent2)) < (src ? src->Sup.len : 0))) goto LA31_;
					{
						NI i;
						NI i_2;
						i = (NI)0;
						i_2 = ((NI) 0);
						{
							while (1) {
								if (!(i_2 < indent)) goto LA35;
								i = i_2;
								result = addChar(result, 32);
								i_2 += ((NI) 1);
							} LA35: ;
						}
					}
					T36_ = dotdot___renderverbatim_137(indent2, ((NI) 1));
					T37_ = NIM_NIL;
					T37_ = X5BX5D___renderverbatim_164(src, T36_);
					result = resizeString(result, (T37_ ? T37_->Sup.len : 0) + 0);
appendString(result, T37_);
					lastNonemptyPos = (result ? result->Sup.len : 0);
				}
				goto LA26_;
				LA31_: ;
				LA26_: ;
				res += ((NI) 1);
			} LA12: ;
		}
	} LA10: ;
	result = setLengthStr(result, ((NI) (lastNonemptyPos)));
	return result;
}
