add_library(mrm-lid2 INTERFACE)

target_sources(mrm-lid2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid2/src/mrm-lid2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid2/src/VL53L1X_api.c"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid2/src/VL53L1X_calibration.c"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid2/src/vl53l1_platform.c"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid2/src/VL53L1X_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid2/src/vl53l1_platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid2/src/VL53L1X_calibration.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid2/src/vl53l1_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid2/src/mrm-lid2.h"
)

target_include_directories(mrm-lid2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-lid2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mrm-lid2 INTERFACE
    arduino-compat
)
