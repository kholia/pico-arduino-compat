add_library(pac-vidorperipherals INTERFACE)

target_sources(pac-vidorperipherals INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorMailbox.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorI2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/Vidor_NeoPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorSPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorUART.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorJTAG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorFPGA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/utility/jtag_host.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/utility/tap.c"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorI2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorUART.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/Vidor_NeoPixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorFPGA.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/common.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorMailbox.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorSPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/signature.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorPeripherals.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/VidorJTAG.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/utility/jtag_host.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src/utility/libxsvf.h"
)

target_include_directories(pac-vidorperipherals INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VidorPeripherals/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vidorperipherals INTERFACE
    arduino-compat
)
