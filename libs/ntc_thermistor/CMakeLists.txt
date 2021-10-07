add_library(pac-ntc_thermistor INTERFACE)

target_sources(pac-ntc_thermistor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NTC_Thermistor/src/SmoothThermistor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NTC_Thermistor/src/AverageThermistor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NTC_Thermistor/src/NTC_Thermistor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NTC_Thermistor/src/SmoothThermistor.h"
  "${CMAKE_CURRENT_LIST_DIR}/NTC_Thermistor/src/AverageThermistor.h"
  "${CMAKE_CURRENT_LIST_DIR}/NTC_Thermistor/src/NTC_Thermistor.h"
  "${CMAKE_CURRENT_LIST_DIR}/NTC_Thermistor/src/Thermistor.h"
)

target_include_directories(pac-ntc_thermistor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NTC_Thermistor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ntc_thermistor INTERFACE
    arduino-compat
)
