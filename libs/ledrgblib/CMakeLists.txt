add_library(pac-ledrgblib INTERFACE)

target_sources(pac-ledrgblib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LibreriaLedRGB/src/LedRGB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LibreriaLedRGB/src/LedRGB.h"
)

target_include_directories(pac-ledrgblib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LibreriaLedRGB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ledrgblib INTERFACE
    arduino-compat
)
