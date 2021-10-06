add_library(ukesf-sixth-formers INTERFACE)

target_sources(ukesf-sixth-formers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Accelerometer/LIS3DHTR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Accelerometer/Accelerometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/WeatherStation/WeatherStation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/U8x8lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Barometer/Barometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Barometer/Seeed_BMP280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/ThermometerHygrometer/DHT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/ThermometerHygrometer/ThermometerHygrometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_u16toa.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_d_ssd1306_128x64_noname.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_input_value.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8log.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_fonts.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_byte.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8log_u8x8.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_message.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_setup.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_display.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_capture.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_string.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_debounce.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_u8toa.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_gpio.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_cad.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_8x8.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8_selection_list.c"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/UkesfSixthFormers.h"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Accelerometer/LIS3DHTR.h"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Accelerometer/Accelerometer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/WeatherStation/WeatherStation.h"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/Display.h"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/u8x8.h"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Display/u8x8/U8x8lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Barometer/Seeed_BMP280.h"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/Barometer/Barometer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/ThermometerHygrometer/ThermometerHygrometer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src/ThermometerHygrometer/DHT.h"
)

target_include_directories(ukesf-sixth-formers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ukesf-sixth-formers/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ukesf-sixth-formers INTERFACE
    arduino-compat
)
