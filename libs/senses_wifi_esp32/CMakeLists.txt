add_library(pac-senses_wifi_esp32 INTERFACE)

target_sources(pac-senses_wifi_esp32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Senses_wifi_esp32/src/Senses_wifi_esp32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Senses_wifi_esp32/src/Senses_wifi_esp32.h"
)

target_include_directories(pac-senses_wifi_esp32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Senses_wifi_esp32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-senses_wifi_esp32 INTERFACE
    arduino-compat
)
