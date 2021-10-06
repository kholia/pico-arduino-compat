add_library(relativity INTERFACE)

target_sources(relativity INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/relativity/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/relativity/relativity.h"
)

target_include_directories(relativity INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/relativity"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(relativity INTERFACE
    arduino-compat
)
