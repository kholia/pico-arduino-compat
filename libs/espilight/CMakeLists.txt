add_library(pac-espilight INTERFACE)

target_sources(pac-espilight INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPiLight/src/ESPiLight.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPiLight/src/tools/aprintf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPiLight/src/pilight/libs/pilight/protocols/protocol.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPiLight/src/ESPiLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPiLight/src/tools/aprintf.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPiLight/src/pilight/libs/pilight/protocols/protocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPiLight/src/pilight/libs/pilight/core/gc.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPiLight/src/pilight/libs/pilight/core/log.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPiLight/src/pilight/libs/pilight/core/common.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPiLight/src/pilight/libs/pilight/core/pilight.h"
)

target_include_directories(pac-espilight INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPiLight/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-espilight INTERFACE
    arduino-compat
)
