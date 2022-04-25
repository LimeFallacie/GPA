//==============================================================================
// Copyright (c) 2015-2022 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for DX12 GFX10 for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#ifndef GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX12_GFX10
#define GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX12_GFX10

#include "gpu_perf_api_unit_tests/counters/gpa_counter_desc.h"

/// Macros for DX12Gfx10 Public counter index
#define GPUTIME_PUBLIC_DX12_GFX10 0
#define EXECUTIONDURATION_PUBLIC_DX12_GFX10 1
#define EXECUTIONSTART_PUBLIC_DX12_GFX10 2
#define EXECUTIONEND_PUBLIC_DX12_GFX10 3
#define GPUBUSY_PUBLIC_DX12_GFX10 4
#define GPUBUSYCYCLES_PUBLIC_DX12_GFX10 5
#define VSGSBUSY_PUBLIC_DX12_GFX10 6
#define VSGSBUSYCYCLES_PUBLIC_DX12_GFX10 7
#define VSGSTIME_PUBLIC_DX12_GFX10 8
#define PRETESSELLATIONBUSY_PUBLIC_DX12_GFX10 9
#define PRETESSELLATIONBUSYCYCLES_PUBLIC_DX12_GFX10 10
#define PRETESSELLATIONTIME_PUBLIC_DX12_GFX10 11
#define POSTTESSELLATIONBUSY_PUBLIC_DX12_GFX10 12
#define POSTTESSELLATIONBUSYCYCLES_PUBLIC_DX12_GFX10 13
#define POSTTESSELLATIONTIME_PUBLIC_DX12_GFX10 14
#define PSBUSY_PUBLIC_DX12_GFX10 15
#define PSBUSYCYCLES_PUBLIC_DX12_GFX10 16
#define PSTIME_PUBLIC_DX12_GFX10 17
#define CSBUSY_PUBLIC_DX12_GFX10 18
#define CSBUSYCYCLES_PUBLIC_DX12_GFX10 19
#define CSTIME_PUBLIC_DX12_GFX10 20
#define VSGSVALUINSTCOUNT_PUBLIC_DX12_GFX10 21
#define VSGSSALUINSTCOUNT_PUBLIC_DX12_GFX10 22
#define VSGSVALUBUSY_PUBLIC_DX12_GFX10 23
#define VSGSVALUBUSYCYCLES_PUBLIC_DX12_GFX10 24
#define VSGSSALUBUSY_PUBLIC_DX12_GFX10 25
#define VSGSSALUBUSYCYCLES_PUBLIC_DX12_GFX10 26
#define PRETESSVALUINSTCOUNT_PUBLIC_DX12_GFX10 27
#define PRETESSSALUINSTCOUNT_PUBLIC_DX12_GFX10 28
#define PRETESSVALUBUSY_PUBLIC_DX12_GFX10 29
#define PRETESSVALUBUSYCYCLES_PUBLIC_DX12_GFX10 30
#define PRETESSSALUBUSY_PUBLIC_DX12_GFX10 31
#define PRETESSSALUBUSYCYCLES_PUBLIC_DX12_GFX10 32
#define POSTTESSVALUINSTCOUNT_PUBLIC_DX12_GFX10 33
#define POSTTESSSALUINSTCOUNT_PUBLIC_DX12_GFX10 34
#define POSTTESSVALUBUSY_PUBLIC_DX12_GFX10 35
#define POSTTESSVALUBUSYCYCLES_PUBLIC_DX12_GFX10 36
#define POSTTESSSALUBUSY_PUBLIC_DX12_GFX10 37
#define POSTTESSSALUBUSYCYCLES_PUBLIC_DX12_GFX10 38
#define PRIMITIVEASSEMBLYBUSY_PUBLIC_DX12_GFX10 39
#define PRIMITIVEASSEMBLYBUSYCYCLES_PUBLIC_DX12_GFX10 40
#define CULLEDPRIMS_PUBLIC_DX12_GFX10 41
#define CLIPPEDPRIMS_PUBLIC_DX12_GFX10 42
#define PASTALLEDONRASTERIZER_PUBLIC_DX12_GFX10 43
#define PASTALLEDONRASTERIZERCYCLES_PUBLIC_DX12_GFX10 44
#define PSPIXELSOUT_PUBLIC_DX12_GFX10 45
#define PSEXPORTSTALLS_PUBLIC_DX12_GFX10 46
#define PSEXPORTSTALLSCYCLES_PUBLIC_DX12_GFX10 47
#define PSVALUINSTCOUNT_PUBLIC_DX12_GFX10 48
#define PSSALUINSTCOUNT_PUBLIC_DX12_GFX10 49
#define PSVALUBUSY_PUBLIC_DX12_GFX10 50
#define PSVALUBUSYCYCLES_PUBLIC_DX12_GFX10 51
#define PSSALUBUSY_PUBLIC_DX12_GFX10 52
#define PSSALUBUSYCYCLES_PUBLIC_DX12_GFX10 53
#define CSTHREADGROUPS_PUBLIC_DX12_GFX10 54
#define CSWAVEFRONTS_PUBLIC_DX12_GFX10 55
#define CSTHREADS_PUBLIC_DX12_GFX10 56
#define CSTHREADGROUPSIZE_PUBLIC_DX12_GFX10 57
#define CSVALUINSTS_PUBLIC_DX12_GFX10 58
#define CSVALUUTILIZATION_PUBLIC_DX12_GFX10 59
#define CSSALUINSTS_PUBLIC_DX12_GFX10 60
#define CSVFETCHINSTS_PUBLIC_DX12_GFX10 61
#define CSSFETCHINSTS_PUBLIC_DX12_GFX10 62
#define CSVWRITEINSTS_PUBLIC_DX12_GFX10 63
#define CSVALUBUSY_PUBLIC_DX12_GFX10 64
#define CSVALUBUSYCYCLES_PUBLIC_DX12_GFX10 65
#define CSSALUBUSY_PUBLIC_DX12_GFX10 66
#define CSSALUBUSYCYCLES_PUBLIC_DX12_GFX10 67
#define CSMEMUNITBUSY_PUBLIC_DX12_GFX10 68
#define CSMEMUNITBUSYCYCLES_PUBLIC_DX12_GFX10 69
#define CSMEMUNITSTALLED_PUBLIC_DX12_GFX10 70
#define CSMEMUNITSTALLEDCYCLES_PUBLIC_DX12_GFX10 71
#define CSWRITEUNITSTALLED_PUBLIC_DX12_GFX10 72
#define CSWRITEUNITSTALLEDCYCLES_PUBLIC_DX12_GFX10 73
#define CSGDSINSTS_PUBLIC_DX12_GFX10 74
#define CSLDSINSTS_PUBLIC_DX12_GFX10 75
#define CSALUSTALLEDBYLDS_PUBLIC_DX12_GFX10 76
#define CSALUSTALLEDBYLDSCYCLES_PUBLIC_DX12_GFX10 77
#define CSLDSBANKCONFLICT_PUBLIC_DX12_GFX10 78
#define CSLDSBANKCONFLICTCYCLES_PUBLIC_DX12_GFX10 79
#define TEXUNITBUSY_PUBLIC_DX12_GFX10 80
#define TEXUNITBUSYCYCLES_PUBLIC_DX12_GFX10 81
#define TEXTRIFILTERINGPCT_PUBLIC_DX12_GFX10 82
#define TEXTRIFILTERINGCOUNT_PUBLIC_DX12_GFX10 83
#define NOTEXTRIFILTERINGCOUNT_PUBLIC_DX12_GFX10 84
#define TEXVOLFILTERINGPCT_PUBLIC_DX12_GFX10 85
#define TEXVOLFILTERINGCOUNT_PUBLIC_DX12_GFX10 86
#define NOTEXVOLFILTERINGCOUNT_PUBLIC_DX12_GFX10 87
#define TEXAVEANISOTROPY_PUBLIC_DX12_GFX10 88
#define DEPTHSTENCILTESTBUSY_PUBLIC_DX12_GFX10 89
#define DEPTHSTENCILTESTBUSYCYCLES_PUBLIC_DX12_GFX10 90
#define HIZTILESACCEPTED_PUBLIC_DX12_GFX10 91
#define HIZTILESACCEPTEDCOUNT_PUBLIC_DX12_GFX10 92
#define HIZTILESREJECTEDCOUNT_PUBLIC_DX12_GFX10 93
#define PREZTILESDETAILCULLED_PUBLIC_DX12_GFX10 94
#define PREZTILESDETAILCULLEDCOUNT_PUBLIC_DX12_GFX10 95
#define PREZTILESDETAILSURVIVINGCOUNT_PUBLIC_DX12_GFX10 96
#define HIZQUADSCULLED_PUBLIC_DX12_GFX10 97
#define HIZQUADSCULLEDCOUNT_PUBLIC_DX12_GFX10 98
#define HIZQUADSACCEPTEDCOUNT_PUBLIC_DX12_GFX10 99
#define PREZQUADSCULLED_PUBLIC_DX12_GFX10 100
#define PREZQUADSCULLEDCOUNT_PUBLIC_DX12_GFX10 101
#define PREZQUADSSURVIVINGCOUNT_PUBLIC_DX12_GFX10 102
#define POSTZQUADS_PUBLIC_DX12_GFX10 103
#define POSTZQUADCOUNT_PUBLIC_DX12_GFX10 104
#define PREZSAMPLESPASSING_PUBLIC_DX12_GFX10 105
#define PREZSAMPLESFAILINGS_PUBLIC_DX12_GFX10 106
#define PREZSAMPLESFAILINGZ_PUBLIC_DX12_GFX10 107
#define POSTZSAMPLESPASSING_PUBLIC_DX12_GFX10 108
#define POSTZSAMPLESFAILINGS_PUBLIC_DX12_GFX10 109
#define POSTZSAMPLESFAILINGZ_PUBLIC_DX12_GFX10 110
#define ZUNITSTALLED_PUBLIC_DX12_GFX10 111
#define ZUNITSTALLEDCYCLES_PUBLIC_DX12_GFX10 112
#define DBMEMREAD_PUBLIC_DX12_GFX10 113
#define DBMEMWRITTEN_PUBLIC_DX12_GFX10 114
#define CBMEMREAD_PUBLIC_DX12_GFX10 115
#define CBCOLORANDMASKREAD_PUBLIC_DX12_GFX10 116
#define CBMEMWRITTEN_PUBLIC_DX12_GFX10 117
#define CBCOLORANDMASKWRITTEN_PUBLIC_DX12_GFX10 118
#define CBSLOWPIXELPCT_PUBLIC_DX12_GFX10 119
#define CBSLOWPIXELCOUNT_PUBLIC_DX12_GFX10 120
#define L0CACHEHIT_PUBLIC_DX12_GFX10 121
#define L0CACHEREQUESTCOUNT_PUBLIC_DX12_GFX10 122
#define L0CACHEHITCOUNT_PUBLIC_DX12_GFX10 123
#define L0CACHEMISSCOUNT_PUBLIC_DX12_GFX10 124
#define SCALARCACHEHIT_PUBLIC_DX12_GFX10 125
#define SCALARCACHEREQUESTCOUNT_PUBLIC_DX12_GFX10 126
#define SCALARCACHEHITCOUNT_PUBLIC_DX12_GFX10 127
#define SCALARCACHEMISSCOUNT_PUBLIC_DX12_GFX10 128
#define INSTCACHEHIT_PUBLIC_DX12_GFX10 129
#define INSTCACHEREQUESTCOUNT_PUBLIC_DX12_GFX10 130
#define INSTCACHEHITCOUNT_PUBLIC_DX12_GFX10 131
#define INSTCACHEMISSCOUNT_PUBLIC_DX12_GFX10 132
#define L1CACHEHIT_PUBLIC_DX12_GFX10 133
#define L1CACHEREQUESTCOUNT_PUBLIC_DX12_GFX10 134
#define L1CACHEHITCOUNT_PUBLIC_DX12_GFX10 135
#define L1CACHEMISSCOUNT_PUBLIC_DX12_GFX10 136
#define L2CACHEHIT_PUBLIC_DX12_GFX10 137
#define L2CACHEMISS_PUBLIC_DX12_GFX10 138
#define L2CACHEREQUESTCOUNT_PUBLIC_DX12_GFX10 139
#define L2CACHEHITCOUNT_PUBLIC_DX12_GFX10 140
#define L2CACHEMISSCOUNT_PUBLIC_DX12_GFX10 141
#define FETCHSIZE_PUBLIC_DX12_GFX10 142
#define WRITESIZE_PUBLIC_DX12_GFX10 143
#define MEMUNITBUSY_PUBLIC_DX12_GFX10 144
#define MEMUNITBUSYCYCLES_PUBLIC_DX12_GFX10 145
#define MEMUNITSTALLED_PUBLIC_DX12_GFX10 146
#define MEMUNITSTALLEDCYCLES_PUBLIC_DX12_GFX10 147
#define WRITEUNITSTALLED_PUBLIC_DX12_GFX10 148
#define WRITEUNITSTALLEDCYCLES_PUBLIC_DX12_GFX10 149
#define LOCALVIDMEMBYTES_PUBLIC_DX12_GFX10 150
#define PCIEBYTES_PUBLIC_DX12_GFX10 151

/// Number of public counters for DX12 GFX10 
const size_t kDx12Gfx10PublicCounterCount = 152;

/// Array of public counters for DX12 GFX10 
extern const GpaCounterDesc kDx12Gfx10PublicCounters[kDx12Gfx10PublicCounterCount];

#endif  // GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX12_GFX10
