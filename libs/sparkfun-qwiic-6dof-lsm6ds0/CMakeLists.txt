add_library(sparkfun-qwiic-6dof-lsm6ds0 INTERFACE)

target_sources(sparkfun-qwiic-6dof-lsm6ds0 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_6DoF_LSM6DSO_Arduino_Library/src/SparkFunLSM6DSO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_6DoF_LSM6DSO_Arduino_Library/src/SparkFunLSM6DSO.h"
)

target_include_directories(sparkfun-qwiic-6dof-lsm6ds0 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_6DoF_LSM6DSO_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-qwiic-6dof-lsm6ds0 INTERFACE
    arduino-compat
)
