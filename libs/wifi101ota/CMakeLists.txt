add_library(pac-wifi101ota INTERFACE)

target_sources(pac-wifi101ota INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiFi101OTA/src/InternalStorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi101OTA/src/SDStorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi101OTA/src/WiFi101OTA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi101OTA/src/SerialFlashStorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi101OTA/src/OTAStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi101OTA/src/InternalStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi101OTA/src/SDStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi101OTA/src/WiFi101OTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi101OTA/src/SerialFlashStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi101OTA/examples/WiFi101_SD_OTA/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi101OTA/examples/WiFi101_OTA/arduino_secrets.h"
)

target_include_directories(pac-wifi101ota INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiFi101OTA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-wifi101ota INTERFACE
    arduino-compat
    pac-sd
)
