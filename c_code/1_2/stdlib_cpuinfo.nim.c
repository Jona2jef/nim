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
typedef struct tyObject_SYSTEM_INFO__SWgE8AvFHy7UHoDzPkVQvA tyObject_SYSTEM_INFO__SWgE8AvFHy7UHoDzPkVQvA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct tyObject_SYSTEM_INFO__SWgE8AvFHy7UHoDzPkVQvA {
NI32 u1;
NI32 dwPageSize;
void* lpMinimumApplicationAddress;
void* lpMaximumApplicationAddress;
NI32* dwActiveProcessorMask;
NI32 dwNumberOfProcessors;
NI32 dwProcessorType;
NI32 dwAllocationGranularity;
NI16 wProcessorLevel;
NI16 wProcessorRevision;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(void, tyProc__YFpHqv5irNA1pdOWbB74lQ) (tyObject_SYSTEM_INFO__SWgE8AvFHy7UHoDzPkVQvA* lpSystemInfo);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
STRING_LITERAL(TM__h5LhXa1x7tiRXpXshXFkHA_4, "kernel32", 8);
STRING_LITERAL(TM__h5LhXa1x7tiRXpXshXFkHA_5, "kernel32", 8);
static void* TM__h5LhXa1x7tiRXpXshXFkHA_2;
tyProc__YFpHqv5irNA1pdOWbB74lQ Dl_2080374802_;
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(NI, ncpicountProcessors)(void) {
	NI result;
	tyObject_SYSTEM_INFO__SWgE8AvFHy7UHoDzPkVQvA si;
	result = (NI)0;
	nimZeroMem((void*)(&si), sizeof(tyObject_SYSTEM_INFO__SWgE8AvFHy7UHoDzPkVQvA));
	Dl_2080374802_((&si));
	result = ((NI) (si.dwNumberOfProcessors));
	{
		if (!(result <= ((NI) 0))) goto LA3_;
		result = ((NI) 0);
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_cpuinfoDatInit000)(void) {
if (!((TM__h5LhXa1x7tiRXpXshXFkHA_2 = nimLoadLibrary(((NimStringDesc*) &TM__h5LhXa1x7tiRXpXshXFkHA_4)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__h5LhXa1x7tiRXpXshXFkHA_5));
	Dl_2080374802_ = (tyProc__YFpHqv5irNA1pdOWbB74lQ) nimGetProcAddr(TM__h5LhXa1x7tiRXpXshXFkHA_2, "GetSystemInfo");
}
