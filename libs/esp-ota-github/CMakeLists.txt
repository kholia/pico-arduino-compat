add_library(pac-esp-ota-github INTERFACE)

target_sources(pac-esp-ota-github INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP_OTA_GitHub/src/ESP_OTA_GitHub.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_OTA_GitHub/src/ESP_OTA_GitHub.h"
)

target_include_directories(pac-esp-ota-github INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP_OTA_GitHub/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp-ota-github INTERFACE
    arduino-compat
)
