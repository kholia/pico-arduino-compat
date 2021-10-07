add_library(pac-acs712 INTERFACE)

target_sources(pac-acs712 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ACS712/ACS712.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ACS712/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ACS712/ACS712.h"
)

target_include_directories(pac-acs712 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ACS712"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-acs712 INTERFACE
    arduino-compat
)
