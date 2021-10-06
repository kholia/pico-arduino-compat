add_library(esp32-lite-pack-library INTERFACE)

target_sources(esp32-lite-pack-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/M5LiteSound.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/M5LiteEx.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/M5LiteIMU.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/M5LiteAXP192.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/M5LiteButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/ESP32LiteDebugGPIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/M5LiteTouch.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/M5LiteCommUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/I2C_BMA423_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/M5LiteDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/M5LiteSpeaker.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/I2C_BMA423.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/M5LiteRTC.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/M5LiteSH200Q.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/I2C_IP5306.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/M5Lite.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/M5LitePower.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/I2C_SH200Q.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/M5LiteLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src/M5LiteMPU6886.h"
)

target_include_directories(esp32-lite-pack-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32LitePack/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(esp32-lite-pack-library INTERFACE
    arduino-compat
    official-sd
)
