add_library(pac-ieee754tools INTERFACE)

target_sources(pac-ieee754tools INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IEEE754tools/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IEEE754tools/IEEE754tools.h"
)

target_include_directories(pac-ieee754tools INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IEEE754tools"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ieee754tools INTERFACE
    arduino-compat
)
