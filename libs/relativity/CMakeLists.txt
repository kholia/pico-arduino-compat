add_library(pac-relativity INTERFACE)

target_sources(pac-relativity INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/relativity/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/relativity/relativity.h"
)

target_include_directories(pac-relativity INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/relativity"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-relativity INTERFACE
    arduino-compat
)
