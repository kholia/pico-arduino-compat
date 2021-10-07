add_library(pac-serialtransfer INTERFACE)

target_sources(pac-serialtransfer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialTransfer/src/SerialTransfer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialTransfer/src/SPITransfer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialTransfer/src/Packet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialTransfer/src/I2CTransfer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialTransfer/src/SPITransfer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialTransfer/src/PacketCRC.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialTransfer/src/SerialTransfer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialTransfer/src/I2CTransfer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialTransfer/src/Packet.h"
)

target_include_directories(pac-serialtransfer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialTransfer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serialtransfer INTERFACE
    arduino-compat
)
