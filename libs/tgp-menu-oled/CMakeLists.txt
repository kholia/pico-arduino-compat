add_library(tgp-menu-oled INTERFACE)

target_sources(tgp-menu-oled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TGP_MenuOLED/MenuOLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_MenuOLED/MenuOLED.h"
)

target_include_directories(tgp-menu-oled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TGP_MenuOLED"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tgp-menu-oled INTERFACE
    arduino-compat
)
