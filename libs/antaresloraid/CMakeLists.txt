add_library(pac-antaresloraid INTERFACE)

target_sources(pac-antaresloraid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/Commands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/Encrypt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/Conversions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/LoRaMAC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/RFM95.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/AES-128.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/loraid-arduino-rfm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/loraid.h"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/AES-128.h"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/Commands.h"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/loraid-arduino-rfm.h"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/LoRaMAC.h"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/Encrypt.h"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/Conversions.h"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/RFM95.h"
  "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src/arduino-rfm/Struct.h"
)

target_include_directories(pac-antaresloraid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/lorawan-loraid/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-antaresloraid INTERFACE
    arduino-compat
)
