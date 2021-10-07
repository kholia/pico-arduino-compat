add_library(pac-tiny4koled INTERFACE)

target_sources(pac-tiny4koled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/Tiny4kOLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/font8x16caps.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/Tiny4kOLEDprintless.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/font8x16capsp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/Tiny4kOLED_bitbang.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/Tiny4kOLED_tiny-i2c.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/Tiny4kOLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/font8x16p.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/font6x8digits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/Tiny4kOLED_Wire.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/Tiny4kOLED_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/font6x8p.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/font8x16digits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/font6x8caps.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/font6x8.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/font8x16.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src/Tiny4kOLED_TinyWireM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/examples/CustomChineseFont/font16x16cn.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/examples/PacMan/PacManMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/examples/PacMan/Graphics.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/examples/DatacuteBoxyFont/boxyfont.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/examples/Bitmap/SolomonSystech.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/examples/BatteryMonitor/eeprom_contents.h"
)

target_include_directories(pac-tiny4koled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Tiny4kOLED/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tiny4koled INTERFACE
    arduino-compat
)
