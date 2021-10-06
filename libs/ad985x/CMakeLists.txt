add_library(ad985x INTERFACE)

target_sources(ad985x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD985X/AD985X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD985X/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD985X/AD985X.h"
)

target_include_directories(ad985x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD985X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ad985x INTERFACE
    arduino-compat
)
