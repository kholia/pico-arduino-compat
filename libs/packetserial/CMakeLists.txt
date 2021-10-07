add_library(pac-packetserial INTERFACE)

target_sources(pac-packetserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PacketSerial/src/PacketSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/PacketSerial/src/Encoding/SLIP.h"
  "${CMAKE_CURRENT_LIST_DIR}/PacketSerial/src/Encoding/COBS.h"
)

target_include_directories(pac-packetserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PacketSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-packetserial INTERFACE
    arduino-compat
)
