add_library(grove-oled-display-0.96 INTERFACE)

target_sources(grove-oled-display-0.96 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OLED_Display_128X64/SeeedOLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OLED_Display_128X64/SeeedOLED.h"
)

target_include_directories(grove-oled-display-0.96 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OLED_Display_128X64"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-oled-display-0.96 INTERFACE
    arduino-compat
)
