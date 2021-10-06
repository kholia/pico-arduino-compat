add_library(ml8511 INTERFACE)

target_sources(ml8511 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ML8511/ML8511.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ML8511/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ML8511/ML8511.h"
)

target_include_directories(ml8511 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ML8511"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ml8511 INTERFACE
    arduino-compat
)
