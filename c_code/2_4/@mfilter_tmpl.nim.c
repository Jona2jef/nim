/* Generated by Nim Compiler v1.6.2 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
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
typedef struct tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g;
typedef struct tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TTmplParser__hVXV9cC75rOvsaODz9bp1zeg tyObject_TTmplParser__hVXV9cC75rOvsaODz9bp1zeg;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_Target__9abOl5DLX8suLujOaHSvGzw tyObject_Target__9abOl5DLX8suLujOaHSvGzw;
typedef struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A;
typedef struct tySequence__tNFrR3kRuS1FSwuiLGoSSA tySequence__tNFrR3kRuS1FSwuiLGoSSA;
typedef struct tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA;
typedef struct tySequence__7lEisrXlQEzwtUKW5pzRCw tySequence__7lEisrXlQEzwtUKW5pzRCw;
typedef struct tySequence__Zi9cGbCWofbtABoHJ5RbLNQ tySequence__Zi9cGbCWofbtABoHJ5RbLNQ;
typedef struct tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg;
typedef struct tySequence__4eRCaZmrYLLw2k30GPTiMw tySequence__4eRCaZmrYLLw2k30GPTiMw;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyTuple__47w2DboNEPf69aPgubZdd7Q tyTuple__47w2DboNEPf69aPgubZdd7Q;
typedef struct tySequence__pK3qSsBZwdXd6qyUMkd5Jw tySequence__pK3qSsBZwdXd6qyUMkd5Jw;
typedef struct tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ;
typedef struct tyObject_ProfileDatacolonObjectType___rPBBfFL4X0b9cQ6rfMNPXig tyObject_ProfileDatacolonObjectType___rPBBfFL4X0b9cQ6rfMNPXig;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple__kN8up2W6YKc5YA9avn5mV5w tyTuple__kN8up2W6YKc5YA9avn5mV5w;
typedef struct tyTuple__z822nu9bFF1AlQnLrHjdwpA tyTuple__z822nu9bFF1AlQnLrHjdwpA;
typedef struct tyTuple__xYhUhS7X82rKTqbT9bRfCnw tyTuple__xYhUhS7X82rKTqbT9bRfCnw;
typedef struct tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw;
typedef struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyTuple__QeWl6B6ffS4pU6WWrtcrDw tyTuple__QeWl6B6ffS4pU6WWrtcrDw;
typedef struct tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TParseState__TMyoReN7VAtsUpVF9bL9cXRQ;
struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
struct tyObject_TTmplParser__hVXV9cC75rOvsaODz9bp1zeg {
tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* inp;
tyEnum_TParseState__TMyoReN7VAtsUpVF9bL9cXRQ state;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info;
NI indent;
NI emitPar;
NimStringDesc* x;
tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* outp;
NIM_CHAR subsChar;
NIM_CHAR nimDirective;
NimStringDesc* emit;
NimStringDesc* conc;
NimStringDesc* toStr;
NI curly;
NI bracket;
NI par;
NIM_BOOL pendingExprLine;
tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* config;
};
typedef NU8 tyEnum_TBackend__4OBsgZ9cscH2JLUE5Wcz01g;
typedef NU8 tyEnum_TSystemCPU__XYDt7D1G3qcClFyZy1Ky9ag;
typedef NU8 tyEnum_TSystemOS__s7Mlr1t66SUqP6BKJMXLaQ;
struct tyObject_Target__9abOl5DLX8suLujOaHSvGzw {
tyEnum_TSystemCPU__XYDt7D1G3qcClFyZy1Ky9ag targetCPU;
tyEnum_TSystemCPU__XYDt7D1G3qcClFyZy1Ky9ag hostCPU;
tyEnum_TSystemOS__s7Mlr1t66SUqP6BKJMXLaQ targetOS;
tyEnum_TSystemOS__s7Mlr1t66SUqP6BKJMXLaQ hostOS;
NI intSize;
NI floatSize;
NI ptrSize;
NimStringDesc* tnl;
};
typedef NU32 tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg;
typedef NU64 tySet_tyEnum_TGlobalOption__RAfAEZqjnKMDumgyKKc1qw;
typedef NU8 tySet_tyEnum_TErrorOutput__fBf8Teueoz9aAkO5cXaxrpA;
struct tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA {
tySequence__7lEisrXlQEzwtUKW5pzRCw* data;
NI counter;
};
struct tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A {
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q trackPos;
NIM_BOOL trackPosAttached;
tySet_tyEnum_TErrorOutput__fBf8Teueoz9aAkO5cXaxrpA errorOutputs;
tySequence__tNFrR3kRuS1FSwuiLGoSSA* msgContext;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q lastError;
tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA filenameToIndexTbl;
tySequence__Zi9cGbCWofbtABoHJ5RbLNQ* fileInfos;
NI32 systemFileIdx;
};
typedef NU8 tyEnum_FilenameOption__eL86bAtPxXWHj24F5gOMFQ;
typedef NU8 tyEnum_Command__0zjcIQ623TIRGPdtjLwTFA;
typedef NU8 tyEnum_TGCMode__tkz389aDYNd8ykeZszCuBSw;
typedef NU8 tyEnum_ExceptionSystem__1mkAogyaDAT7g9cQjzsgKLQ;
typedef NU8 tyEnum_SymbolFilesOption__gBES9bqm1ru9ape8SeMRAFgQ;
struct tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg {
tySequence__4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
};
typedef NU32 tySet_tyEnum_Feature__01UoAKYz1MxZiuG1X2VhNQ;
typedef NU8 tySet_tyEnum_LegacyFeature__hGCD9aOrxPvpXn4Ne6W6OVA;
typedef NU8 tyEnum_IdeCmd__1Ced39bl5eePmZ1PKMPXigQ;
typedef NU8 tyEnum_TSystemCC__1eWBJUonHMOnlBwsOvpFmA;
typedef NU8 tySet_tyEnum_TMsgKind__7VIi6mabc7hDxpCmSMYIug[11];
struct tyTuple__47w2DboNEPf69aPgubZdd7Q {
NI Field0;
NI Field1;
NI Field2;
};
typedef NU8 tySet_tyEnum_StdOrrKind__6cbmyTzDPaZU9afMe4mz3Ug;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ* result, void* ClE_0);
void* ClE_0;
} tyProc__YD0MR9bJ2x4beJkZdnjXN9cA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (NimStringDesc* output, void* ClE_0);
void* ClE_0;
} tyProc__k2HFjxisIgDALbEUFojxaQ;
typedef NU8 tyEnum_Severity__x5BWBPGAbIH9clm5pmNp5DA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* config, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, NimStringDesc* msg, tyEnum_Severity__x5BWBPGAbIH9clm5pmNp5DA severity, void* ClE_0);
void* ClE_0;
} tyProc__oL9coyIA2VDTGdUcur9aL9bew;
struct tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw {
tyEnum_TBackend__4OBsgZ9cscH2JLUE5Wcz01g backend;
tyObject_Target__9abOl5DLX8suLujOaHSvGzw target;
NI linesCompiled;
tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg options;
tySet_tyEnum_TGlobalOption__RAfAEZqjnKMDumgyKKc1qw globalOptions;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* macrosToExpand;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* arcToExpand;
tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A m;
tyEnum_FilenameOption__eL86bAtPxXWHj24F5gOMFQ filenameOption;
NimStringDesc* unitSep;
NI evalTemplateCounter;
NI evalMacroCounter;
NI8 exitcode;
tyEnum_Command__0zjcIQ623TIRGPdtjLwTFA cmd;
NimStringDesc* cmdInput;
NIM_BOOL projectIsCmd;
NIM_BOOL implicitCmd;
tyEnum_TGCMode__tkz389aDYNd8ykeZszCuBSw selectedGC;
tyEnum_ExceptionSystem__1mkAogyaDAT7g9cQjzsgKLQ exc;
NIM_BOOL hintProcessingDots;
NI verbosity;
NI numberOfProcessors;
NF lastCmdTime;
tyEnum_SymbolFilesOption__gBES9bqm1ru9ape8SeMRAFgQ symbolFiles;
NI spellSuggestMax;
tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg cppDefines;
NimStringDesc* headerFile;
tySet_tyEnum_Feature__01UoAKYz1MxZiuG1X2VhNQ features;
tySet_tyEnum_LegacyFeature__hGCD9aOrxPvpXn4Ne6W6OVA legacyFeatures;
NimStringDesc* arguments;
tyEnum_IdeCmd__1Ced39bl5eePmZ1PKMPXigQ ideCmd;
NIM_BOOL oldNewlines;
tyEnum_TSystemCC__1eWBJUonHMOnlBwsOvpFmA cCompiler;
tySet_tyEnum_TMsgKind__7VIi6mabc7hDxpCmSMYIug modifiedyNotes;
tySet_tyEnum_TMsgKind__7VIi6mabc7hDxpCmSMYIug cmdlineNotes;
tySet_tyEnum_TMsgKind__7VIi6mabc7hDxpCmSMYIug foreignPackageNotes;
tySet_tyEnum_TMsgKind__7VIi6mabc7hDxpCmSMYIug notes;
tySet_tyEnum_TMsgKind__7VIi6mabc7hDxpCmSMYIug warningAsErrors;
tySet_tyEnum_TMsgKind__7VIi6mabc7hDxpCmSMYIug mainPackageNotes;
NI mainPackageId;
NI errorCounter;
NI hintCounter;
NI warnCounter;
NI errorMax;
NI maxLoopIterationsVM;
NIM_BOOL isVmTrace;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* configVars;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* symbols;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* packageCache;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* nimblePaths;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* searchPaths;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* lazyPaths;
NimStringDesc* outFile;
NimStringDesc* outDir;
NimStringDesc* jsonBuildFile;
NimStringDesc* prefixDir;
NimStringDesc* libpath;
NimStringDesc* nimcacheDir;
tyTuple__47w2DboNEPf69aPgubZdd7Q nimStdlibVersion;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* dllOverrides;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* moduleOverrides;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* cfileSpecificOptions;
NimStringDesc* projectName;
NimStringDesc* projectPath;
NimStringDesc* projectFull;
NIM_BOOL projectIsStdin;
tySet_tyEnum_StdOrrKind__6cbmyTzDPaZU9afMe4mz3Ug lastMsgWasDot;
NI32 projectMainIdx;
NI32 projectMainIdx2;
NimStringDesc* command;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* commandArgs;
NimStringDesc* commandLine;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* extraCmds;
NIM_BOOL keepComments;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* implicitImports;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* implicitIncludes;
NimStringDesc* docSeeSrcUrl;
NimStringDesc* docRoot;
NimStringDesc* docCmd;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* configFiles;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* cIncludes;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* cLibs;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* cLinkedLibs;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* externalToLink;
NimStringDesc* linkOptionsCmd;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* compileOptionsCmd;
NimStringDesc* linkOptions;
NimStringDesc* compileOptions;
NimStringDesc* cCompilerPath;
tySequence__pK3qSsBZwdXd6qyUMkd5Jw* toCompile;
tyProc__YD0MR9bJ2x4beJkZdnjXN9cA suggestionResultHook;
NI suggestVersion;
NI suggestMaxResults;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q lastLineInfo;
tyProc__k2HFjxisIgDALbEUFojxaQ writelnHook;
tyProc__oL9coyIA2VDTGdUcur9aL9bew structuredErrorHook;
NimStringDesc* cppCustomNamespace;
NimStringDesc* nimMainPrefix;
tyObject_ProfileDatacolonObjectType___rPBBfFL4X0b9cQ6rfMNPXig* vmProfileData;
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
typedef NU8 tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w;
typedef NU8 tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw;
struct tyTuple__kN8up2W6YKc5YA9avn5mV5w {
NimStringDesc* Field0;
NI Field1;
NI Field2;
};
struct tyTuple__z822nu9bFF1AlQnLrHjdwpA {
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q Field0;
NimStringDesc* Field1;
};
struct tyTuple__xYhUhS7X82rKTqbT9bRfCnw {
NI Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw {
NimStringDesc* fullPath;
NimStringDesc* projPath;
NimStringDesc* shortName;
tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* quotedName;
tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* quotedFullName;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* lines;
NimStringDesc* dirtyFile;
NimStringDesc* hash;
NIM_BOOL dirty;
};
struct tyTuple__QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
};
typedef NU8 tySet_tyEnum_CfileFlag__Vl9c9ayddDuXiWtnWTsEYGsA;
struct tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg {
NimStringDesc* nimname;
NimStringDesc* cname;
NimStringDesc* obj;
tySet_tyEnum_CfileFlag__Vl9c9ayddDuXiWtnWTsEYGsA flags;
NimStringDesc* customArgs;
};
struct tySequence__tNFrR3kRuS1FSwuiLGoSSA {
  TGenericSeq Sup;
  tyTuple__z822nu9bFF1AlQnLrHjdwpA data[SEQ_DECL_SIZE];
};
struct tySequence__7lEisrXlQEzwtUKW5pzRCw {
  TGenericSeq Sup;
  tyTuple__xYhUhS7X82rKTqbT9bRfCnw data[SEQ_DECL_SIZE];
};
struct tySequence__Zi9cGbCWofbtABoHJ5RbLNQ {
  TGenericSeq Sup;
  tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw data[SEQ_DECL_SIZE];
};
struct tySequence__4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  tyTuple__QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__pK3qSsBZwdXd6qyUMkd5Jw {
  TGenericSeq Sup;
  tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q, newLineInfo__msgs_398)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* filename, NI line, NI col);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q, newLineInfo__msgs_381)(NI32 fileInfoIdx, NI line, NI col);
N_LIB_PRIVATE N_NIMCALL(NI32, fileInfoIdx__msgs_376)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* filename);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*, llStreamOpen__llstream_30)(NimStringDesc* data);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, charArg__filters_46)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NIM_CHAR default_0);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, strArg__filters_62)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, NimStringDesc* name, NI pos, NimStringDesc* default_0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, llStreamReadLine__llstream_194)(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s, NimStringDesc** line);
N_LIB_PRIVATE N_NIMCALL(void, parseLine__filter95tmpl_72)(tyObject_TTmplParser__hVXV9cC75rOvsaODz9bp1zeg* p);
N_LIB_PRIVATE N_NIMCALL(void, newLine__filter95tmpl_34)(tyObject_TTmplParser__hVXV9cC75rOvsaODz9bp1zeg* p);
N_LIB_PRIVATE N_NIMCALL(void, llStreamWrite__llstream_214)(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s, NimStringDesc* data);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
static N_INLINE(NimStringDesc*, spaces__pureZstrutils_1029)(NI n);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, scanPar__filter95tmpl_36)(tyObject_TTmplParser__hVXV9cC75rOvsaODz9bp1zeg* p, NI d);
static N_INLINE(NIM_BOOL, withInExpr__filter95tmpl_68)(tyObject_TTmplParser__hVXV9cC75rOvsaODz9bp1zeg* p);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endsWith__llstream_116)(NimStringDesc* x, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw s);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem__system_1735)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_LIB_PRIVATE N_NOINLINE(void, liMessage__msgs_1118)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w msg, NimStringDesc* arg, tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw eh, tyTuple__kN8up2W6YKc5YA9avn5mV5w info2, NIM_BOOL isRaw);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__system_7756)(NimStringDesc* s, NI first);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__pureZstrutils_1635)(NimStringDesc* s, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw chars);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toHex__pureZstrutils_1792)(NI x, NI len);
N_LIB_PRIVATE N_NIMCALL(void, llStreamWrite__llstream_224)(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s, NIM_CHAR data);
N_LIB_PRIVATE N_NIMCALL(void, llStreamClose__llstream_110)(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_2, "subschar", 8);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_3, "metachar", 8);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_4, "emit", 4);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_5, "result.add", 10);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_6, "conc", 4);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_7, " & ", 3);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_8, "tostring", 8);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_9, "$", 1);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_10, "\012", 1);
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__paI0W78l0CRDBLjAHJxn6w_11 = {
0x00, 0x00, 0x00, 0x00, 0x70, 0xbc, 0x00, 0x50,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_12, "end", 3);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_13, "if", 2);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_14, "when", 4);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_15, "try", 3);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_16, "while", 5);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_17, "for", 3);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_18, "block", 5);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_19, "case", 4);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_20, "proc", 4);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_21, "iterator", 8);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_22, "converter", 9);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_23, "macro", 5);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_24, "template", 8);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_25, "method", 6);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_26, "func", 4);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_27, "elif", 4);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_28, "of", 2);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_29, "else", 4);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_30, "except", 6);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_31, "finally", 7);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_32, "let", 3);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_33, "var", 3);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_34, "const", 5);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_35, "type", 4);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_36, "\'end\' does not close a control flow construct", 45);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_38, "/home/runner/work/nightlies/nightlies/nim/compiler/filter_tmpl.nim", 66);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__paI0W78l0CRDBLjAHJxn6w_37 = {((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_38),
((NI) 89),
((NI) 18)}
;
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_39, "#end", 4);
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__paI0W78l0CRDBLjAHJxn6w_40 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_41, "\"", 1);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_42, "(\"", 2);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_43, "\\x", 2);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_44, "\\\\", 2);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_45, "\\\'", 2);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_46, "\\\"", 2);
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_47, "expected closing \'}\'", 20);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__paI0W78l0CRDBLjAHJxn6w_48 = {((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_38),
((NI) 174),
((NI) 24)}
;
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_49, "invalid expression", 18);
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__paI0W78l0CRDBLjAHJxn6w_50 = {((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_38),
((NI) 196),
((NI) 24)}
;
STRING_LITERAL(TM__paI0W78l0CRDBLjAHJxn6w_51, "\\n\"", 3);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
}
static N_INLINE(tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q, newLineInfo__msgs_398)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* filename, NI line, NI col) {
	tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q result;
	NI32 T1_;
	nimZeroMem((void*)(&result), sizeof(tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q));
	T1_ = (NI32)0;
	T1_ = fileInfoIdx__msgs_376(conf, filename);
	result = newLineInfo__msgs_381(T1_, line, col);
	return result;
}
static N_INLINE(NimStringDesc*, spaces__pureZstrutils_1029)(NI n) {
	NimStringDesc* result;
	result = NIM_NIL;
	result = nsuRepeatChar(32, n);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, newLine__filter95tmpl_34)(tyObject_TTmplParser__hVXV9cC75rOvsaODz9bp1zeg* p) {
	NimStringDesc* T1_;
	T1_ = NIM_NIL;
	T1_ = nsuRepeatChar(41, ((NI) ((*p).emitPar)));
	llStreamWrite__llstream_214((*p).outp, T1_);
	(*p).emitPar = ((NI) 0);
	{
		if (!((NU16)(((NU16) 1)) < (NU16)((*p).info.line))) goto LA4_;
		llStreamWrite__llstream_214((*p).outp, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_10));
	}
	LA4_: ;
	{
		NimStringDesc* T10_;
		if (!(*p).pendingExprLine) goto LA8_;
		T10_ = NIM_NIL;
		T10_ = spaces__pureZstrutils_1029(((NI) 2));
		llStreamWrite__llstream_214((*p).outp, T10_);
		(*p).pendingExprLine = NIM_FALSE;
	}
	LA8_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, scanPar__filter95tmpl_36)(tyObject_TTmplParser__hVXV9cC75rOvsaODz9bp1zeg* p, NI d) {
	NI i;
	i = d;
	{
		while (1) {
			if (!(i < ((*p).x ? (*p).x->Sup.len : 0))) goto LA2;
			switch (((NU8)((*p).x->data[i]))) {
			case 40:
			{
				(*p).par += ((NI) 1);
			}
			break;
			case 41:
			{
				(*p).par -= ((NI) 1);
			}
			break;
			case 91:
			{
				(*p).bracket += ((NI) 1);
			}
			break;
			case 93:
			{
				(*p).bracket -= ((NI) 1);
			}
			break;
			case 123:
			{
				(*p).curly += ((NI) 1);
			}
			break;
			case 125:
			{
				(*p).curly -= ((NI) 1);
			}
			break;
			default:
			{
			}
			break;
			}
			i += ((NI) 1);
		} LA2: ;
	}
}
static N_INLINE(NIM_BOOL, withInExpr__filter95tmpl_68)(tyObject_TTmplParser__hVXV9cC75rOvsaODz9bp1zeg* p) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	T2_ = (((NI) 0) < (*p).par);
	if (T2_) goto LA3_;
	T2_ = (((NI) 0) < (*p).bracket);
	LA3_: ;
	T1_ = T2_;
	if (T1_) goto LA4_;
	T1_ = (((NI) 0) < (*p).curly);
	LA4_: ;
	result = T1_;
	return result;
}
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}
static N_INLINE(NIM_BOOL, equalMem__system_1735)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32) 0));
	return result;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI alen;
	NI blen;
{	result = (NIM_BOOL)0;
	alen = (a ? a->Sup.len : 0);
	blen = (b ? b->Sup.len : 0);
	{
		if (!(alen == blen)) goto LA3_;
		{
			if (!(alen == ((NI) 0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		result = equalMem__system_1735(((void*) ((&a->data[((NI) 0)]))), ((void*) ((&b->data[((NI) 0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, parseLine__filter95tmpl_72)(tyObject_TTmplParser__hVXV9cC75rOvsaODz9bp1zeg* p) {
	NI j;
	NI len;
	j = ((NI) 0);
	len = ((*p).x ? (*p).x->Sup.len : 0);
	{
		while (1) {
			NIM_BOOL T3_;
			T3_ = (NIM_BOOL)0;
			T3_ = (j < len);
			if (!(T3_)) goto LA4_;
			T3_ = ((NU8)((*p).x->data[j]) == (NU8)(32));
			LA4_: ;
			if (!T3_) goto LA2;
			j += ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL T7_;
		NIM_BOOL T8_;
		T7_ = (NIM_BOOL)0;
		T8_ = (NIM_BOOL)0;
		T8_ = (((NI) 2) <= len);
		if (!(T8_)) goto LA9_;
		T8_ = ((NU8)((*p).x->data[((NI) 0)]) == (NU8)((*p).nimDirective));
		LA9_: ;
		T7_ = T8_;
		if (!(T7_)) goto LA10_;
		T7_ = ((NU8)((*p).x->data[((NI) 1)]) == (NU8)(63));
		LA10_: ;
		if (!T7_) goto LA11_;
		newLine__filter95tmpl_34(p);
	}
	goto LA5_;
	LA11_: ;
	{
		NIM_BOOL T14_;
		NI d;
		NimStringDesc* keyw;
		NIM_BOOL T26_;
		T14_ = (NIM_BOOL)0;
		T14_ = (j < len);
		if (!(T14_)) goto LA15_;
		T14_ = ((NU8)((*p).x->data[j]) == (NU8)((*p).nimDirective));
		LA15_: ;
		if (!T14_) goto LA16_;
		newLine__filter95tmpl_34(p);
		j += ((NI) 1);
		{
			while (1) {
				NIM_BOOL T20_;
				T20_ = (NIM_BOOL)0;
				T20_ = (j < len);
				if (!(T20_)) goto LA21_;
				T20_ = ((NU8)((*p).x->data[j]) == (NU8)(32));
				LA21_: ;
				if (!T20_) goto LA19;
				j += ((NI) 1);
			} LA19: ;
		}
		d = j;
		keyw = ((NimStringDesc*) NIM_NIL);
		{
			while (1) {
				NIM_BOOL T24_;
				T24_ = (NIM_BOOL)0;
				T24_ = (j < len);
				if (!(T24_)) goto LA25_;
				T24_ = (((NU8)((*p).x->data[j])) >= ((NU8)(97)) && ((NU8)((*p).x->data[j])) <= ((NU8)(122)) || ((NU8)((*p).x->data[j])) >= ((NU8)(65)) && ((NU8)((*p).x->data[j])) <= ((NU8)(90)) || ((NU8)((*p).x->data[j])) >= ((NU8)(48)) && ((NU8)((*p).x->data[j])) <= ((NU8)(57)) || ((NU8)((*p).x->data[j])) >= ((NU8)(128)) && ((NU8)((*p).x->data[j])) <= ((NU8)(255)) || ((NU8)((*p).x->data[j])) == ((NU8)(46)) || ((NU8)((*p).x->data[j])) == ((NU8)(95)));
				LA25_: ;
				if (!T24_) goto LA23;
				keyw = addChar(keyw, (*p).x->data[j]);
				j += ((NI) 1);
			} LA23: ;
		}
		scanPar__filter95tmpl_36(p, j);
		T26_ = (NIM_BOOL)0;
		T26_ = withInExpr__filter95tmpl_68((&(*p)));
		if (T26_) goto LA27_;
		T26_ = endsWith__llstream_116((*p).x, TM__paI0W78l0CRDBLjAHJxn6w_11);
		LA27_: ;
		(*p).pendingExprLine = T26_;
		switch (hashString(keyw) & 31) {
		case 1: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_16))) goto LA29_;
break;
		case 3: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_28))) goto LA30_;
break;
		case 6: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_19))) goto LA29_;
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_23))) goto LA29_;
break;
		case 7: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_13))) goto LA29_;
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_25))) goto LA29_;
break;
		case 9: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_30))) goto LA30_;
break;
		case 10: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_20))) goto LA29_;
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_32))) goto LA31_;
break;
		case 12: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_33))) goto LA31_;
break;
		case 16: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_14))) goto LA29_;
break;
		case 17: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_21))) goto LA29_;
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_27))) goto LA30_;
break;
		case 18: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_24))) goto LA29_;
break;
		case 19: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_17))) goto LA29_;
break;
		case 21: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_29))) goto LA30_;
break;
		case 23: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_12))) goto LA28_;
break;
		case 24: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_22))) goto LA29_;
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_31))) goto LA30_;
break;
		case 26: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_34))) goto LA31_;
break;
		case 27: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_15))) goto LA29_;
break;
		case 29: 
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_18))) goto LA29_;
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_26))) goto LA29_;
if (eqStrings(keyw, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_35))) goto LA31_;
break;
		}
		goto LA32_;
		LA28_: ;
		{
			NimStringDesc* T40_;
			{
				if (!(((NI) 2) <= (*p).indent)) goto LA37_;
				(*p).indent -= ((NI) 2);
			}
			goto LA35_;
			LA37_: ;
			{
				(*p).info.col = ((NI16) (j));
				liMessage__msgs_1118((*p).config, (*p).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_36), ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 0), TM__paI0W78l0CRDBLjAHJxn6w_37, NIM_FALSE);
			}
			LA35_: ;
			T40_ = NIM_NIL;
			T40_ = spaces__pureZstrutils_1029(((NI) ((*p).indent)));
			llStreamWrite__llstream_214((*p).outp, T40_);
			llStreamWrite__llstream_214((*p).outp, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_39));
		}
		goto LA33_;
		LA29_: ;
		{
			NimStringDesc* T42_;
			NimStringDesc* T43_;
			T42_ = NIM_NIL;
			T42_ = spaces__pureZstrutils_1029(((NI) ((*p).indent)));
			llStreamWrite__llstream_214((*p).outp, T42_);
			T43_ = NIM_NIL;
			T43_ = substr__system_7756((*p).x, d);
			llStreamWrite__llstream_214((*p).outp, T43_);
			(*p).indent += ((NI) 2);
		}
		goto LA33_;
		LA30_: ;
		{
			NimStringDesc* T45_;
			NimStringDesc* T46_;
			T45_ = NIM_NIL;
			T45_ = spaces__pureZstrutils_1029(((NI) ((NI)((*p).indent - ((NI) 2)))));
			llStreamWrite__llstream_214((*p).outp, T45_);
			T46_ = NIM_NIL;
			T46_ = substr__system_7756((*p).x, d);
			llStreamWrite__llstream_214((*p).outp, T46_);
		}
		goto LA33_;
		LA31_: ;
		{
			NimStringDesc* T48_;
			NimStringDesc* T49_;
			T48_ = NIM_NIL;
			T48_ = spaces__pureZstrutils_1029(((NI) ((*p).indent)));
			llStreamWrite__llstream_214((*p).outp, T48_);
			T49_ = NIM_NIL;
			T49_ = substr__system_7756((*p).x, d);
			llStreamWrite__llstream_214((*p).outp, T49_);
			{
				NIM_BOOL T52_;
				T52_ = (NIM_BOOL)0;
				T52_ = contains__pureZstrutils_1635((*p).x, TM__paI0W78l0CRDBLjAHJxn6w_40);
				if (!!(T52_)) goto LA53_;
				(*p).indent += ((NI) 2);
			}
			LA53_: ;
		}
		goto LA33_;
		LA32_: ;
		{
			NimStringDesc* T56_;
			NimStringDesc* T57_;
			T56_ = NIM_NIL;
			T56_ = spaces__pureZstrutils_1029(((NI) ((*p).indent)));
			llStreamWrite__llstream_214((*p).outp, T56_);
			T57_ = NIM_NIL;
			T57_ = substr__system_7756((*p).x, d);
			llStreamWrite__llstream_214((*p).outp, T57_);
		}
		LA33_: ;
		(*p).state = ((tyEnum_TParseState__TMyoReN7VAtsUpVF9bL9cXRQ) 0);
	}
	goto LA5_;
	LA16_: ;
	{
		(*p).par = ((NI) 0);
		(*p).curly = ((NI) 0);
		(*p).bracket = ((NI) 0);
		j = ((NI) 0);
		switch ((*p).state) {
		case ((tyEnum_TParseState__TMyoReN7VAtsUpVF9bL9cXRQ) 1):
		{
			NimStringDesc* T60_;
			llStreamWrite__llstream_214((*p).outp, (*p).conc);
			llStreamWrite__llstream_214((*p).outp, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_10));
			T60_ = NIM_NIL;
			T60_ = spaces__pureZstrutils_1029(((NI) ((NI)((*p).indent + ((NI) 2)))));
			llStreamWrite__llstream_214((*p).outp, T60_);
			llStreamWrite__llstream_214((*p).outp, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_41));
		}
		break;
		case ((tyEnum_TParseState__TMyoReN7VAtsUpVF9bL9cXRQ) 0):
		{
			NimStringDesc* T62_;
			newLine__filter95tmpl_34(p);
			T62_ = NIM_NIL;
			T62_ = spaces__pureZstrutils_1029(((NI) ((*p).indent)));
			llStreamWrite__llstream_214((*p).outp, T62_);
			llStreamWrite__llstream_214((*p).outp, (*p).emit);
			llStreamWrite__llstream_214((*p).outp, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_42));
			(*p).emitPar += ((NI) 1);
		}
		break;
		}
		(*p).state = ((tyEnum_TParseState__TMyoReN7VAtsUpVF9bL9cXRQ) 1);
		{
			while (1) {
				if (!(j < len)) goto LA64;
				switch (((NU8)((*p).x->data[j]))) {
				case 1 ... 31:
				case 128 ... 255:
				{
					NimStringDesc* T66_;
					llStreamWrite__llstream_214((*p).outp, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_43));
					T66_ = NIM_NIL;
					T66_ = toHex__pureZstrutils_1792(((NU8)((*p).x->data[j])), ((NI) 2));
					llStreamWrite__llstream_214((*p).outp, T66_);
					j += ((NI) 1);
				}
				break;
				case 92:
				{
					llStreamWrite__llstream_214((*p).outp, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_44));
					j += ((NI) 1);
				}
				break;
				case 39:
				{
					llStreamWrite__llstream_214((*p).outp, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_45));
					j += ((NI) 1);
				}
				break;
				case 34:
				{
					llStreamWrite__llstream_214((*p).outp, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_46));
					j += ((NI) 1);
				}
				break;
				default:
				{
					{
						if (!((NU8)((*p).x->data[j]) == (NU8)((*p).subsChar))) goto LA73_;
						j += ((NI) 1);
						switch (((NU8)((*p).x->data[j]))) {
						case 123:
						{
							NI curly;
							(*p).info.col = ((NI16) (j));
							llStreamWrite__llstream_224((*p).outp, 34);
							llStreamWrite__llstream_214((*p).outp, (*p).conc);
							llStreamWrite__llstream_214((*p).outp, (*p).toStr);
							llStreamWrite__llstream_224((*p).outp, 40);
							j += ((NI) 1);
							curly = ((NI) 0);
							{
								while (1) {
									if (!(j < len)) goto LA77;
									switch (((NU8)((*p).x->data[j]))) {
									case 123:
									{
										j += ((NI) 1);
										curly += ((NI) 1);
										llStreamWrite__llstream_224((*p).outp, 123);
									}
									break;
									case 125:
									{
										j += ((NI) 1);
										{
											if (!(curly == ((NI) 0))) goto LA82_;
											goto LA76;
										}
										LA82_: ;
										{
											if (!(((NI) 0) < curly)) goto LA86_;
											curly -= ((NI) 1);
										}
										LA86_: ;
										llStreamWrite__llstream_224((*p).outp, 125);
									}
									break;
									default:
									{
										llStreamWrite__llstream_224((*p).outp, (*p).x->data[j]);
										j += ((NI) 1);
									}
									break;
									}
								} LA77: ;
							} LA76: ;
							{
								if (!(((NI) 0) < curly)) goto LA91_;
								liMessage__msgs_1118((*p).config, (*p).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_47), ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 0), TM__paI0W78l0CRDBLjAHJxn6w_48, NIM_FALSE);
								goto LA63;
							}
							LA91_: ;
							llStreamWrite__llstream_224((*p).outp, 41);
							llStreamWrite__llstream_214((*p).outp, (*p).conc);
							llStreamWrite__llstream_224((*p).outp, 34);
						}
						break;
						case 97 ... 122:
						case 65 ... 90:
						case 128 ... 255:
						{
							llStreamWrite__llstream_224((*p).outp, 34);
							llStreamWrite__llstream_214((*p).outp, (*p).conc);
							llStreamWrite__llstream_214((*p).outp, (*p).toStr);
							llStreamWrite__llstream_224((*p).outp, 40);
							{
								while (1) {
									NIM_BOOL T96_;
									T96_ = (NIM_BOOL)0;
									T96_ = (j < len);
									if (!(T96_)) goto LA97_;
									T96_ = (((NU8)((*p).x->data[j])) >= ((NU8)(97)) && ((NU8)((*p).x->data[j])) <= ((NU8)(122)) || ((NU8)((*p).x->data[j])) >= ((NU8)(65)) && ((NU8)((*p).x->data[j])) <= ((NU8)(90)) || ((NU8)((*p).x->data[j])) >= ((NU8)(48)) && ((NU8)((*p).x->data[j])) <= ((NU8)(57)) || ((NU8)((*p).x->data[j])) >= ((NU8)(128)) && ((NU8)((*p).x->data[j])) <= ((NU8)(255)) || ((NU8)((*p).x->data[j])) == ((NU8)(46)) || ((NU8)((*p).x->data[j])) == ((NU8)(95)));
									LA97_: ;
									if (!T96_) goto LA95;
									llStreamWrite__llstream_224((*p).outp, (*p).x->data[j]);
									j += ((NI) 1);
								} LA95: ;
							}
							llStreamWrite__llstream_224((*p).outp, 41);
							llStreamWrite__llstream_214((*p).outp, (*p).conc);
							llStreamWrite__llstream_224((*p).outp, 34);
						}
						break;
						default:
						{
							{
								if (!((NU8)((*p).x->data[j]) == (NU8)((*p).subsChar))) goto LA101_;
								llStreamWrite__llstream_224((*p).outp, (*p).subsChar);
								j += ((NI) 1);
							}
							goto LA99_;
							LA101_: ;
							{
								(*p).info.col = ((NI16) (j));
								liMessage__msgs_1118((*p).config, (*p).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 14), ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_49), ((tyEnum_TErrorHandling__q4fXoCN3Xdcm6SS9cUkWkWw) 0), TM__paI0W78l0CRDBLjAHJxn6w_50, NIM_FALSE);
							}
							LA99_: ;
						}
						break;
						}
					}
					goto LA71_;
					LA73_: ;
					{
						llStreamWrite__llstream_224((*p).outp, (*p).x->data[j]);
						j += ((NI) 1);
					}
					LA71_: ;
				}
				break;
				}
			} LA64: ;
		} LA63: ;
		llStreamWrite__llstream_214((*p).outp, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_51));
	}
	LA5_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*, filterTmpl__filter95tmpl_191)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* stdin_0, NimStringDesc* filename, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* call) {
	tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* result;
	tyObject_TTmplParser__hVXV9cC75rOvsaODz9bp1zeg p;
	result = NIM_NIL;
	nimZeroMem((void*)(&p), sizeof(tyObject_TTmplParser__hVXV9cC75rOvsaODz9bp1zeg));
	p.config = conf;
	p.info = newLineInfo__msgs_398(conf, filename, ((NI) 0), ((NI) 0));
	p.outp = llStreamOpen__llstream_30(((NimStringDesc*) NIM_NIL));
	p.inp = stdin_0;
	p.subsChar = charArg__filters_46(conf, call, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_2), ((NI) 1), 36);
	p.nimDirective = charArg__filters_46(conf, call, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_3), ((NI) 2), 35);
	p.emit = strArg__filters_62(conf, call, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_4), ((NI) 3), ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_5));
	p.conc = strArg__filters_62(conf, call, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_6), ((NI) 4), ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_7));
	p.toStr = strArg__filters_62(conf, call, ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_8), ((NI) 5), ((NimStringDesc*) &TM__paI0W78l0CRDBLjAHJxn6w_9));
	p.x = rawNewString(((NI) 120));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = llStreamReadLine__llstream_194(p.inp, (&p.x));
		if (!T3_) goto LA4_;
		p.info.line += ((NI) 1);
	}
	LA4_: ;
	{
		while (1) {
			NIM_BOOL T8_;
			T8_ = (NIM_BOOL)0;
			T8_ = llStreamReadLine__llstream_194(p.inp, (&p.x));
			if (!T8_) goto LA7;
			p.info.line += ((NI) 1);
			parseLine__filter95tmpl_72((&p));
		} LA7: ;
	}
	newLine__filter95tmpl_34((&p));
	result = p.outp;
	llStreamClose__llstream_110(p.inp);
	return result;
}
