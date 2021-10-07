add_library(pac-max6675_thermocouple INTERFACE)

target_sources(pac-max6675_thermocouple INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX6675_Thermocouple/src/SmoothThermocouple.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX6675_Thermocouple/src/AverageThermocouple.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX6675_Thermocouple/src/MAX6675_Thermocouple.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX6675_Thermocouple/src/Thermocouple.h"
  "${CMAKE_CURRENT_LIST_DIR}/MAX6675_Thermocouple/src/MAX6675_Thermocouple.h"
  "${CMAKE_CURRENT_LIST_DIR}/MAX6675_Thermocouple/src/SmoothThermocouple.h"
  "${CMAKE_CURRENT_LIST_DIR}/MAX6675_Thermocouple/src/AverageThermocouple.h"
)

target_include_directories(pac-max6675_thermocouple INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX6675_Thermocouple/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max6675_thermocouple INTERFACE
    arduino-compat
)
