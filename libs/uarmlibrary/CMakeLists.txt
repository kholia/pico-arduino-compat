add_library(uarmlibrary INTERFACE)

target_sources(uarmlibrary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmLed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmRingBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmDebug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmAPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmRecorder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmComm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmIIC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/linreg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmBuzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/UFServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmService.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmIIC.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmLed.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmBuzzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArm.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmRingBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmRecorder.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmComm.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/ServoTimers.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmController.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/UFServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/linreg.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmService.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src/uArmPin.h"
)

target_include_directories(uarmlibrary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UArmForArduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(uarmlibrary INTERFACE
    arduino-compat
)
