add_library(pac-dfrobot_esp_ph_with_adc_by_greenponik INTERFACE)

target_sources(pac-dfrobot_esp_ph_with_adc_by_greenponik INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DFRobot_ESP_PH_WITH_ADC_BY_GREENPONIK/src/DFRobot_ESP_PH_WITH_ADC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFRobot_ESP_PH_WITH_ADC_BY_GREENPONIK/src/DFRobot_ESP_PH_WITH_ADC.h"
)

target_include_directories(pac-dfrobot_esp_ph_with_adc_by_greenponik INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DFRobot_ESP_PH_WITH_ADC_BY_GREENPONIK/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dfrobot_esp_ph_with_adc_by_greenponik INTERFACE
    arduino-compat
)
