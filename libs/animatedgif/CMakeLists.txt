add_library(pac-animatedgif INTERFACE)

target_sources(pac-animatedgif INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/src/AnimatedGIF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/linux/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/src/AnimatedGIF.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/examples/NeoPixel_Player/rainbow_5x14.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/examples/gif_animated_digits/digit_2.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/examples/gif_animated_digits/digit_1.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/examples/gif_animated_digits/digit_0.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/examples/gif_animated_digits/digit_6.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/examples/gif_animated_digits/digit_5.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/examples/gif_animated_digits/digit_9.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/examples/gif_animated_digits/digit_4.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/examples/gif_animated_digits/digit_8.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/examples/gif_animated_digits/digit_3.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/examples/gif_animated_digits/digit_7.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/examples/gif_transparency_demo/octocat_4bpp.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/examples/TinyPico_Display_GIF/homer_small_car.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/test_images/homer_tiny.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/test_images/homer.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/test_images/badgers.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/test_images/pattern.h"
)

target_include_directories(pac-animatedgif INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AnimatedGIF/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-animatedgif INTERFACE
    arduino-compat
)
