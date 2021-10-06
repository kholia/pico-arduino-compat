add_library(vl53l1x_uld INTERFACE)

target_sources(vl53l1x_uld INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X_ULD/src/VL53L1X_ULD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X_ULD/src/core/VL53L1X_api.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X_ULD/src/core/VL53L1X_calibration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X_ULD/src/platform/vl53l1_platform.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X_ULD/src/platform/VL53L1X_i2ccoms.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X_ULD/src/VL53L1X_ULD.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X_ULD/src/core/VL53L1X_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X_ULD/src/core/vl53l1_error_codes.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X_ULD/src/core/VL53L1X_calibration.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X_ULD/src/platform/vl53l1_platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X_ULD/src/platform/VL53L1X_i2ccoms.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X_ULD/src/platform/vl53l1_types.h"
)

target_include_directories(vl53l1x_uld INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VL53L1X_ULD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vl53l1x_uld INTERFACE
    arduino-compat
)
