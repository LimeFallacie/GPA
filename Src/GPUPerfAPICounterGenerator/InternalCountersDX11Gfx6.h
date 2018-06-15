//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  DX11 internal counter definitions for GFX6
//==============================================================================

#ifndef _GPA_INTERNAL_COUNTERS_DX11_GFX6_H_
#define _GPA_INTERNAL_COUNTERS_DX11_GFX6_H_
// This file is autogenerated by the ConvertHWEnums project

#include <windows.h>
#include <AmdDxExtPerfProfile.h>

extern GPA_HardwareCounterDesc* DX11CounterGroupArrayGfx6[]; ///< Array of hardware counter groups for DX11 for Gfx6 family
extern GPA_CounterGroupDesc HWDX11GroupsGfx6[]; ///< Array of counter groups for DX11 for Gfx6 family
extern GPA_SQCounterGroupDesc HWDX11SQGroupsGfx6[]; ///< Array of SQ groups for DX11 for Gfx6 family
extern unsigned int HWDX11SQIsolatedGroupsGfx6[]; ///< Array of counter groups isolated from SQ counter groups for DX11 for Gfx6 family
extern PE_BLOCK_ID HWDX11DriverEnumGfx6[]; ///< Array of driver enum values per group for DX11 for Gfx6 family
extern const unsigned int HWDX11GPUTimeBottomToBottomIndexGfx6; ///< Index of EOP to EOP counter for DX11 for Gfx6 family
extern const unsigned int HWDX11GPUTimeTopToBottomIndexGfx6; ///< Index of TOP to EOP counter for DX11 for Gfx6 family
extern const std::set<unsigned int> HWDX11TimestampBlockIdsGfx6; ///< Timestamp block id's for DX11 for Gfx6 family
extern const std::set<unsigned int> HWDX11TimeCounterIndicesGfx6; ///< Timestamp counter indices for DX11 for Gfx6 family
extern const unsigned int HWDX11GroupCountGfx6; ///< Hardware Group Count for DX11 for Gfx6 family
extern const unsigned int HWDX11SQGroupCountGfx6; ///< Hardware SQ Group Count for DX11 for Gfx6 family
extern const unsigned int HWDX11SQIsolatedGroupCountGfx6; ///< Hardware Isolated Group Count for DX11 for Gfx6 family

#endif // _GPA_INTERNAL_COUNTERS_DX11_GFX6_H_
