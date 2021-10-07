add_library(pac-ags02ma INTERFACE)

target_sources(pac-ags02ma INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AGS02MA/AGS02MA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AGS02MA/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AGS02MA/AGS02MA.h"
)

target_include_directories(pac-ags02ma INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AGS02MA"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ags02ma INTERFACE
    arduino-compat
)
