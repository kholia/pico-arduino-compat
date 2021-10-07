add_library(pac-digitalio INTERFACE)

target_sources(pac-digitalio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/SoftI2cMaster.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/PinIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/extras/attic/MCP355X.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/extras/attic/MCP320X.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/extras/attic/ADS7818.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/I2cConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/DigitalPin.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/SoftSPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/DigitalIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/SoftI2cMaster.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/PinIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/boards/UnoGpioPinMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/boards/BobuinoGpioPinMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/boards/LeonardoGpioPinMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/boards/GpioPinMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/boards/Standard1284GpioPinMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/boards/MegaGpioPinMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/boards/Teensy2ppGpioPinMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/boards/AvrDevelopersGpioPinMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/boards/Teensy2GpioPinMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src/boards/SleepingBeautyGpioPinMap.h"
)

target_include_directories(pac-digitalio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DigitalIO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-digitalio INTERFACE
    arduino-compat
)
