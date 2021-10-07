add_library(pac-grove-oled-display-0.96 INTERFACE)

target_sources(pac-grove-oled-display-0.96 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OLED_Display_128X64/SeeedOLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OLED_Display_128X64/SeeedOLED.h"
)

target_include_directories(pac-grove-oled-display-0.96 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OLED_Display_128X64"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-oled-display-0.96 INTERFACE
    arduino-compat
)
