add_library(gamma INTERFACE)

target_sources(gamma INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GAMMA/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GAMMA/gamma.h"
)

target_include_directories(gamma INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GAMMA"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gamma INTERFACE
    arduino-compat
)
