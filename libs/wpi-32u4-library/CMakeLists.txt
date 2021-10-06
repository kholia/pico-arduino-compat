add_library(wpi-32u4-library INTERFACE)

target_sources(wpi-32u4-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/Pushbutton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/Gyro.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/Romi32U4Motors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/Romi32U4Encoders.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/LSM6.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/servo32u4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/IRDirectionFinder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/IRdecoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/pcint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/examples/IRPositionFinder/src/irPositionExample.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/examples/RotationResist/TurnSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/pcint.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/servo32u4.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/LSM6.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/Gyro.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/FastGPIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/Pushbutton.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/Romi32U4.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/wpi-32u4-library.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/Romi32U4Buttons.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/Romi32U4Motors.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/IRDirectionFinder.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/Romi32U4Encoders.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/USBPause.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src/IRdecoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/examples/RemoteControlISR/RemoteConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/examples/RotationResist/TurnSensor.h"
)

target_include_directories(wpi-32u4-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/wpi-32u4-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wpi-32u4-library INTERFACE
    arduino-compat
)
