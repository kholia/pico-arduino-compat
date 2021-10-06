add_library(senses_wifi_esp32 INTERFACE)

target_sources(senses_wifi_esp32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Senses_wifi_esp32/src/Senses_wifi_esp32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Senses_wifi_esp32/src/Senses_wifi_esp32.h"
)

target_include_directories(senses_wifi_esp32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Senses_wifi_esp32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(senses_wifi_esp32 INTERFACE
    arduino-compat
)
