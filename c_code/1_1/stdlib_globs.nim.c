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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__systemZassertions_56)(NimStringDesc* msg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuReplaceChar)(NimStringDesc* s, NIM_CHAR sub, NIM_CHAR by);
STRING_LITERAL(TM__ZF8ppk9aofq5DcpfJb2DIsg_2, "globs.nim(59, 18) `false` paths like `C:foo` are currently unsupported, path: ", 78);
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
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nativeToUnixPath__stdZprivateZglobs_51)(NimStringDesc* path) {
	NimStringDesc* result;
	result = NIM_NIL;
	result = copyString(path);
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = (((NI) 2) <= (path ? path->Sup.len : 0));
		if (!(T4_)) goto LA5_;
		T4_ = (((NU8)(path->data[((NI) 0)])) >= ((NU8)(97)) && ((NU8)(path->data[((NI) 0)])) <= ((NU8)(122)) || ((NU8)(path->data[((NI) 0)])) >= ((NU8)(65)) && ((NU8)(path->data[((NI) 0)])) <= ((NU8)(90)));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		T3_ = ((NU8)(path->data[((NI) 1)]) == (NU8)(58));
		LA6_: ;
		if (!T3_) goto LA7_;
		result->data[((NI) 0)] = 47;
		result->data[((NI) 1)] = path->data[((NI) 0)];
		{
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = (((NI) 2) < (path ? path->Sup.len : 0));
			if (!(T11_)) goto LA12_;
			T11_ = !(((NU8)(path->data[((NI) 2)]) == (NU8)(92)));
			LA12_: ;
			if (!T11_) goto LA13_;
			{
				NimStringDesc* T19_;
				if (!NIM_TRUE) goto LA17_;
				T19_ = NIM_NIL;
				T19_ = rawNewString((path ? path->Sup.len : 0) + 78);
appendString(T19_, ((NimStringDesc*) &TM__ZF8ppk9aofq5DcpfJb2DIsg_2));
appendString(T19_, path);
				failedAssertImpl__systemZassertions_56(T19_);
			}
			LA17_: ;
		}
		LA13_: ;
	}
	LA7_: ;
	result = nsuReplaceChar(result, 92, 47);
	return result;
}