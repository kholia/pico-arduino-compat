add_library(pac-easyuino INTERFACE)

target_sources(pac-easyuino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/Device.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/GSM/GSMServiceSecure.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/GSM/SMS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/GSM/GSMService.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/Relay/RelayNamed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/Relay/Relay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/Utilities/Printable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/Utilities/Utilities.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/Display/SevenSegments.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/WaterFlow/WaterFlowSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/WaterFlow/WaterFlowMeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/InfraRedReceiver/InfraRedReceiver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/Led/RGBLed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/WaterDetector/WaterDetector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/Ultrasonic/DistanceMeterNonBlock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/Ultrasonic/DistanceMeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/Ultrasonic/DistanceMeterPrintable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/Ultrasonic/DistanceMeterAccurate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/main/Button/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/tests/ManualTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/DistanceMeterNonBlock.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/SMS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/Printable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/Device.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/Easyuino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/DistanceMeterPrintable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/GSMServiceSecure.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/Utilities.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/GSMService.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/SevenSegments.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/DistanceMeter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/Relay.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/WaterFlowMeter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/InfraRedReceiver.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/WaterFlowSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/WaterDetector.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/RelayNamed.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/EasyuinoTests.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/RGBLed.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/DistanceMeterAccurate.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/tests/ManualTest.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/tests/RGBLedTest.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/tests/DistanceMeterTest.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/tests/WaterDetectorTest.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/tests/RelayNamedTest.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/tests/RelayTest.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/tests/DistanceMeterAccurateTest.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src/tests/DistanceMeterNonBlockTest.h"
)

target_include_directories(pac-easyuino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Easyuino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easyuino INTERFACE
    arduino-compat
)
