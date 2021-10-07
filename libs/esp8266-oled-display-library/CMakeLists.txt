add_library(pac-esp8266-oled-display-library INTERFACE)

target_sources(pac-esp8266-oled-display-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-OLED/src/OLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-OLED/src/OLED.h"
)

target_include_directories(pac-esp8266-oled-display-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp8266-OLED/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266-oled-display-library INTERFACE
    arduino-compat
)
