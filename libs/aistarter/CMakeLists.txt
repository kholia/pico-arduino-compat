add_library(aistarter INTERFACE)

target_sources(aistarter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/MMC5883L.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/SmartBot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/E2PROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/IRModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/TimerOne.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/Beep.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/TCS3200.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/Motor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/SoftI2CMaster.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/HC-SR04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/TCS3200.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/MMC5883L.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/Beep.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/TimerOne.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/AIStarter.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/IRModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/Motor.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/SmartBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/SoftI2CMaster.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/E2PROM.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src/HC-SR04.h"
)

target_include_directories(aistarter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AIStarter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(aistarter INTERFACE
    arduino-compat
)
