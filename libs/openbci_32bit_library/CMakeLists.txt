add_library(pac-openbci_32bit_library INTERFACE)

target_sources(pac-openbci_32bit_library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_Library/OpenBCI_32bit_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_Library/OpenBCI_32bit_Library.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_Library/OpenBCI_32bit_Library_Definitions.h"
)

target_include_directories(pac-openbci_32bit_library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-openbci_32bit_library INTERFACE
    arduino-compat
)
