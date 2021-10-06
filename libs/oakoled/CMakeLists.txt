add_library(oakoled INTERFACE)

target_sources(oakoled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OakOLED/OakOLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OakOLED/OakOLED.h"
)

target_include_directories(oakoled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OakOLED"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(oakoled INTERFACE
    arduino-compat
    adafruit-gfx-library
)
