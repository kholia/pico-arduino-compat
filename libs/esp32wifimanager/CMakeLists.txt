add_library(pac-esp32wifimanager INTERFACE)

target_sources(pac-esp32wifimanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Esp32WifiManager/src/wifi/WifiManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Esp32WifiManager/src/Esp32WifiManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/Esp32WifiManager/src/wifi/WifiManager.h"
)

target_include_directories(pac-esp32wifimanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Esp32WifiManager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32wifimanager INTERFACE
    arduino-compat
)
