//==============================================================================
// Copyright (c) 2015-2022 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for DX12 GFX103 for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#ifndef GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX12_GFX103
#define GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX12_GFX103

#include "gpu_perf_api_unit_tests/counters/gpa_counter_desc.h"

/// Macros for DX12Gfx103 Public counter index
#define GPUTIME_PUBLIC_DX12_GFX103 0
#define EXECUTIONDURATION_PUBLIC_DX12_GFX103 1
#define EXECUTIONSTART_PUBLIC_DX12_GFX103 2
#define EXECUTIONEND_PUBLIC_DX12_GFX103 3
#define GPUBUSY_PUBLIC_DX12_GFX103 4
#define GPUBUSYCYCLES_PUBLIC_DX12_GFX103 5
#define PSBUSY_PUBLIC_DX12_GFX103 6
#define PSBUSYCYCLES_PUBLIC_DX12_GFX103 7
#define PSTIME_PUBLIC_DX12_GFX103 8
#define CSBUSY_PUBLIC_DX12_GFX103 9
#define CSBUSYCYCLES_PUBLIC_DX12_GFX103 10
#define CSTIME_PUBLIC_DX12_GFX103 11
#define PRIMITIVEASSEMBLYBUSY_PUBLIC_DX12_GFX103 12
#define PRIMITIVEASSEMBLYBUSYCYCLES_PUBLIC_DX12_GFX103 13
#define CULLEDPRIMS_PUBLIC_DX12_GFX103 14
#define CLIPPEDPRIMS_PUBLIC_DX12_GFX103 15
#define PASTALLEDONRASTERIZER_PUBLIC_DX12_GFX103 16
#define PASTALLEDONRASTERIZERCYCLES_PUBLIC_DX12_GFX103 17
#define PSPIXELSOUT_PUBLIC_DX12_GFX103 18
#define PSEXPORTSTALLS_PUBLIC_DX12_GFX103 19
#define PSEXPORTSTALLSCYCLES_PUBLIC_DX12_GFX103 20
#define CSTHREADGROUPS_PUBLIC_DX12_GFX103 21
#define CSWAVEFRONTS_PUBLIC_DX12_GFX103 22
#define CSTHREADS_PUBLIC_DX12_GFX103 23
#define CSTHREADGROUPSIZE_PUBLIC_DX12_GFX103 24
#define CSMEMUNITBUSY_PUBLIC_DX12_GFX103 25
#define CSMEMUNITBUSYCYCLES_PUBLIC_DX12_GFX103 26
#define CSMEMUNITSTALLED_PUBLIC_DX12_GFX103 27
#define CSMEMUNITSTALLEDCYCLES_PUBLIC_DX12_GFX103 28
#define CSWRITEUNITSTALLED_PUBLIC_DX12_GFX103 29
#define CSWRITEUNITSTALLEDCYCLES_PUBLIC_DX12_GFX103 30
#define CSGDSINSTS_PUBLIC_DX12_GFX103 31
#define CSLDSINSTS_PUBLIC_DX12_GFX103 32
#define CSALUSTALLEDBYLDS_PUBLIC_DX12_GFX103 33
#define CSALUSTALLEDBYLDSCYCLES_PUBLIC_DX12_GFX103 34
#define CSLDSBANKCONFLICT_PUBLIC_DX12_GFX103 35
#define CSLDSBANKCONFLICTCYCLES_PUBLIC_DX12_GFX103 36
#define TEXUNITBUSY_PUBLIC_DX12_GFX103 37
#define TEXUNITBUSYCYCLES_PUBLIC_DX12_GFX103 38
#define TEXAVEANISOTROPY_PUBLIC_DX12_GFX103 39
#define DEPTHSTENCILTESTBUSY_PUBLIC_DX12_GFX103 40
#define DEPTHSTENCILTESTBUSYCYCLES_PUBLIC_DX12_GFX103 41
#define HIZTILESACCEPTED_PUBLIC_DX12_GFX103 42
#define HIZTILESACCEPTEDCOUNT_PUBLIC_DX12_GFX103 43
#define HIZTILESREJECTEDCOUNT_PUBLIC_DX12_GFX103 44
#define PREZTILESDETAILCULLED_PUBLIC_DX12_GFX103 45
#define PREZTILESDETAILCULLEDCOUNT_PUBLIC_DX12_GFX103 46
#define PREZTILESDETAILSURVIVINGCOUNT_PUBLIC_DX12_GFX103 47
#define HIZQUADSCULLED_PUBLIC_DX12_GFX103 48
#define HIZQUADSCULLEDCOUNT_PUBLIC_DX12_GFX103 49
#define HIZQUADSACCEPTEDCOUNT_PUBLIC_DX12_GFX103 50
#define PREZQUADSCULLED_PUBLIC_DX12_GFX103 51
#define PREZQUADSCULLEDCOUNT_PUBLIC_DX12_GFX103 52
#define PREZQUADSSURVIVINGCOUNT_PUBLIC_DX12_GFX103 53
#define POSTZQUADS_PUBLIC_DX12_GFX103 54
#define POSTZQUADCOUNT_PUBLIC_DX12_GFX103 55
#define PREZSAMPLESPASSING_PUBLIC_DX12_GFX103 56
#define PREZSAMPLESFAILINGS_PUBLIC_DX12_GFX103 57
#define PREZSAMPLESFAILINGZ_PUBLIC_DX12_GFX103 58
#define POSTZSAMPLESPASSING_PUBLIC_DX12_GFX103 59
#define POSTZSAMPLESFAILINGS_PUBLIC_DX12_GFX103 60
#define POSTZSAMPLESFAILINGZ_PUBLIC_DX12_GFX103 61
#define ZUNITSTALLED_PUBLIC_DX12_GFX103 62
#define ZUNITSTALLEDCYCLES_PUBLIC_DX12_GFX103 63
#define DBMEMREAD_PUBLIC_DX12_GFX103 64
#define DBMEMWRITTEN_PUBLIC_DX12_GFX103 65
#define CBMEMREAD_PUBLIC_DX12_GFX103 66
#define CBCOLORANDMASKREAD_PUBLIC_DX12_GFX103 67
#define CBMEMWRITTEN_PUBLIC_DX12_GFX103 68
#define CBCOLORANDMASKWRITTEN_PUBLIC_DX12_GFX103 69
#define CBSLOWPIXELPCT_PUBLIC_DX12_GFX103 70
#define CBSLOWPIXELCOUNT_PUBLIC_DX12_GFX103 71
#define L0CACHEHIT_PUBLIC_DX12_GFX103 72
#define L0CACHEREQUESTCOUNT_PUBLIC_DX12_GFX103 73
#define L0CACHEHITCOUNT_PUBLIC_DX12_GFX103 74
#define L0CACHEMISSCOUNT_PUBLIC_DX12_GFX103 75
#define SCALARCACHEHIT_PUBLIC_DX12_GFX103 76
#define SCALARCACHEREQUESTCOUNT_PUBLIC_DX12_GFX103 77
#define SCALARCACHEHITCOUNT_PUBLIC_DX12_GFX103 78
#define SCALARCACHEMISSCOUNT_PUBLIC_DX12_GFX103 79
#define INSTCACHEHIT_PUBLIC_DX12_GFX103 80
#define INSTCACHEREQUESTCOUNT_PUBLIC_DX12_GFX103 81
#define INSTCACHEHITCOUNT_PUBLIC_DX12_GFX103 82
#define INSTCACHEMISSCOUNT_PUBLIC_DX12_GFX103 83
#define L1CACHEHIT_PUBLIC_DX12_GFX103 84
#define L1CACHEREQUESTCOUNT_PUBLIC_DX12_GFX103 85
#define L1CACHEHITCOUNT_PUBLIC_DX12_GFX103 86
#define L1CACHEMISSCOUNT_PUBLIC_DX12_GFX103 87
#define L2CACHEHIT_PUBLIC_DX12_GFX103 88
#define L2CACHEMISS_PUBLIC_DX12_GFX103 89
#define L2CACHEREQUESTCOUNT_PUBLIC_DX12_GFX103 90
#define L2CACHEHITCOUNT_PUBLIC_DX12_GFX103 91
#define L2CACHEMISSCOUNT_PUBLIC_DX12_GFX103 92
#define FETCHSIZE_PUBLIC_DX12_GFX103 93
#define WRITESIZE_PUBLIC_DX12_GFX103 94
#define MEMUNITBUSY_PUBLIC_DX12_GFX103 95
#define MEMUNITBUSYCYCLES_PUBLIC_DX12_GFX103 96
#define MEMUNITSTALLED_PUBLIC_DX12_GFX103 97
#define MEMUNITSTALLEDCYCLES_PUBLIC_DX12_GFX103 98
#define WRITEUNITSTALLED_PUBLIC_DX12_GFX103 99
#define WRITEUNITSTALLEDCYCLES_PUBLIC_DX12_GFX103 100
#define LOCALVIDMEMBYTES_PUBLIC_DX12_GFX103 101
#define PCIEBYTES_PUBLIC_DX12_GFX103 102
#define RAYTRITESTS_PUBLIC_DX12_GFX103 103
#define RAYBOXTESTS_PUBLIC_DX12_GFX103 104
#define TOTALRAYTESTS_PUBLIC_DX12_GFX103 105
#define RAYTESTSPERWAVE_PUBLIC_DX12_GFX103 106

/// Number of public counters for DX12 GFX103 
const size_t kDx12Gfx103PublicCounterCount = 107;

/// Array of public counters for DX12 GFX103 
extern const GpaCounterDesc kDx12Gfx103PublicCounters[kDx12Gfx103PublicCounterCount];

#endif  // GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX12_GFX103
