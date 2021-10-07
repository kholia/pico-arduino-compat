add_library(pac-gamma INTERFACE)

target_sources(pac-gamma INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GAMMA/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GAMMA/gamma.h"
)

target_include_directories(pac-gamma INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GAMMA"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gamma INTERFACE
    arduino-compat
)
