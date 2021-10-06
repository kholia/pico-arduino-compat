add_library(controlledservo INTERFACE)

target_sources(controlledservo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ControlledServo/src/ControlledServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ControlledServo/src/ControlledServo.h"
)

target_include_directories(controlledservo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ControlledServo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(controlledservo INTERFACE
    arduino-compat
)
