add_library(pac-gy521 INTERFACE)

target_sources(pac-gy521 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GY521/GY521.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GY521/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GY521/GY521.h"
  "${CMAKE_CURRENT_LIST_DIR}/GY521/GY521_registers.h"
)

target_include_directories(pac-gy521 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GY521"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gy521 INTERFACE
    arduino-compat
)
