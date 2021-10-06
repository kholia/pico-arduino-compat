add_library(arduino_machinecontrol INTERFACE)

target_sources(arduino_machinecontrol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/Objects.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/utility/MAX31865/MAX31865.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/utility/QEI/QEI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/utility/ioexpander/TCA6424A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/utility/ioexpander/I2Cdev.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/utility/ioexpander/ArduinoIOExpander.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/utility/RTC/PCF8563T.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/utility/THERMOCOUPLE/MAX31855.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/Arduino_MachineControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/utility/MAX31865/MAX31865.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/utility/QEI/QEI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/utility/ioexpander/ArduinoIOExpander.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/utility/ioexpander/TCA6424A.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/utility/ioexpander/I2Cdev.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/utility/RTC/PCF8563T.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src/utility/THERMOCOUPLE/MAX31855.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/examples/USB_host/TUSB_helpers.h"
)

target_include_directories(arduino_machinecontrol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_MachineControl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino_machinecontrol INTERFACE
    arduino-compat
)
