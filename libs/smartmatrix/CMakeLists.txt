add_library(smartmatrix INTERFACE)

target_sources(smartmatrix INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixFont.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixEsp32Hub75Calc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Layer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/CircularBuffer_SM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixPanelMaps.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixTeensy4Apa102Refresh.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixTeensy3Hub75Refresh.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixTeensy4Hub75Refresh.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/lib/FlexIO_t4/FlexIO_t4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/lib/FlexIO_t4/FlexIOSPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/lib/FlexIO_t4/FlexSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/examples/AnimatedGifs/FilenameFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Font_gohufont6x11.c"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/esp32_i2s_parallel.c"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Font_apple8x13.c"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Font_apple4x6_256.c"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Font_apple5x7_256.c"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Font_tom_thumb.c"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Font_apple6x10.c"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Font_gohufont6x11b.c"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/examples/FeatureDemo/colorwheel.c"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/examples/Bitmaps/pixelmatix.c"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/examples/Bitmaps/chrome16.c"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/examples/Bitmaps/colorwheel.c"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/SmartMatrix4.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixEsp32Hub75Calc_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Layer_Gfx_Mono_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixHardware_ESP32_V0.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixHardware_Teensy4_ShieldV0.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixGfxFontCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Layer_Scrolling_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixHardware_Teensy4_ShieldV4WireMod.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixCommonApa102Calc.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixCommonHub75.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixEsp32Hub75Calc_NT_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/FontGfx_apple6x10.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Layer_Gfx_Mono.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixHardware_ESP32_SmartLedShieldV0.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Layer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixTeensy4Hub75Calc_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixEsp32Hub75Refresh.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixTeensy3Hub75Refresh_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixHardware_Esp32_AtomLiteApaOnly.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Layer_BackgroundGfx.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixEsp32Hub75Refresh_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Layer_Scrolling.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/SmartLEDShieldV4.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixEsp32Hub75Calc.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixEsp32Hub75Refresh_NT_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/FontGfx_apple8x13.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/SmartMatrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Layer_Indexed_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/FontGfx_apple4x6.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixHardware_ESP32_HUB75AdapterLite_V0.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixTeensy4Hub75Refresh_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixTeensy3Hub75Calc.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixHardware_Teensy3_ShieldV1toV3.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixHardware_ESP32_HUB75Adapter_SMT.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixTeensy4Apa102Refresh_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Layer_Indexed.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixCommonApa102.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixFontCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixTeensy4Hub75Calc.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/FontGfx_gohufont6x11b.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixHardware_ESP32_RGB64x32MatrixPanel-I2S-DMA_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixHardware_ESP32_HUB75Adapter_THT.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Layer_Background_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/esp32_i2s_parallel.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixHardware_Teensy4_ShieldV4Adapter.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixTeensy3Hub75Calc_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Layer_BackgroundGfx_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixHardware_Teensy3_ShieldV4.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixEsp32Hub75Calc_NT.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/FontGfx_apple5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/FontGfx_tom_thumb.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/FontGfx_gohufont6x11.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixTeensy4Hub75Refresh.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixEsp32Hub75Refresh_NT.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixCommonApa102Calc_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixHardware_Teensy4_ShieldV5.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixEsp32Apa102Refresh_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Layer_Background.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/CircularBuffer_SM.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixTeensy3Hub75Refresh.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixTeensy3Apa102Refresh_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixCommonApa102Refresh.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/MatrixPanelMaps.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/Esp32MemDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/lib/FlexIO_t4/FlexIO_t4.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/lib/FlexIO_t4/FlexIOSPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src/lib/FlexIO_t4/FlexSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/examples/FeatureDemo/gimpbitmap.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/examples/Bitmaps/gimpbitmap.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/examples/AnimatedGifs/FilenameFunctions.h"
)

target_include_directories(smartmatrix INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(smartmatrix INTERFACE
    arduino-compat
    official-sd
    adafruit-gfx-library
)
