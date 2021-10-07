add_library(pac-grove-3-axis-digital-accelerometer-2g-to-16g-lis3dhtr INTERFACE)

target_sources(pac-grove-3-axis-digital-accelerometer-2g-to-16g-lis3dhtr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_LIS3DHTR/src/LIS3DHTR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_LIS3DHTR/src/LIS3DHTR.h"
)

target_include_directories(pac-grove-3-axis-digital-accelerometer-2g-to-16g-lis3dhtr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_LIS3DHTR/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-3-axis-digital-accelerometer-2g-to-16g-lis3dhtr INTERFACE
    arduino-compat
)
