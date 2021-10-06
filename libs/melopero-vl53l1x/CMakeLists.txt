add_library(melopero-vl53l1x INTERFACE)

target_sources(melopero-vl53l1x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/Melopero_VL53L1X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_platform.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_api_core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_core_support.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_silicon_core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_api_debug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_api_strings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_api_calibration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_register_funcs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_error_strings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_api_preset_modes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_api.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_wait.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/Melopero_VL53L1X.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_register_funcs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_ll_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_ll_device.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_api_debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_nvm_map.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_silicon_core.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_platform_user_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_api_core.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_register_structs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_error_codes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_error_exceptions.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_platform_log.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_core.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_api_calibration.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_tuning_parm_defaults.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_platform_user_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_register_settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_platform_user_defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_wait.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_core_support.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_api_strings.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_error_strings.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_api_preset_modes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_preset_setup.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src/api/vl53l1_register_map.h"
)

target_include_directories(melopero-vl53l1x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Melopero_VL53L1X_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(melopero-vl53l1x INTERFACE
    arduino-compat
)
