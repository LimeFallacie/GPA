//==============================================================================
// Copyright (c) 2010-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief VK counter definitions for GFX9.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_VK_GFX9_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_VK_GFX9_H_

// clang-format off

#include <vulkan/vulkan.h>
#include <vk_amd_gpa_interface.h>

#include <set>

struct GpaHardwareCounterDesc;
struct GpaCounterGroupDesc;
struct GpaSqCounterGroupDesc;

namespace counter_vk_gfx9
{
    extern std::vector<std::vector<GpaHardwareCounterDesc>*>          kVkCounterGroupArrayGfx9; ///< Array of hardware counter groups for Vk for Gfx9 family
    extern std::vector<GpaCounterGroupDesc>                           kHwVkGroupsGfx9; ///< Array of counter groups for Vk for Gfx9 family
    extern GpaCounterGroupExposedCounterDesc                          kHwVkExposedCountersByGroupGfx9[]; ///< Array of exposed counter groups for Vk for Gfx9 family
    extern GpaPaddedCounterDesc                                       kVkPaddedCounterByGroupGfx9[]; ///< Array of reserved counter for Vk for Gfx9 family
    extern GpaSqCounterGroupDesc                                      kHwVkSqGroupsGfx9[]; ///< Array of SQ groups for Vk for Gfx9 family
    extern unsigned int                                               kHwVkSqIsolatedGroupsGfx9[]; ///< Array of counter groups isolated from SQ counter groups for Vk for Gfx9 family
    extern VkGpaPerfBlockAMD                                          kHwVkDriverEnumGfx9[]; ///< Array of driver enum values per group for Vk for Gfx9 family
    extern const unsigned int                                         kHwVkGpuTimeBottomToBottomDurationIndexGfx9; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for Vk for Gfx9 family
    extern const unsigned int                                         kHwVkGpuTimeBottomToBottomStartIndexGfx9; ///< Index of time of the previous command reaching bottom of pipe for Vk for Gfx9 family
    extern const unsigned int                                         kHwVkGpuTimeBottomToBottomEndIndexGfx9; ///< Index of time of the current command reaching bottom of pipe for Vk for Gfx9 family
    extern const unsigned int                                         kHwVkGpuTimeTopToBottomDurationIndexGfx9; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for Vk for Gfx9 family
    extern const unsigned int                                         kHwVkGpuTimeTopToBottomStartIndexGfx9; ///< Index of time that the current command reaches the top of pipe for Vk for Gfx9 family
    extern const unsigned int                                         kHwVkGpuTimeTopToBottomEndIndexGfx9; ///< Index of time that the current command reaches the bottom of pipe for Vk for Gfx9 family
    extern const std::set<unsigned int>                               kHwVkTimestampBlockIdsGfx9; ///< Timestamp block id's for Vk for Gfx9 family
    extern const std::set<unsigned int>                               kHwVkTimeCounterIndicesGfx9; ///< Timestamp counter indices for Vk for Gfx9 family
    extern const unsigned int                                         kHwVkGroupCountGfx9; ///< Hardware Group Count for Vk for Gfx9 family
    extern const unsigned int                                         kVkPaddedCounterGroupCountGfx9; ///< reserved counter group count for Vk for Gfx9 family
    extern const unsigned int                                         kHwVkSqGroupCountGfx9; ///< Hardware SQ Group Count for Vk for Gfx9 family
    extern const unsigned int                                         kHwVkSqIsolatedGroupCountGfx9; ///< Hardware Isolated Group Count for Vk for Gfx9 family

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
} //  namespace counter_vk_gfx9

// clang-format on

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_VK_GFX9_H_
