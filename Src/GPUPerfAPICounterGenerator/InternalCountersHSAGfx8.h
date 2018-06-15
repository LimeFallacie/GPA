//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  HSA internal counter definitions for GFX8
//==============================================================================

#ifndef _GPA_INTERNAL_COUNTERS_HSA_GFX8_H_
#define _GPA_INTERNAL_COUNTERS_HSA_GFX8_H_
// This file is autogenerated by the ConvertHWEnums project

extern GPA_HardwareCounterDesc* HSACounterGroupArrayGfx8[]; ///< Array of hardware counter groups for HSA for Gfx8 family
extern GPA_CounterGroupDesc HWHSAGroupsGfx8[]; ///< Array of counter groups for HSA for Gfx8 family
extern GPA_SQCounterGroupDesc HWHSASQGroupsGfx8[]; ///< Array of SQ groups for HSA for Gfx8 family
extern unsigned int HWHSASQIsolatedGroupsGfx8[]; ///< Array of counter groups isolated from SQ counter groups for HSA for Gfx8 family
extern const std::set<unsigned int> HWHSATimestampBlockIdsGfx8; ///< Timestamp block id's for HSA for Gfx8 family
extern const std::set<unsigned int> HWHSATimeCounterIndicesGfx8; ///< Timestamp counter indices for HSA for Gfx8 family
extern const unsigned int HWHSAGroupCountGfx8; ///< Hardware Group Count for HSA for Gfx8 family
extern const unsigned int HWHSASQGroupCountGfx8; ///< Hardware SQ Group Count for HSA for Gfx8 family
extern const unsigned int HWHSASQIsolatedGroupCountGfx8; ///< Hardware Isolated Group Count for HSA for Gfx8 family

#endif // _GPA_INTERNAL_COUNTERS_HSA_GFX8_H_
