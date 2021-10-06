add_library(espectro INTERFACE)

target_sources(espectro INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EspX/src/DCX_WifiManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspX/src/ESPectro.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspX/src/DCX_Neopixel_Animation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspX/src/DCX_AppSetting.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspX/src/ESPectro_LED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspX/src/ESPectro_Neopixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspX/ArduinoIDESupport/variants/ESPectro/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspX/src/ESPectro_LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspX/src/ESPectro.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspX/src/DCX_Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspX/src/DCX_WifiManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspX/src/ESPectro_Neopixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspX/src/DCX_AppSetting.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspX/src/ESPectro_Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspX/src/DCX_Neopixel_Animation.h"
)

target_include_directories(espectro INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EspX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espectro INTERFACE
    arduino-compat
)
