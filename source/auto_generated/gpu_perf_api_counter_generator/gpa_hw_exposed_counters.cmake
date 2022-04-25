## Copyright (c) 2022 Advanced Micro Devices, Inc. All rights reserved.
cmake_minimum_required(VERSION 3.5.1)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(HW_EXPOSED_COUNTER_HEADERS
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_exposed_counters_gfx10.h
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_exposed_counters_gfx103.h
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_exposed_counters_gfx8.h
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_exposed_counters_gfx9.h)

set(HW_EXPOSED_COUNTER_SRC
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_exposed_counters_gfx10.cc
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_exposed_counters_gfx103.cc
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_exposed_counters_gfx8.cc
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_exposed_counters_gfx9.cc)

