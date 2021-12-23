/* Generated by Nim Compiler v1.6.2 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <OS.h>
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
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
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
	system_info sysinfo;
	result = (NI)0;
	nimZeroMem((void*)(&sysinfo), sizeof(system_info));
	{
		NI32 T3_;
		T3_ = (NI32)0;
		T3_ = get_system_info((&sysinfo));
		if (!(T3_ == ((NI32) 0))) goto LA4_;
		result = ((NI) (sysinfo.cpu_count));
	}
	LA4_: ;
	{
		if (!(result <= ((NI) 0))) goto LA8_;
		result = ((NI) 0);
	}
	LA8_: ;
	return result;
}
