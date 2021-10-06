add_library(am232x INTERFACE)

target_sources(am232x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AM232X/AM232X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AM232X/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AM232X/AM232X.h"
)

target_include_directories(am232x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AM232X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(am232x INTERFACE
    arduino-compat
)
