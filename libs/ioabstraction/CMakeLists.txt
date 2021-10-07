add_library(pac-ioabstraction INTERFACE)

target_sources(pac-ioabstraction INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/KeyboardManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/EepromAbstractionWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/SimpleCollections.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/TaskManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/EepromAbstraction.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/IoAbstraction.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/SwitchInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/IoAbstractionWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/avr/AVRWireWrappper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/esp32/ESP32DigitalIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/esp32/ESP32AnalogDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/arduino/ArduinoDigitalIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/arduino/ArduinoAnalogDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/arduino/ArduinoWireWrappper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/mbed/MbedDigitalIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/mbed/MbedWireWrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/mbed/MbedAnalogDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/mbed/HalStm32EepromAbstraction.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/examples/abstractingPinsPCF8574/abstractingPinsPCF8574.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/examples/mbedStm32HalEeprom/testEeprom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/examples/rotaryEncoderLed23017/rotaryEncoderLed23017.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/examples/mbedExample/mbedExample.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/tests/ioaCoreTests/ioDeviceTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/tests/ioaCoreTests/avrClockRoll.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/tests/ioaCoreTests/SimpleCollectionsTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/tests/ioaCoreTests/ioaCoreTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/tests/ioaCoreTests/switchesTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/tests/ioaCoreTests/negatingIoAbstractionTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/JoystickSwitchInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/IoAbstraction.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/TaskManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/PlatformDetermination.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/ArduinoEEPROMAbstraction.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/DeviceEvents.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/BasicIoAbstraction.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/AnalogDeviceAbstraction.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/ResistiveTouchScreen.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/KeyboardManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/MockEepromAbstraction.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/IoLogging.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/MockIoAbstraction.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/SimpleCollections.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/PlatformDeterminationWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/SwitchInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/EepromAbstraction.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/EepromAbstractionWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/PrintCompat.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/IoAbstractionWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/DfRobotInputAbstraction.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/NegatingIoAbstraction.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/esp32/ESP32AnalogDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/esp32/ESP32DigitalIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/arduino/ArduinoAnalogDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/mbed/HalStm32EepromAbstraction.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/mbed/MbedDigitalIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src/mbed/MbedAnalogDevice.h"
)

target_include_directories(pac-ioabstraction INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IoAbstraction/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ioabstraction INTERFACE
    arduino-compat
)
