add_library(pac-am232x INTERFACE)

target_sources(pac-am232x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AM232X/AM232X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AM232X/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AM232X/AM232X.h"
)

target_include_directories(pac-am232x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AM232X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-am232x INTERFACE
    arduino-compat
)
