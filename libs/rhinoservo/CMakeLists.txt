add_library(pac-rhinoservo INTERFACE)

target_sources(pac-rhinoservo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RhinoServo/src/RhinoServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RhinoServo/src/DebuggerSerial/src/DebuggerSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RhinoServo/src/RhinoServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/RhinoServo/src/DebuggerSerial/src/DebuggerSerial.h"
)

target_include_directories(pac-rhinoservo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RhinoServo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rhinoservo INTERFACE
    arduino-compat
)
