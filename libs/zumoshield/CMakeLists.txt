add_library(zumoshield INTERFACE)

target_sources(zumoshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/ZumoIMU.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/L3G.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/Pushbutton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/ZumoMotors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/PololuBuzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/QTRSensors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/LSM303.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/ZumoReflectanceSensorArray.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/ZumoIMU.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/ZumoMotors.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/Pushbutton.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/QTRSensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/ZumoShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/PololuBuzzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/LSM303.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/L3G.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library/ZumoBuzzer.h"
)

target_include_directories(zumoshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/zumo-shield-arduino-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(zumoshield INTERFACE
    arduino-compat
)
