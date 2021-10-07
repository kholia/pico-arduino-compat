add_library(pac-dynamixel2arduino INTERFACE)

target_sources(pac-dynamixel2arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel2Arduino/src/actuator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel2Arduino/src/Dynamixel2Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel2Arduino/src/utility/master.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel2Arduino/src/utility/slave.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel2Arduino/src/utility/port_handler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel2Arduino/src/dxl_c/protocol.c"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel2Arduino/src/Dynamixel2Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel2Arduino/src/actuator.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel2Arduino/src/dxl_c/protocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel2Arduino/src/utility/port_handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel2Arduino/src/utility/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel2Arduino/src/utility/master.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel2Arduino/src/utility/slave.h"
)

target_include_directories(pac-dynamixel2arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Dynamixel2Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dynamixel2arduino INTERFACE
    arduino-compat
)
