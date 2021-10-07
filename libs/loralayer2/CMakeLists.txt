add_library(pac-loralayer2 INTERFACE)

target_sources(pac-loralayer2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LoRaLayer2/src/Layer1_LoRa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaLayer2/src/Layer1_SX1276.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaLayer2/src/Layer1_Sim.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaLayer2/src/packetBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaLayer2/src/LoRaLayer2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaLayer2/src/LoRaLayer2.h"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaLayer2/src/packetBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaLayer2/src/Layer1_Sim.h"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaLayer2/src/Layer1_LoRa.h"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaLayer2/src/Layer1_SX1276.h"
)

target_include_directories(pac-loralayer2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LoRaLayer2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-loralayer2 INTERFACE
    arduino-compat
)
