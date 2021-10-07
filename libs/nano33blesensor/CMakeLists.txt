add_library(pac-nano33blesensor INTERFACE)

target_sources(pac-nano33blesensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLETempterature.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEAccelerometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEGesture.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEPressure.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEColour.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEMagnetic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEProximity.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEMicrophoneRMS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEGyroscope.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEAccelerometer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLESensorBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEMagnetic.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEGesture.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLETemperature.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEGyroscope.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEPressure.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEMicrophoneRMS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEProximity.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src/Nano33BLEColour.h"
)

target_include_directories(pac-nano33blesensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Nano33BLESensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nano33blesensor INTERFACE
    arduino-compat
)
