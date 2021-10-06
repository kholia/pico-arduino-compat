add_library(stathelpers INTERFACE)

target_sources(stathelpers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/statHelpers/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/statHelpers/statHelpers.h"
)

target_include_directories(stathelpers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/statHelpers"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stathelpers INTERFACE
    arduino-compat
)
