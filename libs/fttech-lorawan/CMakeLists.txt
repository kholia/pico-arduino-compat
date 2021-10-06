add_library(fttech-lorawan INTERFACE)

target_sources(fttech-lorawan INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FTTech-LoRaWAN/src/FTTech_LoRaWAN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FTTech-LoRaWAN/src/FTTech_LoRaWAN.h"
)

target_include_directories(fttech-lorawan INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FTTech-LoRaWAN/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fttech-lorawan INTERFACE
    arduino-compat
)
