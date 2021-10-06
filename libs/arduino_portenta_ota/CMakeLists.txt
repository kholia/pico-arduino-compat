add_library(arduino_portenta_ota INTERFACE)

target_sources(arduino_portenta_ota INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Portenta_OTA/src/Arduino_Portenta_OTA_SD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Portenta_OTA/src/Arduino_Portenta_OTA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Portenta_OTA/src/Arduino_Portenta_OTA_QSPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Portenta_OTA/src/decompress/lzss.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Portenta_OTA/src/decompress/utility.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Portenta_OTA/src/Arduino_Portenta_OTA_SD.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Portenta_OTA/src/Arduino_Portenta_OTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Portenta_OTA/src/Arduino_Portenta_OTA_QSPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Portenta_OTA/src/decompress/lzss.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Portenta_OTA/examples/OTA_Qspi_Flash/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Portenta_OTA/examples/OTA_SD_Portenta/arduino_secrets.h"
)

target_include_directories(arduino_portenta_ota INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_Portenta_OTA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino_portenta_ota INTERFACE
    arduino-compat
)
