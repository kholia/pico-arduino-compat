add_library(pac-pca9685 INTERFACE)

target_sources(pac-pca9685 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/src/PCA9685/PCA9685.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/OffTimeSweepSingleDevice/Constants.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/SetChannelDutyCycle/Constants.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/FrequencySweep/Constants.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/SetChannelOnAndOffTime/Constants.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/ServoController/Constants.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/SetChannelPulseWidth/Constants.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/TestSetAndGet/Constants.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/OnTimeSweepMultipleDevices/Constants.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/src/PCA9685.h"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/src/PCA9685/PCA9685Definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/OffTimeSweepSingleDevice/Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/SetChannelDutyCycle/Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/FrequencySweep/Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/SetChannelOnAndOffTime/Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/ServoController/Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/SetChannelPulseWidth/Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/TestSetAndGet/Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685/examples/OnTimeSweepMultipleDevices/Constants.h"
)

target_include_directories(pac-pca9685 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCA9685/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pca9685 INTERFACE
    arduino-compat
)
