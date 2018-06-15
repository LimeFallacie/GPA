//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  GL internal counter definitions for GFX9
//==============================================================================

#include "GPAInternalCountersGfx9.h"
#include "InternalCountersGLGfx9.h"

// This file is autogenerated by the ConvertHWEnums project

GPA_HardwareCounterDesc* GLCounterGroupArrayGfx9[] =
{
    CB0countersGfx9,
    CB1countersGfx9,
    CB2countersGfx9,
    CB3countersGfx9,
    CPFcountersGfx9,
    DB0countersGfx9,
    DB1countersGfx9,
    DB2countersGfx9,
    DB3countersGfx9,
    GRBMcountersGfx9,
    GRBMSE0countersGfx9,
    PA_SU0countersGfx9,
    PA_SC0countersGfx9,
    SPI0countersGfx9,
    SQ0countersGfx9,
    SQ_ES0countersGfx9,
    SQ_GS0countersGfx9,
    SQ_VS0countersGfx9,
    SQ_PS0countersGfx9,
    SQ_LS0countersGfx9,
    SQ_HS0countersGfx9,
    SQ_CS0countersGfx9,
    SX0countersGfx9,
    TA0countersGfx9,
    TA1countersGfx9,
    TA2countersGfx9,
    TA3countersGfx9,
    TA4countersGfx9,
    TA5countersGfx9,
    TA6countersGfx9,
    TA7countersGfx9,
    TA8countersGfx9,
    TA9countersGfx9,
    TA10countersGfx9,
    TA11countersGfx9,
    TA12countersGfx9,
    TA13countersGfx9,
    TA14countersGfx9,
    TA15countersGfx9,
    TCA0countersGfx9,
    TCA1countersGfx9,
    TCC0countersGfx9,
    TCC1countersGfx9,
    TCC2countersGfx9,
    TCC3countersGfx9,
    TCC4countersGfx9,
    TCC5countersGfx9,
    TCC6countersGfx9,
    TCC7countersGfx9,
    TCC8countersGfx9,
    TCC9countersGfx9,
    TCC10countersGfx9,
    TCC11countersGfx9,
    TCC12countersGfx9,
    TCC13countersGfx9,
    TCC14countersGfx9,
    TCC15countersGfx9,
    TD0countersGfx9,
    TD1countersGfx9,
    TD2countersGfx9,
    TD3countersGfx9,
    TD4countersGfx9,
    TD5countersGfx9,
    TD6countersGfx9,
    TD7countersGfx9,
    TD8countersGfx9,
    TD9countersGfx9,
    TD10countersGfx9,
    TD11countersGfx9,
    TD12countersGfx9,
    TD13countersGfx9,
    TD14countersGfx9,
    TD15countersGfx9,
    TCP0countersGfx9,
    TCP1countersGfx9,
    TCP2countersGfx9,
    TCP3countersGfx9,
    TCP4countersGfx9,
    TCP5countersGfx9,
    TCP6countersGfx9,
    TCP7countersGfx9,
    TCP8countersGfx9,
    TCP9countersGfx9,
    TCP10countersGfx9,
    TCP11countersGfx9,
    TCP12countersGfx9,
    TCP13countersGfx9,
    TCP14countersGfx9,
    TCP15countersGfx9,
    GDScountersGfx9,
    VGT0countersGfx9,
    IA0countersGfx9,
    WDcountersGfx9,
    CPGcountersGfx9,
    CPCcountersGfx9,
    GPINcountersGfx9,
    GPUTimecountersGfx9,
};

GPA_CounterGroupDesc HWGLGroupsGfx9[] =
{
    {0, "CB0", 0, 438, 4},
    {1, "CB1", 1, 438, 4},
    {2, "CB2", 2, 438, 4},
    {3, "CB3", 3, 438, 4},
    {4, "CPF", 0, 32, 2},
    {5, "DB0", 0, 328, 4},
    {6, "DB1", 1, 328, 4},
    {7, "DB2", 2, 328, 4},
    {8, "DB3", 3, 328, 4},
    {9, "GRBM", 0, 38, 2},
    {10, "GRBMSE", 0, 16, 4},
    {11, "PA_SU", 0, 292, 4},
    {12, "PA_SC", 0, 491, 8},
    {13, "SPI", 0, 196, 6},
    {14, "SQ", 0, 374, 16},
    {15, "SQ_ES", 0, 374, 16},
    {16, "SQ_GS", 0, 374, 16},
    {17, "SQ_VS", 0, 374, 16},
    {18, "SQ_PS", 0, 374, 16},
    {19, "SQ_LS", 0, 374, 16},
    {20, "SQ_HS", 0, 374, 16},
    {21, "SQ_CS", 0, 374, 16},
    {22, "SX", 0, 208, 4},
    {23, "TA0", 0, 119, 2},
    {24, "TA1", 1, 119, 2},
    {25, "TA2", 2, 119, 2},
    {26, "TA3", 3, 119, 2},
    {27, "TA4", 4, 119, 2},
    {28, "TA5", 5, 119, 2},
    {29, "TA6", 6, 119, 2},
    {30, "TA7", 7, 119, 2},
    {31, "TA8", 8, 119, 2},
    {32, "TA9", 9, 119, 2},
    {33, "TA10", 10, 119, 2},
    {34, "TA11", 11, 119, 2},
    {35, "TA12", 12, 119, 2},
    {36, "TA13", 13, 119, 2},
    {37, "TA14", 14, 119, 2},
    {38, "TA15", 15, 119, 2},
    {39, "TCA0", 0, 35, 4},
    {40, "TCA1", 1, 35, 4},
    {41, "TCC0", 0, 256, 4},
    {42, "TCC1", 1, 256, 4},
    {43, "TCC2", 2, 256, 4},
    {44, "TCC3", 3, 256, 4},
    {45, "TCC4", 4, 256, 4},
    {46, "TCC5", 5, 256, 4},
    {47, "TCC6", 6, 256, 4},
    {48, "TCC7", 7, 256, 4},
    {49, "TCC8", 8, 256, 4},
    {50, "TCC9", 9, 256, 4},
    {51, "TCC10", 10, 256, 4},
    {52, "TCC11", 11, 256, 4},
    {53, "TCC12", 12, 256, 4},
    {54, "TCC13", 13, 256, 4},
    {55, "TCC14", 14, 256, 4},
    {56, "TCC15", 15, 256, 4},
    {57, "TD0", 0, 57, 2},
    {58, "TD1", 1, 57, 2},
    {59, "TD2", 2, 57, 2},
    {60, "TD3", 3, 57, 2},
    {61, "TD4", 4, 57, 2},
    {62, "TD5", 5, 57, 2},
    {63, "TD6", 6, 57, 2},
    {64, "TD7", 7, 57, 2},
    {65, "TD8", 8, 57, 2},
    {66, "TD9", 9, 57, 2},
    {67, "TD10", 10, 57, 2},
    {68, "TD11", 11, 57, 2},
    {69, "TD12", 12, 57, 2},
    {70, "TD13", 13, 57, 2},
    {71, "TD14", 14, 57, 2},
    {72, "TD15", 15, 57, 2},
    {73, "TCP0", 0, 85, 4},
    {74, "TCP1", 1, 85, 4},
    {75, "TCP2", 2, 85, 4},
    {76, "TCP3", 3, 85, 4},
    {77, "TCP4", 4, 85, 4},
    {78, "TCP5", 5, 85, 4},
    {79, "TCP6", 6, 85, 4},
    {80, "TCP7", 7, 85, 4},
    {81, "TCP8", 8, 85, 4},
    {82, "TCP9", 9, 85, 4},
    {83, "TCP10", 10, 85, 4},
    {84, "TCP11", 11, 85, 4},
    {85, "TCP12", 12, 85, 4},
    {86, "TCP13", 13, 85, 4},
    {87, "TCP14", 14, 85, 4},
    {88, "TCP15", 15, 85, 4},
    {89, "GDS", 0, 121, 4},
    {90, "VGT", 0, 148, 4},
    {91, "IA", 0, 32, 4},
    {92, "WD", 0, 58, 4},
    {93, "CPG", 0, 60, 2},
    {94, "CPC", 0, 35, 2},
    {95, "GPIN", 0, 5, 5},
    {96, "GPUTime", 0, 2, 2},
};

GPA_SQCounterGroupDesc HWGLSQGroupsGfx9[] =
{
    {14, 0, SQ_ALL},
    {15, 0, SQ_ES},
    {16, 0, SQ_GS},
    {17, 0, SQ_VS},
    {18, 0, SQ_PS},
    {19, 0, SQ_LS},
    {20, 0, SQ_HS},
    {21, 0, SQ_CS},
};


unsigned int HWGLSQIsolatedGroupsGfx9[] =
{
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

const unsigned int HWGLGPUTimeBottomToBottomIndexGfx9 = 16130;
const unsigned int HWGLGPUTimeTopToBottomIndexGfx9 = 16131;
const std::set<unsigned int> HWGLTimestampBlockIdsGfx9 = { 96 }; ///< Timestamp block id's for GL for Gfx9 family
const std::set<unsigned int> HWGLTimeCounterIndicesGfx9 = { 16130, 16131 }; ///< Timestamp counter indices for GL for Gfx9 family
const unsigned int HWGLGroupCountGfx9 = sizeof(HWGLGroupsGfx9) / sizeof(GPA_CounterGroupDesc);
const unsigned int HWGLSQGroupCountGfx9 = sizeof(HWGLSQGroupsGfx9) / sizeof(GPA_SQCounterGroupDesc);
const unsigned int HWGLSQIsolatedGroupCountGfx9 = sizeof(HWGLSQIsolatedGroupsGfx9) / sizeof(unsigned int);
