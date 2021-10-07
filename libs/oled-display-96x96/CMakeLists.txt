add_library(pac-oled-display-96x96 INTERFACE)

target_sources(pac-oled-display-96x96 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OLED_Display_96X96/SeeedGrayOLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OLED_Display_96X96/SeeedGrayOLED.h"
)

target_include_directories(pac-oled-display-96x96 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OLED_Display_96X96"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-oled-display-96x96 INTERFACE
    arduino-compat
)
