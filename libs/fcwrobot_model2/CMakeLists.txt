add_library(pac-fcwrobot_model2 INTERFACE)

target_sources(pac-fcwrobot_model2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/ModeButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/FcwRadio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/FcwDebug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/FcwHelper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/PingSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/PiezoBuzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/FcwServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/NRF24/NRF24.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/FcwServo/Servo360.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/ModeButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/FcwDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/FcwRadio.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/FcwServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/PingSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/PiezoBuzzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/FcwHelper.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/NRF24/NRF24Reg.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/NRF24/NRF24.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src/FcwServo/Servo360.h"
)

target_include_directories(pac-fcwrobot_model2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Robot-Model-2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-fcwrobot_model2 INTERFACE
    arduino-compat
    pac-sd
)
