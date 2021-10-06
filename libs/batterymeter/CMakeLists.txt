add_library(batterymeter INTERFACE)

target_sources(batterymeter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BatteryMeter-Arduino/src/BatteryMeterPins.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BatteryMeter-Arduino/src/BatteryMeterShiftRegister.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BatteryMeter-Arduino/src/BatteryMeterWithOutput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BatteryMeter-Arduino/src/BatteryMeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BatteryMeter-Arduino/src/BatteryMeterShiftRegister.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/BatteryMeter-Arduino/src/BatteryMeter.h"
  "${CMAKE_CURRENT_LIST_DIR}/BatteryMeter-Arduino/src/BatteryMeterPins.h"
  "${CMAKE_CURRENT_LIST_DIR}/BatteryMeter-Arduino/src/BatteryMeterShiftRegister.h"
  "${CMAKE_CURRENT_LIST_DIR}/BatteryMeter-Arduino/src/BatteryMeterEnums.h"
  "${CMAKE_CURRENT_LIST_DIR}/BatteryMeter-Arduino/src/BatteryMeterWithOutput.h"
)

target_include_directories(batterymeter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BatteryMeter-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(batterymeter INTERFACE
    arduino-compat
)
