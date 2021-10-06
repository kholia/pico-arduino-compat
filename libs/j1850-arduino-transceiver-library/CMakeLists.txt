add_library(j1850-arduino-transceiver-library INTERFACE)

target_sources(j1850-arduino-transceiver-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/J1850-Arduino-Transceiver-Library/PwmTransceiver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/J1850-Arduino-Transceiver-Library/PwmTransceiver.h"
)

target_include_directories(j1850-arduino-transceiver-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/J1850-Arduino-Transceiver-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(j1850-arduino-transceiver-library INTERFACE
    arduino-compat
)
