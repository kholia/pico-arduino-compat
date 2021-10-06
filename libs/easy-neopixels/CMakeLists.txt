add_library(easy-neopixels INTERFACE)

target_sources(easy-neopixels INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/easy-neopixels/EasyNeoPixels.h"
)

target_include_directories(easy-neopixels INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/easy-neopixels"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easy-neopixels INTERFACE
    arduino-compat
)
