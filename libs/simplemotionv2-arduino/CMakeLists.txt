add_library(simplemotionv2-arduino INTERFACE)

target_sources(simplemotionv2-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/drivers/arduino/m5stack_rs485.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/drivers/arduino/controllino_rs485.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/drivers/arduino/arduino_helper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/devicedeployment.c"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/simplemotion.c"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/sm_consts.c"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/bufferedmotion.c"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/busdevice.c"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/utils/crc.c"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/tests/descriptions.c"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/drivers/ftdi_d2xx/sm_d2xx.c"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/drivers/tcpip/tcpclient.c"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/drivers/serial/pcserialport.c"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/user_options.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/simplemotion_defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/sm485.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/bufferedmotion.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/simplemotion_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/busdevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/devicedeployment.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/simplemotion_private.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/simplemotion.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/utils/crc.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/drivers/ftdi_d2xx/sm_d2xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/drivers/ftdi_d2xx/third_party/WinTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/drivers/ftdi_d2xx/third_party/ftd2xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/drivers/tcpip/tcpclient.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/drivers/arduino/m5stack_rs485.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/drivers/arduino/controllino_rs485.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/drivers/arduino/arduino_helper.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src/drivers/serial/pcserialport.h"
)

target_include_directories(simplemotionv2-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleMotionV2-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(simplemotionv2-arduino INTERFACE
    arduino-compat
    official-sd
)
