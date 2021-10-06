add_library(boolarray INTERFACE)

target_sources(boolarray INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BoolArray/BoolArray.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BoolArray/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BoolArray/BoolArray.h"
)

target_include_directories(boolarray INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BoolArray"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(boolarray INTERFACE
    arduino-compat
)
