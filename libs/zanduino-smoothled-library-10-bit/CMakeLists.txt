add_library(zanduino-smoothled-library-10-bit INTERFACE)

target_sources(zanduino-smoothled-library-10-bit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SmoothLED/src/SmoothLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmoothLED/src/SmoothLED.h"
)

target_include_directories(zanduino-smoothled-library-10-bit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SmoothLED/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(zanduino-smoothled-library-10-bit INTERFACE
    arduino-compat
)
