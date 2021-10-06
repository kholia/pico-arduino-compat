add_library(microled INTERFACE)

target_sources(microled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/microLED/src/FastLEDsupport.h"
  "${CMAKE_CURRENT_LIST_DIR}/microLED/src/color_utility.h"
  "${CMAKE_CURRENT_LIST_DIR}/microLED/src/microLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/microLED/src/tinyLED.h"
)

target_include_directories(microled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/microLED/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(microled INTERFACE
    arduino-compat
)
