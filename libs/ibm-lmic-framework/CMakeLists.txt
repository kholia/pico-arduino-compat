add_library(pac-ibm-lmic-framework INTERFACE)

target_sources(pac-ibm-lmic-framework INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lmic/src/hal/hal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lmic/src/aes/ideetron/AES-128_V10.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lmic/src/lmic/oslmic.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lmic/src/lmic/radio.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lmic/src/lmic/lmic.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lmic/src/aes/other.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lmic/src/aes/lmic.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lmic/src/lmic.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lmic/src/hal/hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lmic/src/lmic/oslmic.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lmic/src/lmic/lmic.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lmic/src/lmic/hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lmic/src/lmic/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lmic/src/lmic/lorabase.h"
)

target_include_directories(pac-ibm-lmic-framework INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-lmic/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ibm-lmic-framework INTERFACE
    arduino-compat
)
