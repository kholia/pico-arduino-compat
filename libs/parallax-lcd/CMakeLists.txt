add_library(pac-parallax-lcd INTERFACE)

target_sources(pac-parallax-lcd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/parallax_lcd/src/ParallaxLCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/parallax_lcd/src/ParallaxLCD.h"
)

target_include_directories(pac-parallax-lcd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/parallax_lcd/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-parallax-lcd INTERFACE
    arduino-compat
)
