add_library(max7xx-7-segment INTERFACE)

target_sources(max7xx-7-segment INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX72XX/src/MAX72XX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX72XX/src/MAX72XX.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX72XX/src/MAX72XX.h"
)

target_include_directories(max7xx-7-segment INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX72XX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(max7xx-7-segment INTERFACE
    arduino-compat
)
