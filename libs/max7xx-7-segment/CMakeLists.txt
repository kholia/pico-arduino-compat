add_library(pac-max7xx-7-segment INTERFACE)

target_sources(pac-max7xx-7-segment INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX72XX/src/MAX72XX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX72XX/src/MAX72XX.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX72XX/src/MAX72XX.h"
)

target_include_directories(pac-max7xx-7-segment INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX72XX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max7xx-7-segment INTERFACE
    arduino-compat
)
