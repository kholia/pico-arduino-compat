add_library(printstring INTERFACE)

target_sources(printstring INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PrintString/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PrintString/PrintString.h"
)

target_include_directories(printstring INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PrintString"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(printstring INTERFACE
    arduino-compat
)
