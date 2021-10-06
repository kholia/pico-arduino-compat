add_library(arxrobot-library INTERFACE)

target_sources(arxrobot-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/twi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/servo3DoT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/Watchdog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/TelecomClass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/MotorDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/Motor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/Packet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/ArxRobot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/FuelGauge.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/Configure.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/MotorDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/TelecomClass.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/ArxRobot.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/FuelGauge.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/servo3DoT.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/Packet.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/Motor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/Watchdog.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src/twi.h"
)

target_include_directories(arxrobot-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArxRobot-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arxrobot-library INTERFACE
    arduino-compat
)
