add_library(fabo-214-oled-eroled096 INTERFACE)

target_sources(fabo-214-oled-eroled096 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoOLED-EROLED096-Library/src/FaBoOLED_EROLED096.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoOLED-EROLED096-Library/src/FaBoOLED_bmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoOLED-EROLED096-Library/src/FaBoOLED_EROLED096.h"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoOLED-EROLED096-Library/src/FaBoOLED_font.h"
)

target_include_directories(fabo-214-oled-eroled096 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoOLED-EROLED096-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fabo-214-oled-eroled096 INTERFACE
    arduino-compat
)
