add_library(pac-ssd1306xled INTERFACE)

target_sources(pac-ssd1306xled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ssd1306xled/ssd1306xled.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ssd1306xled/ssd1306xled.h"
  "${CMAKE_CURRENT_LIST_DIR}/ssd1306xled/font6x8.h"
  "${CMAKE_CURRENT_LIST_DIR}/ssd1306xled/font8x16.h"
  "${CMAKE_CURRENT_LIST_DIR}/ssd1306xled/examples/OLED_demo/image.h"
  "${CMAKE_CURRENT_LIST_DIR}/ssd1306xled/examples/OLED_demo/image_two.h"
)

target_include_directories(pac-ssd1306xled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ssd1306xled"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ssd1306xled INTERFACE
    arduino-compat
)
