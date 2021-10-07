add_library(pac-twibus INTERFACE)

target_sources(pac-twibus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/src/TwiBus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/PlatformIO/timonel-twim-ss/src/timonel-twim-ss.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/PlatformIO/blink-twi-demo/blink-wires-ino-io/src/blink-wires-ino-io.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/PlatformIO/blink-twi-demo/blink-twim-ino-io/src/blink-twim-ino-io.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/PlatformIO/timonel-twim-ms/src/timonel-twim-ms.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/avr-gcc/avr-blink-twis/avr-blink-twis.c"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/avr-gcc/avr-blink-twis/nb-libs/twis/interrupt-based/nb-usitwisl.c"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/avr-gcc/avr-blink-twis/nb-libs/twis/interrupt-free/nb-usitwisl-if.c"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/src/libconfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/src/TwiBus.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/avr-gcc/avr-blink-twis/avr-blink-twis.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/avr-gcc/avr-blink-twis/nb-libs/twis/interrupt-based/nb-usitwisl.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/avr-gcc/avr-blink-twis/nb-libs/twis/interrupt-free/nb-usitwisl-if.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/avr-gcc/avr-blink-twis/nb-libs/cmd/nb-twi-cmd.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/Arduino/Timonel-TwiM-MS/payload.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/Arduino/Timonel-TwiM-SS/payload.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/PlatformIO/timonel-twim-ss/include/timonel-twim-ss.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/PlatformIO/timonel-twim-ss/data/payloads/payload.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/PlatformIO/blink-twi-demo/blink-wires-ino-io/include/blink-wires-ino-io.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/PlatformIO/blink-twi-demo/blink-twim-ino-io/include/blink-twim-ino-io.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/PlatformIO/timonel-twim-ms/include/timonel-twim-ms.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/examples/PlatformIO/timonel-twim-ms/data/payloads/payload.h"
)

target_include_directories(pac-twibus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Nb_TwiBus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-twibus INTERFACE
    arduino-compat
)
