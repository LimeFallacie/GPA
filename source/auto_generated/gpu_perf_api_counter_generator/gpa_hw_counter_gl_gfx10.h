//==============================================================================
// Copyright (c) 2010-2022 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief GL counter definitions for GFX10.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GL_GFX10_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GL_GFX10_H_

// clang-format off

#include <set>

struct GpaHardwareCounterDesc;
struct GpaCounterGroupDesc;
struct GpaSqCounterGroupDesc;

namespace counter_gl_gfx10
{
    extern GpaHardwareCounterDesc*           kGlCounterGroupArrayGfx10[]; ///< Array of hardware counter groups for Gl for Gfx10 family
    extern GpaHardwareCounterDesc*           kGlExposedCountersGroupArrayGfx10[]; ///< Array of hardware exposed counter groups for Gl for Gfx10 family
    extern GpaCounterGroupDesc               kHwGlGroupsGfx10[]; ///< Array of counter groups for Gl for Gfx10 family
    extern GpaCounterGroupExposedCounterDesc kHwGlExposedCountersByGroupGfx10[]; ///< Array of exposed counter groups for Gl for Gfx10 family
    extern GpaPaddedCounterDesc              kGlPaddedCounterByGroupGfx10[]; ///< Array of reserved counter for Gl for Gfx10 family
    extern GpaSqCounterGroupDesc             kHwGlSqGroupsGfx10[]; ///< Array of SQ groups for Gl for Gfx10 family
    extern unsigned int                       kHwGlSqIsolatedGroupsGfx10[]; ///< Array of counter groups isolated from SQ counter groups for Gl for Gfx10 family
    extern const unsigned int                 kHwGlGpuTimeBottomToBottomDurationIndexGfx10; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for Gl for Gfx10 family
    extern const unsigned int                 kHwGlGpuTimeBottomToBottomStartIndexGfx10; ///< Index of time of the previous command reaching bottom of pipe for Gl for Gfx10 family
    extern const unsigned int                 kHwGlGpuTimeBottomToBottomEndIndexGfx10; ///< Index of time of the current command reaching bottom of pipe for Gl for Gfx10 family
    extern const unsigned int                 kHwGlGpuTimeTopToBottomDurationIndexGfx10; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for Gl for Gfx10 family
    extern const unsigned int                 kHwGlGpuTimeTopToBottomStartIndexGfx10; ///< Index of time that the current command reaches the top of pipe for Gl for Gfx10 family
    extern const unsigned int                 kHwGlGpuTimeTopToBottomEndIndexGfx10; ///< Index of time that the current command reaches the bottom of pipe for Gl for Gfx10 family
    extern const std::set<unsigned int>       kHwGlTimestampBlockIdsGfx10; ///< Timestamp block id's for Gl for Gfx10 family
    extern const std::set<unsigned int>       kHwGlTimeCounterIndicesGfx10; ///< Timestamp counter indices for Gl for Gfx10 family
    extern const unsigned int                 kHwGlGroupCountGfx10; ///< Hardware Group Count for Gl for Gfx10 family
    extern const unsigned int                 kHwGlExposedCountersGroupCountGfx10; ///< Whitelist hardware counter Group Count for Gl for Gfx10 family
    extern const unsigned int                 kGlPaddedCounterGroupCountGfx10; ///< reserved counter group count for Gl for Gfx10 family
    extern const unsigned int                 kHwGlSqGroupCountGfx10; ///< Hardware SQ Group Count for Gl for Gfx10 family
    extern const unsigned int                 kHwGlSqIsolatedGroupCountGfx10; ///< Hardware Isolated Group Count for Gl for Gfx10 family

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
} //  namespace counter_gl_gfx10

// clang-format on

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GL_GFX10_H_