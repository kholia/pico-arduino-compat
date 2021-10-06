add_library(vidorgraphics INTERFACE)

target_sources(vidorgraphics INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorMailbox.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorI2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/Vidor_NeoPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorSPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorUART.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorJTAG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorCamera.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorFPGA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/Vidor_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/utility/jtag_host.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/utility/tap.c"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorI2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/Vidor_GFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorUART.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/Vidor_NeoPixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorFPGA.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/common.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorMailbox.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorSPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/signature.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorGraphics.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorJTAG.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/VidorCamera.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/utility/jtag_host.h"
  "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src/utility/libxsvf.h"
)

target_include_directories(vidorgraphics INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VidorGraphics/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vidorgraphics INTERFACE
    arduino-compat
)
