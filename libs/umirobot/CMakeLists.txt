add_library(umirobot INTERFACE)

target_sources(umirobot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/umirobot-arduino/src/UMIRobot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/umirobot-arduino/src/UMIServo/UMIServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/umirobot-arduino/src/UMIRobot.h"
  "${CMAKE_CURRENT_LIST_DIR}/umirobot-arduino/src/UMIServo/UMIServo.h"
)

target_include_directories(umirobot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/umirobot-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(umirobot INTERFACE
    arduino-compat
)
