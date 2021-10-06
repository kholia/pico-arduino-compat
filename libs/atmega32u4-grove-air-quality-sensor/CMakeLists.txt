add_library(atmega32u4-grove-air-quality-sensor INTERFACE)

target_sources(atmega32u4-grove-air-quality-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ATmega32U4-Grove-Air-quality-sensor/AirQuality.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ATmega32U4-Grove-Air-quality-sensor/AirQuality.h"
)

target_include_directories(atmega32u4-grove-air-quality-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ATmega32U4-Grove-Air-quality-sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(atmega32u4-grove-air-quality-sensor INTERFACE
    arduino-compat
)
