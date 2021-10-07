add_library(pac-devnull INTERFACE)

target_sources(pac-devnull INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DEVNULL/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DEVNULL/DEVNULL.h"
)

target_include_directories(pac-devnull INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DEVNULL"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-devnull INTERFACE
    arduino-compat
)
