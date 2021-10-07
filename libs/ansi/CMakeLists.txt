add_library(pac-ansi INTERFACE)

target_sources(pac-ansi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ANSI/ansi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ANSI/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ANSI/ansi.h"
)

target_include_directories(pac-ansi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ANSI"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ansi INTERFACE
    arduino-compat
)
