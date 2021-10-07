add_library(pac-oled_ssd1306_chart INTERFACE)

target_sources(pac-oled_ssd1306_chart INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OLED_SSD1306_Chart/src/OLED_SSD1306_Chart.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OLED_SSD1306_Chart/src/OLED_SSD1306_Chart.h"
)

target_include_directories(pac-oled_ssd1306_chart INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OLED_SSD1306_Chart/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-oled_ssd1306_chart INTERFACE
    arduino-compat
)
