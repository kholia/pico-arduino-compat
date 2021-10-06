add_library(esp32_easy_wifi_data INTERFACE)

target_sources(esp32_easy_wifi_data INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_easy_wifi_data/src/ESP32_easy_wifi_data.h"
)

target_include_directories(esp32_easy_wifi_data INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32_easy_wifi_data/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32_easy_wifi_data INTERFACE
    arduino-compat
)
