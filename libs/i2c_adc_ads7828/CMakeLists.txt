add_library(pac-i2c_adc_ads7828 INTERFACE)

target_sources(pac-i2c_adc_ads7828 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/i2c_adc_ads7828/src/i2c_adc_ads7828.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/i2c_adc_ads7828/src/i2c_adc_ads7828.h"
)

target_include_directories(pac-i2c_adc_ads7828 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/i2c_adc_ads7828/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-i2c_adc_ads7828 INTERFACE
    arduino-compat
)
