add_library(pac-sparkfun-ads122c04-adc-arduino-library INTERFACE)

target_sources(pac-sparkfun-ads122c04-adc-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ADS122C04_ADC_Arduino_Library/src/SparkFun_ADS122C04_ADC_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ADS122C04_ADC_Arduino_Library/src/SparkFun_ADS122C04_ADC_Arduino_Library.h"
)

target_include_directories(pac-sparkfun-ads122c04-adc-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ADS122C04_ADC_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-ads122c04-adc-arduino-library INTERFACE
    arduino-compat
)
