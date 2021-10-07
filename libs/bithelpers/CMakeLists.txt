add_library(pac-bithelpers INTERFACE)

target_sources(pac-bithelpers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/bitHelpers/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bitHelpers/bitHelpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/bitHelpers/examples/bitHelpers_demo2/printHelpers.h"
)

target_include_directories(pac-bithelpers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/bitHelpers"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bithelpers INTERFACE
    arduino-compat
)
