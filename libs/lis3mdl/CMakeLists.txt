add_library(pac-lis3mdl INTERFACE)

target_sources(pac-lis3mdl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/lis3mdl-arduino/LIS3MDL.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lis3mdl-arduino/LIS3MDL.h"
)

target_include_directories(pac-lis3mdl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/lis3mdl-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lis3mdl INTERFACE
    arduino-compat
)
