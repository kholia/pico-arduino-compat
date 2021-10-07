add_library(pac-arduinovnc INTERFACE)

target_sources(pac-arduinovnc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduinoVNC/src/VNC_RA8875.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoVNC/src/VNC_ILI9341.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoVNC/src/VNC_ST7789.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoVNC/src/VNC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoVNC/src/frameBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoVNC/src/d3des.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoVNC/src/d3des.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoVNC/src/VNC.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoVNC/src/VNC_RA8875.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoVNC/src/VNC_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoVNC/src/rfbproto.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoVNC/src/VNC_ST7789.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoVNC/src/VNC_ILI9341.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoVNC/src/frameBuffer.h"
)

target_include_directories(pac-arduinovnc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduinoVNC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinovnc INTERFACE
    arduino-compat
)
