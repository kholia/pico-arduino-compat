add_library(xyzrobotservo INTERFACE)

target_sources(xyzrobotservo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/xyzrobot-servo-arduino/XYZrobotServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/xyzrobot-servo-arduino/XYZrobotServo.h"
)

target_include_directories(xyzrobotservo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/xyzrobot-servo-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xyzrobotservo INTERFACE
    arduino-compat
)
