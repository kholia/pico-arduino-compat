add_library(pac-mrm-lid1 INTERFACE)

target_sources(pac-mrm-lid1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_api_strings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_i2c_comms.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_api_ranging.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_api_core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_api_calibration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_api.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/mrm-lid1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_platform.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_api_calibration.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_i2c_platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_interrupt_threshold_settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_platform_log.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_tuning.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/mrm-lid1.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_api_ranging.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_api_strings.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_api_core.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src/vl53l0x_device.h"
)

target_include_directories(pac-mrm-lid1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-lid1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-lid1 INTERFACE
    arduino-compat
)
