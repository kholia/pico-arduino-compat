add_library(acrobotic-ssd1306 INTERFACE)

target_sources(acrobotic-ssd1306 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ai_Ardulib_SSD1306/ACROBOTIC_SSD1306.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ai_Ardulib_SSD1306/ACROBOTIC_SSD1306.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ai_Ardulib_SSD1306/fonts/font8x8.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ai_Ardulib_SSD1306/fonts/font5x7.h"
)

target_include_directories(acrobotic-ssd1306 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ai_Ardulib_SSD1306"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(acrobotic-ssd1306 INTERFACE
    arduino-compat
)
