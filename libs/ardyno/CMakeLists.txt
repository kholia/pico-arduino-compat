add_library(ardyno INTERFACE)

target_sources(ardyno INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ardyno/src/DynamixelConsole.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ardyno/src/DynamixelInterfaceArduinoImpl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ardyno/src/DynamixelMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ardyno/src/Dynamixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ardyno/src/DynamixelInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ardyno/src/DynamixelInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/ardyno/src/DynamixelInterfaceArduinoImpl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ardyno/src/Dynamixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/ardyno/src/DynamixelMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ardyno/src/DynamixelConsole.h"
)

target_include_directories(ardyno INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ardyno/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ardyno INTERFACE
    arduino-compat
)
