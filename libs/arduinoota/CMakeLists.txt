add_library(pac-arduinoota INTERFACE)

target_sources(pac-arduinoota INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/src/InternalStorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/src/InternalStorageAVR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/src/WiFiOTA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/src/InternalStorageESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/src/OTAStorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/src/OTAStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/src/InternalStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/src/ArduinoOTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/src/SDStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/src/InternalStorageAVR.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/src/WiFiOTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/src/SerialFlashStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/src/InternalStorageESP.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/src/utility/optiboot.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/examples/WiFi101_SD_OTA/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/examples/WiFi101_OTA/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/examples/Advanced/OTASketchDownloadWifi/arduino_secrets.h"
)

target_include_directories(pac-arduinoota INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoOTA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-arduinoota INTERFACE
    arduino-compat
    pac-sd
)
