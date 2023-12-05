//==============================================================================
// Copyright (c) 2010-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief CL counter definitions for GFX8.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_gfx8.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_cl_gfx8.h"

// This file is autogenerated by the ConvertHWEnums project

// clang-format off

namespace counter_cl_gfx8
{
    using namespace counter_gfx8;

    std::vector<std::vector<GpaHardwareCounterDesc>*> kClCounterGroupArrayGfx8 = {
        &kCb0CountersGfx8,
        &kCb1CountersGfx8,
        &kCb2CountersGfx8,
        &kCb3CountersGfx8,
        &kDb0CountersGfx8,
        &kDb1CountersGfx8,
        &kDb2CountersGfx8,
        &kDb3CountersGfx8,
        &kGrbmCountersGfx8,
        &kPaSu0CountersGfx8,
        &kPaSc0CountersGfx8,
        &kSpi0CountersGfx8,
        &kSq0CountersGfx8,
        &kSqEs0CountersGfx8,
        &kSqGs0CountersGfx8,
        &kSqVs0CountersGfx8,
        &kSqPs0CountersGfx8,
        &kSqLs0CountersGfx8,
        &kSqHs0CountersGfx8,
        &kSqCs0CountersGfx8,
        &kSx0CountersGfx8,
        &kTa0CountersGfx8,
        &kTa1CountersGfx8,
        &kTa2CountersGfx8,
        &kTa3CountersGfx8,
        &kTa4CountersGfx8,
        &kTa5CountersGfx8,
        &kTa6CountersGfx8,
        &kTa7CountersGfx8,
        &kTa8CountersGfx8,
        &kTa9CountersGfx8,
        &kTa10CountersGfx8,
        &kTa11CountersGfx8,
        &kTa12CountersGfx8,
        &kTa13CountersGfx8,
        &kTa14CountersGfx8,
        &kTa15CountersGfx8,
        &kTcc0CountersGfx8,
        &kTcc1CountersGfx8,
        &kTcc2CountersGfx8,
        &kTcc3CountersGfx8,
        &kTcc4CountersGfx8,
        &kTcc5CountersGfx8,
        &kTcc6CountersGfx8,
        &kTcc7CountersGfx8,
        &kTcc8CountersGfx8,
        &kTcc9CountersGfx8,
        &kTcc10CountersGfx8,
        &kTcc11CountersGfx8,
        &kTcc12CountersGfx8,
        &kTcc13CountersGfx8,
        &kTcc14CountersGfx8,
        &kTcc15CountersGfx8,
        &kTcp0CountersGfx8,
        &kTcp1CountersGfx8,
        &kTcp2CountersGfx8,
        &kTcp3CountersGfx8,
        &kTcp4CountersGfx8,
        &kTcp5CountersGfx8,
        &kTcp6CountersGfx8,
        &kTcp7CountersGfx8,
        &kTcp8CountersGfx8,
        &kTcp9CountersGfx8,
        &kTcp10CountersGfx8,
        &kTcp11CountersGfx8,
        &kTcp12CountersGfx8,
        &kTcp13CountersGfx8,
        &kTcp14CountersGfx8,
        &kTcp15CountersGfx8,
        &kVgt0CountersGfx8,
    };


    std::vector<GpaCounterGroupDesc> kHwClGroupsGfx8 = {
        {0, "CB0", 0, 396, 4, 0},
        {1, "CB1", 1, 396, 4, 0},
        {2, "CB2", 2, 396, 4, 0},
        {3, "CB3", 3, 396, 4, 0},
        {4, "CPF", 0, 19, 2, 0},
        {5, "DB0", 0, 257, 4, 0},
        {6, "DB1", 1, 257, 4, 0},
        {7, "DB2", 2, 257, 4, 0},
        {8, "DB3", 3, 257, 4, 0},
        {9, "GRBM", 0, 34, 2, 0},
        {10, "GRBMSE", 0, 15, 4, 0},
        {11, "PA_SU", 0, 153, 4, 0},
        {12, "PA_SC", 0, 397, 8, 0},
        {13, "SPI", 0, 197, 6, 0},
        {14, "SQ", 0, 299, 16, 0},
        {15, "SQ_ES", 0, 299, 16, 0},
        {16, "SQ_GS", 0, 299, 16, 0},
        {17, "SQ_VS", 0, 299, 16, 0},
        {18, "SQ_PS", 0, 299, 16, 0},
        {19, "SQ_LS", 0, 299, 16, 0},
        {20, "SQ_HS", 0, 299, 16, 0},
        {21, "SQ_CS", 0, 299, 16, 0},
        {22, "SX", 0, 34, 4, 0},
        {23, "TA0", 0, 119, 2, 0},
        {24, "TA1", 1, 119, 2, 0},
        {25, "TA2", 2, 119, 2, 0},
        {26, "TA3", 3, 119, 2, 0},
        {27, "TA4", 4, 119, 2, 0},
        {28, "TA5", 5, 119, 2, 0},
        {29, "TA6", 6, 119, 2, 0},
        {30, "TA7", 7, 119, 2, 0},
        {31, "TA8", 8, 119, 2, 0},
        {32, "TA9", 9, 119, 2, 0},
        {33, "TA10", 10, 119, 2, 0},
        {34, "TA11", 11, 119, 2, 0},
        {35, "TA12", 12, 119, 2, 0},
        {36, "TA13", 13, 119, 2, 0},
        {37, "TA14", 14, 119, 2, 0},
        {38, "TA15", 15, 119, 2, 0},
        {39, "TCA0", 0, 35, 4, 0},
        {40, "TCA1", 1, 35, 4, 0},
        {41, "TCC0", 0, 192, 4, 0},
        {42, "TCC1", 1, 192, 4, 0},
        {43, "TCC2", 2, 192, 4, 0},
        {44, "TCC3", 3, 192, 4, 0},
        {45, "TCC4", 4, 192, 4, 0},
        {46, "TCC5", 5, 192, 4, 0},
        {47, "TCC6", 6, 192, 4, 0},
        {48, "TCC7", 7, 192, 4, 0},
        {49, "TCC8", 8, 192, 4, 0},
        {50, "TCC9", 9, 192, 4, 0},
        {51, "TCC10", 10, 192, 4, 0},
        {52, "TCC11", 11, 192, 4, 0},
        {53, "TCC12", 12, 192, 4, 0},
        {54, "TCC13", 13, 192, 4, 0},
        {55, "TCC14", 14, 192, 4, 0},
        {56, "TCC15", 15, 192, 4, 0},
        {57, "TD0", 0, 55, 2, 0},
        {58, "TD1", 1, 55, 2, 0},
        {59, "TD2", 2, 55, 2, 0},
        {60, "TD3", 3, 55, 2, 0},
        {61, "TD4", 4, 55, 2, 0},
        {62, "TD5", 5, 55, 2, 0},
        {63, "TD6", 6, 55, 2, 0},
        {64, "TD7", 7, 55, 2, 0},
        {65, "TD8", 8, 55, 2, 0},
        {66, "TD9", 9, 55, 2, 0},
        {67, "TD10", 10, 55, 2, 0},
        {68, "TD11", 11, 55, 2, 0},
        {69, "TD12", 12, 55, 2, 0},
        {70, "TD13", 13, 55, 2, 0},
        {71, "TD14", 14, 55, 2, 0},
        {72, "TD15", 15, 55, 2, 0},
        {73, "TCP0", 0, 180, 4, 0},
        {74, "TCP1", 1, 180, 4, 0},
        {75, "TCP2", 2, 180, 4, 0},
        {76, "TCP3", 3, 180, 4, 0},
        {77, "TCP4", 4, 180, 4, 0},
        {78, "TCP5", 5, 180, 4, 0},
        {79, "TCP6", 6, 180, 4, 0},
        {80, "TCP7", 7, 180, 4, 0},
        {81, "TCP8", 8, 180, 4, 0},
        {82, "TCP9", 9, 180, 4, 0},
        {83, "TCP10", 10, 180, 4, 0},
        {84, "TCP11", 11, 180, 4, 0},
        {85, "TCP12", 12, 180, 4, 0},
        {86, "TCP13", 13, 180, 4, 0},
        {87, "TCP14", 14, 180, 4, 0},
        {88, "TCP15", 15, 180, 4, 0},
        {89, "GDS", 0, 121, 4, 0},
        {90, "VGT", 0, 147, 4, 0},
        {91, "IA", 0, 24, 4, 0},
        {92, "MC", 0, 33, 4, 0},
        {93, "SRBM", 0, 27, 2, 0},
        {94, "WD", 0, 37, 4, 0},
        {95, "CPG", 0, 48, 2, 0},
        {96, "CPC", 0, 24, 2, 0},
        {97, "GPIN", 0, 5, 5, 0},
    };

    GpaCounterGroupExposedCounterDesc kHwClExposedCountersByGroupGfx8[] = {
        {0, 0},
        {1, 396},
        {2, 792},
        {3, 1188},
        {5, 1603},
        {6, 1860},
        {7, 2117},
        {8, 2374},
        {9, 2631},
        {11, 2680},
        {12, 2833},
        {13, 3230},
        {14, 3427},
        {15, 3726},
        {16, 4025},
        {17, 4324},
        {18, 4623},
        {19, 4922},
        {20, 5221},
        {21, 5520},
        {22, 5819},
        {23, 5853},
        {24, 5972},
        {25, 6091},
        {26, 6210},
        {27, 6329},
        {28, 6448},
        {29, 6567},
        {30, 6686},
        {31, 6805},
        {32, 6924},
        {33, 7043},
        {34, 7162},
        {35, 7281},
        {36, 7400},
        {37, 7519},
        {38, 7638},
        {41, 7827},
        {42, 8019},
        {43, 8211},
        {44, 8403},
        {45, 8595},
        {46, 8787},
        {47, 8979},
        {48, 9171},
        {49, 9363},
        {50, 9555},
        {51, 9747},
        {52, 9939},
        {53, 10131},
        {54, 10323},
        {55, 10515},
        {56, 10707},
        {73, 11779},
        {74, 11959},
        {75, 12139},
        {76, 12319},
        {77, 12499},
        {78, 12679},
        {79, 12859},
        {80, 13039},
        {81, 13219},
        {82, 13399},
        {83, 13579},
        {84, 13759},
        {85, 13939},
        {86, 14119},
        {87, 14299},
        {88, 14479},
        {90, 14780},
    };

    GpaPaddedCounterDesc kClPaddedCounterByGroupGfx8[] = {
    {}
    };

    GpaSqCounterGroupDesc kHwClSqGroupsGfx8[] = {
        {14, 0, kSqAll},
        {15, 0, kSqEs},
        {16, 0, kSqGs},
        {17, 0, kSqVs},
        {18, 0, kSqPs},
        {19, 0, kSqLs},
        {20, 0, kSqHs},
        {21, 0, kSqCs},
    };


    unsigned int kHwClSqIsolatedGroupsGfx8[] = {
        23, // Ta
        24, // Ta
        25, // Ta
        26, // Ta
        27, // Ta
        28, // Ta
        29, // Ta
        30, // Ta
        31, // Ta
        32, // Ta
        33, // Ta
        34, // Ta
        35, // Ta
        36, // Ta
        37, // Ta
        38, // Ta
        39, // Tca
        40, // Tca
        41, // Tcc
        42, // Tcc
        43, // Tcc
        44, // Tcc
        45, // Tcc
        46, // Tcc
        47, // Tcc
        48, // Tcc
        49, // Tcc
        50, // Tcc
        51, // Tcc
        52, // Tcc
        53, // Tcc
        54, // Tcc
        55, // Tcc
        56, // Tcc
        57, // Td
        58, // Td
        59, // Td
        60, // Td
        61, // Td
        62, // Td
        63, // Td
        64, // Td
        65, // Td
        66, // Td
        67, // Td
        68, // Td
        69, // Td
        70, // Td
        71, // Td
        72, // Td
        73, // Tcp
        74, // Tcp
        75, // Tcp
        76, // Tcp
        77, // Tcp
        78, // Tcp
        79, // Tcp
        80, // Tcp
        81, // Tcp
        82, // Tcp
        83, // Tcp
        84, // Tcp
        85, // Tcp
        86, // Tcp
        87, // Tcp
        88, // Tcp
    };

    const std::set<unsigned int> kHwClTimestampBlockIdsGfx8 =       {}; ///< Timestamp block id's for CL for gfx8 family
    const std::set<unsigned int> kHwClTimeCounterIndicesGfx8 =      {}; ///< Timestamp counter indices for CL for gfx8 family
    const unsigned int           kHwClGroupCountGfx8                = static_cast<unsigned int>(kHwClGroupsGfx8.size());
    const unsigned int           kClPaddedCounterGroupCountGfx8 = 0;
    const unsigned int           kHwClSqGroupCountGfx8              = sizeof(kHwClSqGroupsGfx8) / sizeof(GpaSqCounterGroupDesc);
    const unsigned int           kHwClSqIsolatedGroupCountGfx8      = sizeof(kHwClSqIsolatedGroupsGfx8) / sizeof(unsigned int);
} //  namespace counter_cl_gfx8

// clang-format on
