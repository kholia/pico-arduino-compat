add_library(pac-mybutton INTERFACE)

target_sources(pac-mybutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MyButton_Arduino/src/MyButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MyButton_Arduino/examples/SSD1306_multiple_buttons/Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MyButton_Arduino/examples/SSD1306_stepped_animation/Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MyButton_Arduino/src/MyButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/MyButton_Arduino/examples/SSD1306_multiple_buttons/printables.h"
  "${CMAKE_CURRENT_LIST_DIR}/MyButton_Arduino/examples/SSD1306_multiple_buttons/Display.h"
  "${CMAKE_CURRENT_LIST_DIR}/MyButton_Arduino/examples/SSD1306_stepped_animation/printables.h"
  "${CMAKE_CURRENT_LIST_DIR}/MyButton_Arduino/examples/SSD1306_stepped_animation/Display.h"
)

target_include_directories(pac-mybutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MyButton_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-mybutton INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
