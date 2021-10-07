add_library(pac-stm32duino-vl53l1 INTERFACE)

target_sources(pac-stm32duino-vl53l1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_hist_char.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_hist_funcs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_api_core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_core_support.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_class.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_zone_presets.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_silicon_core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_api_debug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_api_strings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_api_calibration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_sigma_estimate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_hist_core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_register_funcs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_error_strings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_nvm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_platform_ipp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_api_preset_modes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_dmax.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_hist_algos_gen3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_xtalk.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_wait.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_hist_algos_gen4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/RangeSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_dmax_structs.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_nvm_structs.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_class.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_ll_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_ll_device.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/ComponentObject.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_nvm_map.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_platform_user_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_register_structs.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_error_codes.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_error_exceptions.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_tuning_parm_defaults.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_xtalk_private_structs.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_register_settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_hist_structs.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_platform_user_defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_hist_map.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_hist_private_structs.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_dmax_private_structs.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_preset_setup.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src/vl53l1_register_map.h"
)

target_include_directories(pac-stm32duino-vl53l1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VL53L1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-vl53l1 INTERFACE
    arduino-compat
)
