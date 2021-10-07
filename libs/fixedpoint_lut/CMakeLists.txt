add_library(pac-fixedpoint_lut INTERFACE)

target_sources(pac-fixedpoint_lut INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FixedPoint_LUT/src/LUT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FixedPoint_LUT/src/LUT.h"
  "${CMAKE_CURRENT_LIST_DIR}/FixedPoint_LUT/src/LUT_types.h"
)

target_include_directories(pac-fixedpoint_lut INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FixedPoint_LUT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fixedpoint_lut INTERFACE
    arduino-compat
)
