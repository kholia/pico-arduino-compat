add_library(pac-crc-simula-arduino-ide-library INTERFACE)

target_sources(pac-crc-simula-arduino-ide-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_AudioManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_Motor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_IR_BinaryDistance.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_PingDistance.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_IR_AnalogDistance.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_Simulation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_Sensors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_DistanceSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_Lights.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_Hardware.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_PCA9635.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_AudioManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_PingDistance.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_DistanceSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_Sensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_IR_BinaryDistance.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_Lights.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_PCA9635.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_Simulation.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_IR_AnalogDistance.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_Motor.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src/CRC_Hardware.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/examples/Simula_BehaviorTree/BehaviorTree.h"
)

target_include_directories(pac-crc-simula-arduino-ide-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CRC_Simula_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-crc-simula-arduino-ide-library INTERFACE
    arduino-compat
    pac-sd
)
