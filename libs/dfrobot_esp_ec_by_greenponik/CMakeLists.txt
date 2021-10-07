add_library(pac-dfrobot_esp_ec_by_greenponik INTERFACE)

target_sources(pac-dfrobot_esp_ec_by_greenponik INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DFRobot_ESP_EC_BY_GREENPONIK/src/DFRobot_ESP_EC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFRobot_ESP_EC_BY_GREENPONIK/src/DFRobot_ESP_EC.h"
)

target_include_directories(pac-dfrobot_esp_ec_by_greenponik INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DFRobot_ESP_EC_BY_GREENPONIK/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dfrobot_esp_ec_by_greenponik INTERFACE
    arduino-compat
)
