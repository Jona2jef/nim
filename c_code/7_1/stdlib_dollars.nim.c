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
static N_INLINE(void, addInt__stdZprivateZdigitsutils_189)(NimStringDesc** result, NI x);
N_LIB_PRIVATE N_NIMCALL(void, addInt__stdZprivateZdigitsutils_167)(NimStringDesc** result, NI64 x);
N_LIB_PRIVATE N_NIMCALL(void, addInt__stdZprivateZdigitsutils_164)(NimStringDesc** result, NU64 x);
static N_INLINE(void, addInt__stdZprivateZdigitsutils_189)(NimStringDesc** result, NI x) {
	addInt__stdZprivateZdigitsutils_167(result, ((NI64) (x)));
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___systemZdollars_3)(NI x) {
	NimStringDesc* result;
	result = NIM_NIL;
	addInt__stdZprivateZdigitsutils_189((&result), x);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___systemZdollars_6)(NI64 x) {
	NimStringDesc* result;
	result = NIM_NIL;
	addInt__stdZprivateZdigitsutils_167((&result), x);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___systemZdollars_9)(NU64 x) {
	NimStringDesc* result;
	result = NIM_NIL;
	addInt__stdZprivateZdigitsutils_164((&result), x);
	return result;
}
