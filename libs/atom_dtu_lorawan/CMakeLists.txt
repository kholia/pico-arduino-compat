add_library(atom_dtu_lorawan INTERFACE)

target_sources(atom_dtu_lorawan INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ATOM_DTU_LoRaWAN/src/ATOM_DTU_LoRaWAN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ATOM_DTU_LoRaWAN/src/ATOM_DTU_LoRaWAN.h"
)

target_include_directories(atom_dtu_lorawan INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ATOM_DTU_LoRaWAN/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(atom_dtu_lorawan INTERFACE
    arduino-compat
)
