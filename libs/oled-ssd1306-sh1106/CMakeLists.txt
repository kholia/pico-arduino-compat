add_library(oled-ssd1306-sh1106 INTERFACE)

target_sources(oled-ssd1306-sh1106 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lib-oled/src/oled.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lib-oled/src/oled.h"
)

target_include_directories(oled-ssd1306-sh1106 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-lib-oled/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(oled-ssd1306-sh1106 INTERFACE
    arduino-compat
)
