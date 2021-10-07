add_library(pac-servosmooth INTERFACE)

target_sources(pac-servosmooth INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ServoSmooth/src/Adafruit_PWMServoDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoSmooth/src/smoothUtil.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoSmooth/src/ServoSmooth.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoSmooth/src/ServoDriverSmooth.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoSmooth/src/Adafruit_PWMServoDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoSmooth/src/ServoSmooth.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoSmooth/src/smoothUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoSmooth/src/ServoDriverSmooth.h"
)

target_include_directories(pac-servosmooth INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ServoSmooth/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-servosmooth INTERFACE
    arduino-compat
)
