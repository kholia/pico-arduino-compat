add_library(mkrwan INTERFACE)

target_sources(mkrwan INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN/examples/MKRWANFWUpdate_standalone/stm32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN/examples/MKRWANFWUpdate_standalone/serial_arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN/examples/MKRWANFWUpdate_standalone/dev_table.c"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN/examples/MKRWANFWUpdate_standalone/utils.c"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN/src/MKRWAN.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN/examples/LoraSendAndReceive/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN/examples/MKRWANFWUpdate_standalone/utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN/examples/MKRWANFWUpdate_standalone/stm32.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN/examples/MKRWANFWUpdate_standalone/serial_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRWAN/examples/MKRWANFWUpdate_standalone/fw.h"
)

target_include_directories(mkrwan INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MKRWAN/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mkrwan INTERFACE
    arduino-compat
)
