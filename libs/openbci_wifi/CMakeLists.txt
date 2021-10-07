add_library(pac-openbci_wifi INTERFACE)

target_sources(pac-openbci_wifi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_WIFI/src/OpenBCI_Wifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_WIFI/src/OpenBCI_Wifi.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_WIFI/src/WiFiClientPrint.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_WIFI/src/WiFiClientPrintSmall.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_WIFI/src/OpenBCI_Wifi_Definitions.h"
)

target_include_directories(pac-openbci_wifi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_WIFI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-openbci_wifi INTERFACE
    arduino-compat
)
