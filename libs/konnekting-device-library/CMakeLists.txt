add_library(pac-konnekting-device-library INTERFACE)

target_sources(pac-konnekting-device-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/KnxComObject.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/DebugUtil.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/KonnektingDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/KnxTelegram.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/KnxDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/KnxTpUart.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/KnxDataPointTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/KonnektingDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/RingBuff.h"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/KnxComObject.h"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/System.h"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/KnxDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/KnxDptConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/DebugUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/KnxTpUart.h"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src/KnxTelegram.h"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/examples/DemoSketch/kdevice_DemoSketch.h"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/examples/DemoSketch/EEPROM_24AA256.h"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/examples/DemoSketch_without_pins/kdevice_DemoSketch.h"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/examples/DemoSketch_without_pins/EEPROM_24AA256.h"
)

target_include_directories(pac-konnekting-device-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KonnektingDeviceLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-konnekting-device-library INTERFACE
    arduino-compat
)
