add_library(timing INTERFACE)

target_sources(timing INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/timing/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/timing/timing.h"
)

target_include_directories(timing INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/timing"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(timing INTERFACE
    arduino-compat
)
