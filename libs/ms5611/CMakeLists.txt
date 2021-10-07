add_library(pac-ms5611 INTERFACE)

target_sources(pac-ms5611 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MS5611/MS5611.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MS5611/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MS5611/MS5611.h"
)

target_include_directories(pac-ms5611 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MS5611"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ms5611 INTERFACE
    arduino-compat
)
