/* Generated by Nim Compiler v1.6.2 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

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
typedef struct tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw;
typedef struct tyTuple__POdQNEM9bqRXZxVjuyaP2MQ tyTuple__POdQNEM9bqRXZxVjuyaP2MQ;
typedef struct tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ;
typedef struct tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w tyObject_TIdObj__KUwfjfUQEwGHguQbTcXu7w;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g tyObject_ItemId__ozxAxZLHTQ9c3akTzYvt67g;
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TType__facALICuu8zUj0hjvbTLFg tyObject_TType__facALICuu8zUj0hjvbTLFg;
typedef struct tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug;
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
struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
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
typedef N_NIMCALL_PTR(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, tyProc__RcJNn9bSvWdJgUmA1O6sbHA) (tyObject_TContext__C9bB2okDBl3OKGUBiY5k5Ug* c, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
struct tyTuple__POdQNEM9bqRXZxVjuyaP2MQ {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
tyProc__RcJNn9bSvWdJgUmA1O6sbHA Field3;
};
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA*, getIdent__idents_143)(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* ic, NimStringDesc* identifier);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*, skipGenericOwner__ast_4658)(tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, pluginMatches__pluginsupport_18)(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* ic, tyTuple__POdQNEM9bqRXZxVjuyaP2MQ* p, tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* s) {
	NIM_BOOL result;
	tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* module;
	tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ* package;
{	result = (NIM_BOOL)0;
	{
		tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* T3_;
		T3_ = NIM_NIL;
		T3_ = getIdent__idents_143(ic, (*p).Field2);
		if (!!(((*(*s).name).id == (*T3_).id))) goto LA4_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA4_: ;
	module = skipGenericOwner__ast_4658(s);
	{
		NIM_BOOL T8_;
		NIM_BOOL T9_;
		tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* T12_;
		T8_ = (NIM_BOOL)0;
		T9_ = (NIM_BOOL)0;
		T9_ = (module == ((tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*) NIM_NIL));
		if (T9_) goto LA10_;
		T9_ = !(((*module).kind == ((tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw) 6)));
		LA10_: ;
		T8_ = T9_;
		if (T8_) goto LA11_;
		T12_ = NIM_NIL;
		T12_ = getIdent__idents_143(ic, (*p).Field1);
		T8_ = !(((*(*module).name).id == (*T12_).id));
		LA11_: ;
		if (!T8_) goto LA13_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA13_: ;
	package = (*module).owner;
	{
		NIM_BOOL T17_;
		NIM_BOOL T18_;
		tyObject_TIdent__1LTsGP7bSxg45u9aHcxh6OA* T21_;
		T17_ = (NIM_BOOL)0;
		T18_ = (NIM_BOOL)0;
		T18_ = (package == ((tyObject_TSym__nnJKJFyjDGi5mnv8jwfTGQ*) NIM_NIL));
		if (T18_) goto LA19_;
		T18_ = !(((*package).kind == ((tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw) 24)));
		LA19_: ;
		T17_ = T18_;
		if (T17_) goto LA20_;
		T21_ = NIM_NIL;
		T21_ = getIdent__idents_143(ic, (*p).Field0);
		T17_ = !(((*(*package).name).id == (*T21_).id));
		LA20_: ;
		if (!T17_) goto LA22_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA22_: ;
	result = NIM_TRUE;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
