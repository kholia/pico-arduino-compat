add_library(pac-hardwareserial_rs485 INTERFACE)

target_sources(pac-hardwareserial_rs485 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HardwareSerialRS485/src/HardwareSerialRS485.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HardwareSerialRS485/extras/DisableHardwareSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/HardwareSerialRS485/src/MessageReader.h"
  "${CMAKE_CURRENT_LIST_DIR}/HardwareSerialRS485/src/HardwareSerialRS485.h"
  "${CMAKE_CURRENT_LIST_DIR}/HardwareSerialRS485/src/utility/SerialUSBSwitch.h"
  "${CMAKE_CURRENT_LIST_DIR}/HardwareSerialRS485/src/utility/HardwareSerialRS485_Enabled.h"
  "${CMAKE_CURRENT_LIST_DIR}/HardwareSerialRS485/src/utility/USARTdef.h"
  "${CMAKE_CURRENT_LIST_DIR}/HardwareSerialRS485/src/utility/BitManipulation.h"
  "${CMAKE_CURRENT_LIST_DIR}/HardwareSerialRS485/src/utility/HardwareSerialRS485_Tracer.h"
  "${CMAKE_CURRENT_LIST_DIR}/HardwareSerialRS485/src/utility/HardwareSerialRS485_Helper.h"
  "${CMAKE_CURRENT_LIST_DIR}/HardwareSerialRS485/src/utility/MessageFilter.h"
  "${CMAKE_CURRENT_LIST_DIR}/HardwareSerialRS485/src/utility/HardwareSerialRS485_configuration.h"
)

target_include_directories(pac-hardwareserial_rs485 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HardwareSerialRS485/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hardwareserial_rs485 INTERFACE
    arduino-compat
)
