add_library(pac-set INTERFACE)

target_sources(pac-set INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SET/set.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SET/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SET/set.h"
)

target_include_directories(pac-set INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SET"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-set INTERFACE
    arduino-compat
)
