add_library(pac-sht31 INTERFACE)

target_sources(pac-sht31 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SHT31/SHT31.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SHT31/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SHT31/SHT31.h"
)

target_include_directories(pac-sht31 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SHT31"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sht31 INTERFACE
    arduino-compat
)
