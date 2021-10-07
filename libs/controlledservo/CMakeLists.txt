add_library(pac-controlledservo INTERFACE)

target_sources(pac-controlledservo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ControlledServo/src/ControlledServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ControlledServo/src/ControlledServo.h"
)

target_include_directories(pac-controlledservo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ControlledServo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-controlledservo INTERFACE
    arduino-compat
)
