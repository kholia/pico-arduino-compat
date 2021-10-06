add_library(circuitsfunbasic INTERFACE)

target_sources(circuitsfunbasic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/LCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/LCD_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/lucky_lib/CAT9555.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/lucky_lib/BME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/lucky_lib/MAG3110.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/lucky_lib/MMA8491Q.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/lucky_lib/Adafruit_SSD1306.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/lucky_lib/Adafruit_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/lucky_lib/glcdfont.c"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/CircuitsFunBasic.h"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/lucky_lib/CAT9555.h"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/lucky_lib/BME280.h"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/lucky_lib/MAG3110.h"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/lucky_lib/Adafruit_GFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/lucky_lib/MMA8491Q.h"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src/lucky_lib/Adafruit_SSD1306.h"
)

target_include_directories(circuitsfunbasic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunBasic-Library-for-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(circuitsfunbasic INTERFACE
    arduino-compat
    official-liquid-crystal
    adafruit-gfx-library
)
