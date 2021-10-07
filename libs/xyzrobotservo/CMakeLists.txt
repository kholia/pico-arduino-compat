add_library(pac-xyzrobotservo INTERFACE)

target_sources(pac-xyzrobotservo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/xyzrobot-servo-arduino/XYZrobotServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/xyzrobot-servo-arduino/XYZrobotServo.h"
)

target_include_directories(pac-xyzrobotservo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/xyzrobot-servo-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xyzrobotservo INTERFACE
    arduino-compat
)
