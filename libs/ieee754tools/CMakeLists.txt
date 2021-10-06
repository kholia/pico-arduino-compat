add_library(ieee754tools INTERFACE)

target_sources(ieee754tools INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IEEE754tools/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IEEE754tools/IEEE754tools.h"
)

target_include_directories(ieee754tools INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IEEE754tools"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ieee754tools INTERFACE
    arduino-compat
)
