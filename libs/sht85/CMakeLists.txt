add_library(pac-sht85 INTERFACE)

target_sources(pac-sht85 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SHT85/SHT85.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SHT85/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SHT85/SHT85.h"
)

target_include_directories(pac-sht85 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SHT85"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sht85 INTERFACE
    arduino-compat
)
