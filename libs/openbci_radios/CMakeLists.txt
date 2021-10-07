add_library(pac-openbci_radios INTERFACE)

target_sources(pac-openbci_radios INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_Radios/OpenBCI_Radios.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_Radios/OpenBCI_Radios_Definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_Radios/OpenBCI_Radios.h"
)

target_include_directories(pac-openbci_radios INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_Radios"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-openbci_radios INTERFACE
    arduino-compat
)
