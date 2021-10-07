add_library(pac-esp_lm35 INTERFACE)

target_sources(pac-esp_lm35 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP_LM35/src/ESP_LM35.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_LM35/src/ESP_LM35.h"
)

target_include_directories(pac-esp_lm35 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP_LM35/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp_lm35 INTERFACE
    arduino-compat
)
