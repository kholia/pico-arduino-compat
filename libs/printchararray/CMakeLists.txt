add_library(printchararray INTERFACE)

target_sources(printchararray INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PrintCharArray/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PrintCharArray/PrintCharArray.h"
)

target_include_directories(printchararray INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PrintCharArray"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(printchararray INTERFACE
    arduino-compat
)
