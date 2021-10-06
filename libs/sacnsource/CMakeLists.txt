add_library(sacnsource INTERFACE)

target_sources(sacnsource INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sACNSource/src/sACNSource.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sACNSource/src/sACNSource.h"
  "${CMAKE_CURRENT_LIST_DIR}/sACNSource/examples/Example5_encoderHueChange/HSI.h"
  "${CMAKE_CURRENT_LIST_DIR}/sACNSource/examples/Example5_encoderHueChange/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/sACNSource/examples/Example3_SixFaders/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/sACNSource/examples/Example1_sACNIntro/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/sACNSource/examples/Example6_printPacket/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/sACNSource/examples/Example4_PanTiltJoystick/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/sACNSource/examples/Example2_OneFader/arduino_secrets.h"
)

target_include_directories(sacnsource INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sACNSource/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sacnsource INTERFACE
    arduino-compat
)
