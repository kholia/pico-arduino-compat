add_library(sparkfun-argos-artic-r2-arduino-library INTERFACE)

target_sources(sparkfun-argos-artic-r2-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/src/SparkFun_ARGOS_ARTIC_R2_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/ARTIC_firmware/ARTIC006/ARTIC_R2_Firmware_PMEM.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/ARTIC_firmware/ARTIC006/ARTIC_R2_Firmware.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/ARTIC_firmware/ARTIC006/ARTIC_R2_Firmware_YMEM.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/ARTIC_firmware/ARTIC006/ARTIC_R2_Firmware_XMEM.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/ARTIC_firmware/ARTIC004/ARTIC_R2_Firmware_PMEM.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/ARTIC_firmware/ARTIC004/ARTIC_R2_Firmware.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/ARTIC_firmware/ARTIC004/ARTIC_R2_Firmware_YMEM.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/ARTIC_firmware/ARTIC004/ARTIC_R2_Firmware_XMEM.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/src/ARTIC_R2_Firmware_PMEM.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/src/ARTIC_R2_Firmware.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/src/ARTIC_R2_Firmware_YMEM.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/src/ARTIC_R2_Firmware_XMEM.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/src/SparkFun_ARGOS_ARTIC_R2_Arduino_Library.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/examples/Example9_TestJSONSatellitePassPredictor/allcast_2021_03_06_13_27_618.h"
)

target_include_directories(sparkfun-argos-artic-r2-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ARGOS_ARTIC_R2_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-argos-artic-r2-arduino-library INTERFACE
    arduino-compat
)
