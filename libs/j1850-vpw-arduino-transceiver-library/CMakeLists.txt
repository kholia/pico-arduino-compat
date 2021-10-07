add_library(pac-j1850-vpw-arduino-transceiver-library INTERFACE)

target_sources(pac-j1850-vpw-arduino-transceiver-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/J1850-VPW-Arduino-Transceiver-Library/src/j1850vpw.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/J1850-VPW-Arduino-Transceiver-Library/src/interrupts.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/J1850-VPW-Arduino-Transceiver-Library/src/storage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/J1850-VPW-Arduino-Transceiver-Library/src/pins.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/J1850-VPW-Arduino-Transceiver-Library/src/j1850vpw.h"
  "${CMAKE_CURRENT_LIST_DIR}/J1850-VPW-Arduino-Transceiver-Library/src/pins.h"
  "${CMAKE_CURRENT_LIST_DIR}/J1850-VPW-Arduino-Transceiver-Library/src/interrupts.h"
  "${CMAKE_CURRENT_LIST_DIR}/J1850-VPW-Arduino-Transceiver-Library/src/common.h"
  "${CMAKE_CURRENT_LIST_DIR}/J1850-VPW-Arduino-Transceiver-Library/src/storage.h"
)

target_include_directories(pac-j1850-vpw-arduino-transceiver-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/J1850-VPW-Arduino-Transceiver-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-j1850-vpw-arduino-transceiver-library INTERFACE
    arduino-compat
)
