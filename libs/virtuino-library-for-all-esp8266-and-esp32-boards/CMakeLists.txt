add_library(pac-virtuino-library-for-all-esp8266-and-esp32-boards INTERFACE)

target_sources(pac-virtuino-library-for-all-esp8266-and-esp32-boards INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/virtuinoESP/Virtuino_ESP_WifiServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtuinoESP/VirtuinoESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtuinoESP/VirtuinoESP.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtuinoESP/Virtuino_ESP_WifiServer.h"
)

target_include_directories(pac-virtuino-library-for-all-esp8266-and-esp32-boards INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/virtuinoESP"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-virtuino-library-for-all-esp8266-and-esp32-boards INTERFACE
    arduino-compat
)
