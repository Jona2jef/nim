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
typedef struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ tySequence__6H5Oh5UUvVCLiakt9aTwtUQ;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI reserved;
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
typedef NU8 tyArray__PgpowgA9aFQHq0cr9b7SoUgw[256];
struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ {
  TGenericSeq Sup;
  NU8 data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TNimType NTIseqLbyteT__6H5Oh5UUvVCLiakt9aTwtUQ_;
N_LIB_PRIVATE NIM_CONST tyArray__PgpowgA9aFQHq0cr9b7SoUgw populationCount__bitsets_212 = {((NU8) 0),
((NU8) 1),
((NU8) 1),
((NU8) 2),
((NU8) 1),
((NU8) 2),
((NU8) 2),
((NU8) 3),
((NU8) 1),
((NU8) 2),
((NU8) 2),
((NU8) 3),
((NU8) 2),
((NU8) 3),
((NU8) 3),
((NU8) 4),
((NU8) 1),
((NU8) 2),
((NU8) 2),
((NU8) 3),
((NU8) 2),
((NU8) 3),
((NU8) 3),
((NU8) 4),
((NU8) 2),
((NU8) 3),
((NU8) 3),
((NU8) 4),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 1),
((NU8) 2),
((NU8) 2),
((NU8) 3),
((NU8) 2),
((NU8) 3),
((NU8) 3),
((NU8) 4),
((NU8) 2),
((NU8) 3),
((NU8) 3),
((NU8) 4),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 2),
((NU8) 3),
((NU8) 3),
((NU8) 4),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 4),
((NU8) 5),
((NU8) 5),
((NU8) 6),
((NU8) 1),
((NU8) 2),
((NU8) 2),
((NU8) 3),
((NU8) 2),
((NU8) 3),
((NU8) 3),
((NU8) 4),
((NU8) 2),
((NU8) 3),
((NU8) 3),
((NU8) 4),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 2),
((NU8) 3),
((NU8) 3),
((NU8) 4),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 4),
((NU8) 5),
((NU8) 5),
((NU8) 6),
((NU8) 2),
((NU8) 3),
((NU8) 3),
((NU8) 4),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 4),
((NU8) 5),
((NU8) 5),
((NU8) 6),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 4),
((NU8) 5),
((NU8) 5),
((NU8) 6),
((NU8) 4),
((NU8) 5),
((NU8) 5),
((NU8) 6),
((NU8) 5),
((NU8) 6),
((NU8) 6),
((NU8) 7),
((NU8) 1),
((NU8) 2),
((NU8) 2),
((NU8) 3),
((NU8) 2),
((NU8) 3),
((NU8) 3),
((NU8) 4),
((NU8) 2),
((NU8) 3),
((NU8) 3),
((NU8) 4),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 2),
((NU8) 3),
((NU8) 3),
((NU8) 4),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 4),
((NU8) 5),
((NU8) 5),
((NU8) 6),
((NU8) 2),
((NU8) 3),
((NU8) 3),
((NU8) 4),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 4),
((NU8) 5),
((NU8) 5),
((NU8) 6),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 4),
((NU8) 5),
((NU8) 5),
((NU8) 6),
((NU8) 4),
((NU8) 5),
((NU8) 5),
((NU8) 6),
((NU8) 5),
((NU8) 6),
((NU8) 6),
((NU8) 7),
((NU8) 2),
((NU8) 3),
((NU8) 3),
((NU8) 4),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 4),
((NU8) 5),
((NU8) 5),
((NU8) 6),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 4),
((NU8) 5),
((NU8) 5),
((NU8) 6),
((NU8) 4),
((NU8) 5),
((NU8) 5),
((NU8) 6),
((NU8) 5),
((NU8) 6),
((NU8) 6),
((NU8) 7),
((NU8) 3),
((NU8) 4),
((NU8) 4),
((NU8) 5),
((NU8) 4),
((NU8) 5),
((NU8) 5),
((NU8) 6),
((NU8) 4),
((NU8) 5),
((NU8) 5),
((NU8) 6),
((NU8) 5),
((NU8) 6),
((NU8) 6),
((NU8) 7),
((NU8) 4),
((NU8) 5),
((NU8) 5),
((NU8) 6),
((NU8) 5),
((NU8) 6),
((NU8) 6),
((NU8) 7),
((NU8) 5),
((NU8) 6),
((NU8) 6),
((NU8) 7),
((NU8) 6),
((NU8) 7),
((NU8) 7),
((NU8) 8)}
;
N_LIB_PRIVATE N_NIMCALL(void, bitSetInit__bitsets_10)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ** b, NI length) {
	unsureAsgnRef((void**) (&(*b)), (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*) newSeq((&NTIseqLbyteT__6H5Oh5UUvVCLiakt9aTwtUQ_), ((NI) (length))));
}
N_LIB_PRIVATE N_NIMCALL(void, bitSetIncl__bitsets_25)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ** x, NI64 elem) {
	(*x)->data[(NI64)((NI64)(elem) >> (NU64)(((NI) 3)))] = (NU8)((*x)->data[(NI64)((NI64)(elem) >> (NU64)(((NI) 3)))] | (NU8)((NU64)(((NU8) 1)) << (NU64)((NI64)(elem & IL64(7)))));
}
N_LIB_PRIVATE N_NIMCALL(NI64, bitSetCard__bitsets_40)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x) {
	NI64 result;
	result = (NI64)0;
	{
		NU8* it;
		NI i;
		NI L;
		NI T2_;
		it = (NU8*)0;
		i = ((NI) 0);
		T2_ = (x ? x->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i < L)) goto LA4;
				it = (&x->data[i]);
				result += ((NI) (populationCount__bitsets_212[((*it))- 0]));
				i += ((NI) 1);
			} LA4: ;
		}
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetContains__bitsets_37)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T2_ = ((x ? x->Sup.len : 0)-1);
		colontmp_ = T2_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				{
					if (!!(((NU8)(x->data[i] & (NU8)((NU8) ~(y->data[i]))) == ((NU8) 0)))) goto LA7_;
					result = NIM_FALSE;
					goto BeforeRet_;
				}
				LA7_: ;
				res += ((NI) 1);
			} LA4: ;
		}
	}
	result = NIM_TRUE;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetEquals__bitsets_34)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T2_ = ((x ? x->Sup.len : 0)-1);
		colontmp_ = T2_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				{
					if (!!((x->data[i] == y->data[i]))) goto LA7_;
					result = NIM_FALSE;
					goto BeforeRet_;
				}
				LA7_: ;
				res += ((NI) 1);
			} LA4: ;
		}
	}
	result = NIM_TRUE;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, bitSetIntersect__bitsets_22)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ** x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y) {
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T2_ = (((*x) ? (*x)->Sup.len : 0)-1);
		colontmp_ = T2_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				(*x)->data[i] = (NU8)((*x)->data[i] & y->data[i]);
				res += ((NI) 1);
			} LA4: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetIn__bitsets_31)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x, NI64 e) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = !(((NU8)(x->data[(NI64)((NI64)(e) >> (NU64)(((NI) 3)))] & (NU8)((NU64)(((NU8) 1)) << (NU64)((NI64)(e & IL64(7))))) == ((NU8) 0)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, bitSetUnion__bitsets_13)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ** x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y) {
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T2_ = (((*x) ? (*x)->Sup.len : 0)-1);
		colontmp_ = T2_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				(*x)->data[i] = (NU8)((*x)->data[i] | y->data[i]);
				res += ((NI) 1);
			} LA4: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, bitSetDiff__bitsets_16)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ** x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y) {
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T2_ = (((*x) ? (*x)->Sup.len : 0)-1);
		colontmp_ = T2_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				(*x)->data[i] = (NU8)((*x)->data[i] & (NU8)((NU8) ~(y->data[i])));
				res += ((NI) 1);
			} LA4: ;
		}
	}
}