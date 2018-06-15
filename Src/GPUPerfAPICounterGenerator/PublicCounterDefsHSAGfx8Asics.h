//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief PublicCounterDefinitions ASIC file for HSAGFX8
//==============================================================================

#ifndef _PUBLIC_COUNTER_DEFS_HSAGFX8_ASICS_H_
#define _PUBLIC_COUNTER_DEFS_HSAGFX8_ASICS_H_

//*** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#include "GPADerivedCounters.h"

#include "PublicCounterDefsHSAGfx8_Baffin.h"
#include "PublicCounterDefsHSAGfx8_Carrizo.h"
#include "PublicCounterDefsHSAGfx8_Ellesmere.h"
#include "PublicCounterDefsHSAGfx8_Fiji.h"
#include "PublicCounterDefsHSAGfx8_Iceland.h"
#include "PublicCounterDefsHSAGfx8_Tonga.h"

namespace HSAGfx8Asics
{

/// Updates default GPU generation derived counters with ASIC specific derived counters if available.
/// \param desiredGeneration Hardware generation currently in use.
/// \param asicType The ASIC type that is currently in use.
/// \param counters Returned set of derived counters, if available.
/// \return True if the ASIC matched one available, and counters was updated.
inline void UpdateAsicSpecificCounters(GDT_HW_GENERATION desiredGeneration, GDT_HW_ASIC_TYPE asicType, GPA_DerivedCounters& counters)
{

    if (HSAGfx8_Baffin::UpdateAsicSpecificCounters(desiredGeneration, asicType, counters))
    {
        return;
    }

    if (HSAGfx8_Carrizo::UpdateAsicSpecificCounters(desiredGeneration, asicType, counters))
    {
        return;
    }

    if (HSAGfx8_Ellesmere::UpdateAsicSpecificCounters(desiredGeneration, asicType, counters))
    {
        return;
    }

    if (HSAGfx8_Fiji::UpdateAsicSpecificCounters(desiredGeneration, asicType, counters))
    {
        return;
    }

    if (HSAGfx8_Iceland::UpdateAsicSpecificCounters(desiredGeneration, asicType, counters))
    {
        return;
    }

    if (HSAGfx8_Tonga::UpdateAsicSpecificCounters(desiredGeneration, asicType, counters))
    {
        return;
    }

}

} // HSAGfx8Asics

#endif // _PUBLIC_COUNTER_DEFS_HSAGFX8_ASICS_H_
