add_library(pac-educationshield INTERFACE)

target_sources(pac-educationshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/LightSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/TiltSwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/Wheels.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/Joystick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/ButtonGroup.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/IMU.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/VUMeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/LED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/CapacitiveSwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/BLEPeripheralBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/Knob.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/Player.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/BLEuart.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/IRArray.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/Melody.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/piezoKnockSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/UltrasonicSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/utils/CapacitiveSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/pitches.h"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/EducationShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src/utils/CapacitiveSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/examples/Block2-Sports/Projects/Basketball/pitches.h"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/examples/Block2-Sports/Projects/React/pitches.h"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/examples/Help/Melody/pitches.h"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/examples/Block3-Magic/Projects/BinaryLP/pitches.h"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/examples/Block3-Magic/Projects/Drawdio/pitches.h"
  "${CMAKE_CURRENT_LIST_DIR}/EducationShield/examples/Block3-Magic/Projects/BinaryLP_Workshop/pitches.h"
)

target_include_directories(pac-educationshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EducationShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-educationshield INTERFACE
    arduino-compat
    pac-sd
)
