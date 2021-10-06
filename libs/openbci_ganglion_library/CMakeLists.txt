add_library(openbci_ganglion_library INTERFACE)

target_sources(openbci_ganglion_library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_Ganglion_Library/OpenBCI_Ganglion_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_Ganglion_Library/Honor A Loved One.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_Ganglion_Library/Definitions_Ganglion.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_Ganglion_Library/OpenBCI_Ganglion_Library.h"
)

target_include_directories(openbci_ganglion_library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_Ganglion_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(openbci_ganglion_library INTERFACE
    arduino-compat
)
