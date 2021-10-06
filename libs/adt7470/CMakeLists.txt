add_library(adt7470 INTERFACE)

target_sources(adt7470 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADT7470/ADT7470.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADT7470/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADT7470/ADT7470.h"
)

target_include_directories(adt7470 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADT7470"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adt7470 INTERFACE
    arduino-compat
)
