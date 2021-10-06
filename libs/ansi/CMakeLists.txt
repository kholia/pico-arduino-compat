add_library(ansi INTERFACE)

target_sources(ansi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ANSI/ansi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ANSI/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ANSI/ansi.h"
)

target_include_directories(ansi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ANSI"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ansi INTERFACE
    arduino-compat
)
