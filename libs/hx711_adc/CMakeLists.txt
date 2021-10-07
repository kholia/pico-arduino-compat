add_library(pac-hx711_adc INTERFACE)

target_sources(pac-hx711_adc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HX711_ADC/src/HX711_ADC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HX711_ADC/src/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/HX711_ADC/src/HX711_ADC.h"
)

target_include_directories(pac-hx711_adc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HX711_ADC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hx711_adc INTERFACE
    arduino-compat
)
