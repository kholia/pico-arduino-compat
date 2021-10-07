add_library(pac-liquid-handling-robotics INTERFACE)

target_sources(pac-liquid-handling-robotics INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/liquid-handling-robotics/src/LiquidHandlingRobotics.h"
  "${CMAKE_CURRENT_LIST_DIR}/liquid-handling-robotics/src/StandardLiquidHandlingRobot.h"
  "${CMAKE_CURRENT_LIST_DIR}/liquid-handling-robotics/src/Protocol/Placeholder.h"
  "${CMAKE_CURRENT_LIST_DIR}/liquid-handling-robotics/src/Protocol/LinearActuatorAxis.h"
  "${CMAKE_CURRENT_LIST_DIR}/liquid-handling-robotics/src/Protocol/Core.h"
  "${CMAKE_CURRENT_LIST_DIR}/liquid-handling-robotics/src/Protocol/Board.h"
  "${CMAKE_CURRENT_LIST_DIR}/liquid-handling-robotics/src/Messaging/Messages.h"
  "${CMAKE_CURRENT_LIST_DIR}/liquid-handling-robotics/src/Messaging/FirmataIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/liquid-handling-robotics/src/Messaging/ASCIIIO.h"
)

target_include_directories(pac-liquid-handling-robotics INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/liquid-handling-robotics/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-liquid-handling-robotics INTERFACE
    arduino-compat
)
