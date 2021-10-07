add_library(pac-mkrwan_v2 INTERFACE)

target_sources(pac-mkrwan_v2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN_v2/examples/MKRWANFWUpdate_standalone/stm32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN_v2/examples/MKRWANFWUpdate_standalone/serial_arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN_v2/examples/MKRWANFWUpdate_standalone/dev_table.c"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN_v2/examples/MKRWANFWUpdate_standalone/utils.c"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN_v2/src/MKRWAN_v2.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN_v2/examples/LoraSendAndReceive/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN_v2/examples/MKRWANFWUpdate_standalone/utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN_v2/examples/MKRWANFWUpdate_standalone/stm32.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN_v2/examples/MKRWANFWUpdate_standalone/serial_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN_v2/examples/MKRWANFWUpdate_standalone/fw.h"
)

target_include_directories(pac-mkrwan_v2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MKRWAN_v2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mkrwan_v2 INTERFACE
    arduino-compat
)
