add_library(pac-sodaq_lis3de INTERFACE)

target_sources(pac-sodaq_lis3de INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_LIS3DE/src/Sodaq_LIS3DE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_LIS3DE/src/Sodaq_LIS3DE.h"
)

target_include_directories(pac-sodaq_lis3de INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_LIS3DE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sodaq_lis3de INTERFACE
    arduino-compat
)
