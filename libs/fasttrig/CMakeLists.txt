add_library(pac-fasttrig INTERFACE)

target_sources(pac-fasttrig INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastTrig/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastTrig/FastTrig.h"
)

target_include_directories(pac-fasttrig INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastTrig"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fasttrig INTERFACE
    arduino-compat
)
