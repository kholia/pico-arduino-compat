add_library(nibblearray INTERFACE)

target_sources(nibblearray INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/nibbleArray/nibbleArray.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nibbleArray/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nibbleArray/nibbleArray.h"
)

target_include_directories(nibblearray INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/nibbleArray"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nibblearray INTERFACE
    arduino-compat
)
