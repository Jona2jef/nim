/* Generated by Nim Compiler v1.6.2 */
#define NIM_INTBITS 32

#include "nimbase.h"
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
typedef struct tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw;
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TType__facALICuu8zUj0hjvbTLFg tyObject_TType__facALICuu8zUj0hjvbTLFg;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ;
typedef struct tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA;
typedef struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyTuple__kN8up2W6YKc5YA9avn5mV5w tyTuple__kN8up2W6YKc5YA9avn5mV5w;
typedef struct tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef NU8 tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w;
typedef NU8 tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw;
struct tyTuple__kN8up2W6YKc5YA9avn5mV5w {
NimStringDesc* Field0;
NI Field1;
NI Field2;
};
typedef NU16 tySet_tyEnum_TRenderFlag__wrPgUo1ExBlHvFnXN2nSHw;
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
typedef NU8 tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ;
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s, void* buf, NI bufLen, void* ClE_0);
void* ClE_0;
} tyProc__9cZV5JMJLsdOPMv55VbpOVg;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc__HzVCwACFYM9cx9aV62PdjtuA;
struct tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g {
  RootObj Sup;
tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineOffset;
tyProc__9cZV5JMJLsdOPMv55VbpOVg repl;
tyProc__HzVCwACFYM9cx9aV62PdjtuA onPrompt;
};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, getArg__filters_12)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos);
static N_INLINE(NI, len__ast_3198)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(void, invalidPragma__filters_9)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NOINLINE(void, liMessage__msgs_1118)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w msg, NimStringDesc* arg, tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw eh, tyTuple__kN8up2W6YKc5YA9avn5mV5w info2, NIM_BOOL isRaw);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderTree__renderer_46)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tySet_tyEnum_TRenderFlag__wrPgUo1ExBlHvFnXN2nSHw renderFlags);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, strArg__filters_62)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NimStringDesc* default_0);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, boolArg__filters_78)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NIM_BOOL default_0);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*, llStreamOpen__llstream_30)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, llStreamReadLine__llstream_194)(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s, NimStringDesc** line);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw chars);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_LIB_PRIVATE N_NIMCALL(void, llStreamWriteln__llstream_221)(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s, NimStringDesc* data);
N_LIB_PRIVATE N_NIMCALL(void, llStreamClose__llstream_110)(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
STRING_LITERAL(TM__TpC7tIfhGAaosc7HIsUuXA_2, "\'$1\' not allowed here", 21);
STRING_LITERAL(TM__TpC7tIfhGAaosc7HIsUuXA_4, "/home/runner/work/nightlies/nightlies/nim/compiler/filters.nim", 62);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__TpC7tIfhGAaosc7HIsUuXA_3 = {((NimStringDesc*) &TM__TpC7tIfhGAaosc7HIsUuXA_4),
((NI) 17),
((NI) 12)}
;
STRING_LITERAL(TM__TpC7tIfhGAaosc7HIsUuXA_5, "startswith", 10);
STRING_LITERAL(TM__TpC7tIfhGAaosc7HIsUuXA_6, "true", 4);
STRING_LITERAL(TM__TpC7tIfhGAaosc7HIsUuXA_7, "false", 5);
STRING_LITERAL(TM__TpC7tIfhGAaosc7HIsUuXA_8, "leading", 7);
STRING_LITERAL(TM__TpC7tIfhGAaosc7HIsUuXA_9, "trailing", 8);
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__TpC7tIfhGAaosc7HIsUuXA_10 = {
0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM__TpC7tIfhGAaosc7HIsUuXA_11, "sub", 3);
STRING_LITERAL(TM__TpC7tIfhGAaosc7HIsUuXA_12, "by", 2);
static N_INLINE(NI, len__ast_3198)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = ((*n)._kind_6.sons ? (*n)._kind_6.sons->Sup.len : 0);
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, invalidPragma__filters_9)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {
	NimStringDesc* T1_;
	NimStringDesc* T2_;
	T1_ = NIM_NIL;
	T1_ = renderTree__renderer_46(n, 4);
	T2_ = NIM_NIL;
	T2_ = nsuFormatSingleElem(((NimStringDesc*) &TM__TpC7tIfhGAaosc7HIsUuXA_2), T1_);
	liMessage__msgs_1118(conf, (*n).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), T2_, ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 0), TM__TpC7tIfhGAaosc7HIsUuXA_3, NIM_FALSE);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, getArg__filters_12)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos) {
	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* result;
{	result = NIM_NIL;
	result = ((tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*) NIM_NIL);
	{
		if (!((*n).kind >= ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 1) && (*n).kind <= ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 23))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = len__ast_3198(n);
		i_2 = ((NI) 1);
		{
			while (1) {
				if (!(i_2 < colontmp_)) goto LA7;
				i = i_2;
				{
					if (!((*(*n)._kind_6.sons->data[i]).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 33))) goto LA10_;
					{
						if (!!(((*(*(*n)._kind_6.sons->data[i])._kind_6.sons->data[((NI) 0)]).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 2)))) goto LA14_;
						invalidPragma__filters_9(conf, n);
					}
					LA14_: ;
					{
						NI T18_;
						T18_ = (NI)0;
						T18_ = nsuCmpIgnoreStyle((*(*(*(*n)._kind_6.sons->data[i])._kind_6.sons->data[((NI) 0)])._kind_5.ident).s, name);
						if (!(T18_ == ((NI) 0))) goto LA19_;
						result = (*(*n)._kind_6.sons->data[i])._kind_6.sons->data[((NI) 1)];
						goto BeforeRet_;
					}
					LA19_: ;
				}
				goto LA8_;
				LA10_: ;
				{
					if (!(i == pos)) goto LA22_;
					result = (*n)._kind_6.sons->data[i];
					goto BeforeRet_;
				}
				goto LA8_;
				LA22_: ;
				LA8_: ;
				i_2 += ((NI) 1);
			} LA7: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, charArg__filters_46)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NIM_CHAR default_0) {
	NIM_CHAR result;
	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* x;
	result = (NIM_CHAR)0;
	x = getArg__filters_12(conf, n, name, pos);
	{
		if (!(x == ((tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*) NIM_NIL))) goto LA3_;
		result = default_0;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!((*x).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 5))) goto LA6_;
		result = ((NIM_CHAR) (((NI) (((NI) ((*x)._kind_1.intVal))))));
	}
	goto LA1_;
	LA6_: ;
	{
		invalidPragma__filters_9(conf, n);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, strArg__filters_62)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NimStringDesc* default_0) {
	NimStringDesc* result;
	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* x;
	result = NIM_NIL;
	x = getArg__filters_12(conf, n, name, pos);
	{
		if (!(x == ((tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*) NIM_NIL))) goto LA3_;
		result = copyString(default_0);
	}
	goto LA1_;
	LA3_: ;
	{
		if (!((*x).kind >= ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 20) && (*x).kind <= ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 22))) goto LA6_;
		result = copyString((*x)._kind_3.strVal);
	}
	goto LA1_;
	LA6_: ;
	{
		invalidPragma__filters_9(conf, n);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, boolArg__filters_78)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NIM_BOOL default_0) {
	NIM_BOOL result;
	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* x;
	result = (NIM_BOOL)0;
	x = getArg__filters_12(conf, n, name, pos);
	{
		if (!(x == ((tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*) NIM_NIL))) goto LA3_;
		result = default_0;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		NI T8_;
		T6_ = (NIM_BOOL)0;
		T6_ = ((*x).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 2));
		if (!(T6_)) goto LA7_;
		T8_ = (NI)0;
		T8_ = nsuCmpIgnoreStyle((*(*x)._kind_5.ident).s, ((NimStringDesc*) &TM__TpC7tIfhGAaosc7HIsUuXA_6));
		T6_ = (T8_ == ((NI) 0));
		LA7_: ;
		if (!T6_) goto LA9_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA9_: ;
	{
		NIM_BOOL T12_;
		NI T14_;
		T12_ = (NIM_BOOL)0;
		T12_ = ((*x).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 2));
		if (!(T12_)) goto LA13_;
		T14_ = (NI)0;
		T14_ = nsuCmpIgnoreStyle((*(*x)._kind_5.ident).s, ((NimStringDesc*) &TM__TpC7tIfhGAaosc7HIsUuXA_7));
		T12_ = (T14_ == ((NI) 0));
		LA13_: ;
		if (!T12_) goto LA15_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA15_: ;
	{
		invalidPragma__filters_9(conf, n);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*, filterStrip__filters_98)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* stdin_0, NimStringDesc* filename, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* call) {
	tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	result = NIM_NIL;
	pattern = strArg__filters_62(conf, call, ((NimStringDesc*) &TM__TpC7tIfhGAaosc7HIsUuXA_5), ((NI) 1), ((NimStringDesc*) NIM_NIL));
	leading = boolArg__filters_78(conf, call, ((NimStringDesc*) &TM__TpC7tIfhGAaosc7HIsUuXA_8), ((NI) 2), NIM_TRUE);
	trailing = boolArg__filters_78(conf, call, ((NimStringDesc*) &TM__TpC7tIfhGAaosc7HIsUuXA_9), ((NI) 3), NIM_TRUE);
	result = llStreamOpen__llstream_30(((NimStringDesc*) NIM_NIL));
	line = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL T3_;
			NimStringDesc* stripped;
			T3_ = (NIM_BOOL)0;
			T3_ = llStreamReadLine__llstream_194(stdin_0, (&line));
			if (!T3_) goto LA2;
			stripped = nsuStrip(line, leading, trailing, TM__TpC7tIfhGAaosc7HIsUuXA_10);
			{
				NIM_BOOL T6_;
				T6_ = (NIM_BOOL)0;
				T6_ = ((pattern ? pattern->Sup.len : 0) == ((NI) 0));
				if (T6_) goto LA7_;
				T6_ = nsuStartsWith(stripped, pattern);
				LA7_: ;
				if (!T6_) goto LA8_;
				llStreamWriteln__llstream_221(result, stripped);
			}
			goto LA4_;
			LA8_: ;
			{
				llStreamWriteln__llstream_221(result, line);
			}
			LA4_: ;
		} LA2: ;
	}
	llStreamClose__llstream_110(stdin_0);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*, filterReplace__filters_109)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* stdin_0, NimStringDesc* filename, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* call) {
	tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	result = NIM_NIL;
	sub = strArg__filters_62(conf, call, ((NimStringDesc*) &TM__TpC7tIfhGAaosc7HIsUuXA_11), ((NI) 1), ((NimStringDesc*) NIM_NIL));
	{
		if (!((sub ? sub->Sup.len : 0) == ((NI) 0))) goto LA3_;
		invalidPragma__filters_9(conf, call);
	}
	LA3_: ;
	by = strArg__filters_62(conf, call, ((NimStringDesc*) &TM__TpC7tIfhGAaosc7HIsUuXA_12), ((NI) 2), ((NimStringDesc*) NIM_NIL));
	result = llStreamOpen__llstream_30(((NimStringDesc*) NIM_NIL));
	line = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL T7_;
			NimStringDesc* T8_;
			T7_ = (NIM_BOOL)0;
			T7_ = llStreamReadLine__llstream_194(stdin_0, (&line));
			if (!T7_) goto LA6;
			T8_ = NIM_NIL;
			T8_ = nsuReplaceStr(line, sub, by);
			llStreamWriteln__llstream_221(result, T8_);
		} LA6: ;
	}
	llStreamClose__llstream_110(stdin_0);
	return result;
}
