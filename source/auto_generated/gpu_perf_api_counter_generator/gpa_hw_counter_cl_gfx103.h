//==============================================================================
// Copyright (c) 2010-2022 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief CL counter definitions for GFX103.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_CL_GFX103_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_CL_GFX103_H_

// clang-format off

#include <set>

struct GpaHardwareCounterDesc;
struct GpaCounterGroupDesc;
struct GpaSqCounterGroupDesc;

namespace counter_cl_gfx103
{
    extern GpaHardwareCounterDesc*           kClCounterGroupArrayGfx103[]; ///< Array of hardware counter groups for Cl for Gfx103 family
    extern GpaHardwareCounterDesc*           kClExposedCountersGroupArrayGfx103[]; ///< Array of hardware exposed counter groups for Cl for Gfx103 family
    extern GpaCounterGroupDesc               kHwClGroupsGfx103[]; ///< Array of counter groups for Cl for Gfx103 family
    extern GpaCounterGroupExposedCounterDesc kHwClExposedCountersByGroupGfx103[]; ///< Array of exposed counter groups for Cl for Gfx103 family
    extern GpaPaddedCounterDesc              kClPaddedCounterByGroupGfx103[]; ///< Array of reserved counter for Cl for Gfx103 family
    extern GpaSqCounterGroupDesc             kHwClSqGroupsGfx103[]; ///< Array of SQ groups for Cl for Gfx103 family
    extern unsigned int                       kHwClSqIsolatedGroupsGfx103[]; ///< Array of counter groups isolated from SQ counter groups for Cl for Gfx103 family
    extern const std::set<unsigned int>       kHwClTimestampBlockIdsGfx103; ///< Timestamp block id's for Cl for Gfx103 family
    extern const std::set<unsigned int>       kHwClTimeCounterIndicesGfx103; ///< Timestamp counter indices for Cl for Gfx103 family
    extern const unsigned int                 kHwClGroupCountGfx103; ///< Hardware Group Count for Cl for Gfx103 family
    extern const unsigned int                 kHwClExposedCountersGroupCountGfx103; ///< Whitelist hardware counter Group Count for Cl for Gfx103 family
    extern const unsigned int                 kClPaddedCounterGroupCountGfx103; ///< reserved counter group count for Cl for Gfx103 family
    extern const unsigned int                 kHwClSqGroupCountGfx103; ///< Hardware SQ Group Count for Cl for Gfx103 family
    extern const unsigned int                 kHwClSqIsolatedGroupCountGfx103; ///< Hardware Isolated Group Count for Cl for Gfx103 family

/// @brief If the requested ASIC type is supported, then the global GPU generation block instance counters are updated.
///
/// @param [in] asic_type The ASIC type that is currently in use.
///
/// @return True if the ASIC is matched by this file and block instances are updated, otherwise false.
inline bool OverrideMaxBlockEvents(GDT_HW_ASIC_TYPE asic_type)
{
    UNREFERENCED_PARAMETER(asic_type);


    return true;
}
} //  namespace counter_cl_gfx103

// clang-format on

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_CL_GFX103_H_
