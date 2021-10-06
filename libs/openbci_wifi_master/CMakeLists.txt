add_library(openbci_wifi_master INTERFACE)

target_sources(openbci_wifi_master INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_Wifi_Master_Library/OpenBCI_Wifi_Master.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_Wifi_Master_Library/OpenBCI_Wifi_Master.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_Wifi_Master_Library/OpenBCI_Wifi_Master_Definitions.h"
)

target_include_directories(openbci_wifi_master INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_Wifi_Master_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(openbci_wifi_master INTERFACE
    arduino-compat
)
