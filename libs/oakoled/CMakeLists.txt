add_library(pac-oakoled INTERFACE)

target_sources(pac-oakoled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OakOLED/OakOLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OakOLED/OakOLED.h"
)

target_include_directories(pac-oakoled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OakOLED"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-oakoled INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
