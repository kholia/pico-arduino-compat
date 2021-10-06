add_library(esp-ota-github INTERFACE)

target_sources(esp-ota-github INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP_OTA_GitHub/src/ESP_OTA_GitHub.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_OTA_GitHub/src/ESP_OTA_GitHub.h"
)

target_include_directories(esp-ota-github INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP_OTA_GitHub/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp-ota-github INTERFACE
    arduino-compat
)
