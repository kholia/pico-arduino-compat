add_library(adafruit-ahrs INTERFACE)

target_sources(adafruit-ahrs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/src/Adafruit_AHRS_NXPFusion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/src/Adafruit_AHRS_Mahony.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/src/Adafruit_AHRS_Madgwick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/src/Adafruit_Simple_AHRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/src/Adafruit_AHRS_NXPmatrix.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/src/Adafruit_AHRS_NXPFusion.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/src/Adafruit_AHRS_Mahony.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/src/Adafruit_AHRS_Madgwick.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/src/Adafruit_AHRS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/src/Adafruit_Simple_AHRS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/src/Adafruit_Sensor_Set.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/src/Adafruit_AHRS_FusionInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/examples/ahrs_calibration_ble_nrf51/ArdPrintf.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/examples/ahrs_calibration_ble_nrf51/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/examples/calibration/NXP_FXOS_FXAS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/examples/calibration/LSM9DS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/examples/calibration/LSM6DS_LIS3MDL.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/examples/calibrated_orientation/NXP_FXOS_FXAS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/examples/calibrated_orientation/LSM9DS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/examples/calibrated_orientation/LSM9DS1.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/examples/calibrated_orientation/LSM6DS_LIS3MDL.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/examples/ahrs_fusion_ble_nrf51/BluefruitConfig.h"
)

target_include_directories(adafruit-ahrs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHRS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-ahrs INTERFACE
    arduino-compat
)
