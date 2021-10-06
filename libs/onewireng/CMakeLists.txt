add_library(onewireng INTERFACE)

target_sources(onewireng INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/extras/test/t01_OneWireNg_Test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/extras/test/t03_DSTherm_Test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/extras/test/t02_OneWireNg_BitBang_Test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/OneWireNg_BitBang.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/OneWireNg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/drivers/DSTherm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/extras/test/common.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/extras/test/test_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/OneWireNg_CurrentPlatform.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/OneWireNg.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/OneWireNg_Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/OneWireNg_BitBang.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/OneWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/utils/Placeholder.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/drivers/DSTherm.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/platform/OneWireNg_ArduinoSAMD.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/platform/OneWireNg_ArduinoMegaAVR.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/platform/Platform_Delay.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/platform/OneWireNg_ArduinoSTM32.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/platform/OneWireNg_ArduinoSAM.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/platform/Platform_FlashMem.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/platform/OneWireNg_ArduinoAVR.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/platform/OneWireNg_ArduinoESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/platform/Platform_New.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/platform/OneWireNg_ArduinoESP8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src/platform/Platform_TimeCritical.h"
)

target_include_directories(onewireng INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OneWireNg/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(onewireng INTERFACE
    arduino-compat
)
