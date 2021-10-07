add_library(pac-esp_eeprom INTERFACE)

target_sources(pac-esp_eeprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP_EEPROM/src/ESP_EEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_EEPROM/src/ESP_EEPROM.h"
)

target_include_directories(pac-esp_eeprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP_EEPROM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp_eeprom INTERFACE
    arduino-compat
)
