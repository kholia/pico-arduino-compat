add_library(pac-tgp-menu-oled INTERFACE)

target_sources(pac-tgp-menu-oled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TGP_MenuOLED/MenuOLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_MenuOLED/MenuOLED.h"
)

target_include_directories(pac-tgp-menu-oled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TGP_MenuOLED"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tgp-menu-oled INTERFACE
    arduino-compat
)
