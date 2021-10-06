add_library(ledrgblib INTERFACE)

target_sources(ledrgblib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LibreriaLedRGB/src/LedRGB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LibreriaLedRGB/src/LedRGB.h"
)

target_include_directories(ledrgblib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LibreriaLedRGB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ledrgblib INTERFACE
    arduino-compat
)
