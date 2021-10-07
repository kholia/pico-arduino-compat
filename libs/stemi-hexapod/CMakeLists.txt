add_library(pac-stemi-hexapod INTERFACE)

target_sources(pac-stemi-hexapod INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/Body.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/Leg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/Grip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/Names.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/PCA9685.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/ServoDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/SharedData.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/Gait.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/BluetoothLowEnergy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/ProductionVersion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/ServoController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/MatrixMath.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/BatteryDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/LedDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/Dance.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/Hexapod.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/RobotEngine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/TouchDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/BluetoothLowEnergy.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/Leg.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/ProductionVersion.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/GeneralFunctions.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/Grip.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/Body.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/LedDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/Hexapod.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/Dance.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/Gait.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/Names.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/BatteryDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/TouchDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/ServoController.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/ServoDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/PCA9685.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/RobotEngine.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/CircleIntersect.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/SharedData.h"
  "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src/MatrixMath.h"
)

target_include_directories(pac-stemi-hexapod INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/stemi-hexapod/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stemi-hexapod INTERFACE
    arduino-compat
)
