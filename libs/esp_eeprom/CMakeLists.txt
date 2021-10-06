add_library(esp_eeprom INTERFACE)

target_sources(esp_eeprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP_EEPROM/src/ESP_EEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_EEPROM/src/ESP_EEPROM.h"
)

target_include_directories(esp_eeprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP_EEPROM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp_eeprom INTERFACE
    arduino-compat
)
