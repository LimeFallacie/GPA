//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief PublicCounterDefinitions for HSAGFX9_GFX906
//==============================================================================

#ifndef _PUBLIC_COUNTER_DEFS_HSAGFX9_GFX906_H_
#define _PUBLIC_COUNTER_DEFS_HSAGFX9_GFX906_H_

//*** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#include "GPADerivedCounters.h"

namespace HSAGfx9_Gfx906
{

/// Updates default GPU generation public derived counters with ASIC specific versions if available.
/// \param desiredGeneration Hardware generation currently in use.
/// \param asicType The ASIC type that is currently in use.
/// \param c Derived counters instance.
/// \return True if the ASIC matched one available, and derivedCounters was updated.
extern bool UpdatePublicAsicSpecificCounters(GDT_HW_GENERATION desiredGeneration, GDT_HW_ASIC_TYPE asicType, GPA_DerivedCounters& c);

} //HSAGfx9_Gfx906

#endif // _PUBLIC_COUNTER_DEFS_HSAGFX9_GFX906_H_
