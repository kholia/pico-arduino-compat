add_library(pac-helium INTERFACE)

target_sources(pac-helium INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/src/HeliumUtil.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/src/Helium.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/src/helium-client/helium-client.c"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/src/helium-client/cauterize/cauterize.c"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/src/helium-client/cauterize/atom_api.c"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/src/helium-client/cauterize/config_api.c"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/src/Helium.h"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/src/HeliumUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/src/helium-client/helium-client-error.h"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/src/helium-client/helium-client.h"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/src/helium-client/cauterize/config_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/src/helium-client/cauterize/cauterize.h"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/src/helium-client/cauterize/atom_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/examples/Basic/Board.h"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/examples/Template/Board.h"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/examples/Downlink/Board.h"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/examples/Soil_Humidity/Board.h"
  "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/examples/Config/Board.h"
)

target_include_directories(pac-helium INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/helium-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-helium INTERFACE
    arduino-compat
)
