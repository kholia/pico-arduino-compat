add_library(pac-ad985x INTERFACE)

target_sources(pac-ad985x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD985X/AD985X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD985X/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD985X/AD985X.h"
)

target_include_directories(pac-ad985x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD985X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ad985x INTERFACE
    arduino-compat
)
