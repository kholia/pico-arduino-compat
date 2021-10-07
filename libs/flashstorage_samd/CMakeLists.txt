add_library(pac-flashstorage_samd INTERFACE)

target_sources(pac-flashstorage_samd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_SAMD/Packages_Patches/Seeeduino/hardware/samd/1.8.1/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_SAMD/Packages_Patches/Seeeduino/hardware/samd/1.7.8/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_SAMD/Packages_Patches/Seeeduino/hardware/samd/1.7.7/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_SAMD/Packages_Patches/Seeeduino/hardware/samd/1.7.9/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_SAMD/Packages_Patches/arduino/hardware/samd/1.8.6/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_SAMD/Packages_Patches/arduino/hardware/samd/1.8.9/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_SAMD/Packages_Patches/arduino/hardware/samd/1.8.8/cores/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_SAMD/Packages_Patches/arduino/hardware/samd/1.8.8/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_SAMD/Packages_Patches/arduino/hardware/samd/1.8.7/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_SAMD/src/FlashStorage_SAMD21.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_SAMD/src/FlashAsEEPROM_SAMD.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_SAMD/src/FlashStorage_SAMD51.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_SAMD/src/FlashAsEEPROM_SAMD_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_SAMD/src/FlashStorage_SAMD.h"
)

target_include_directories(pac-flashstorage_samd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_SAMD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-flashstorage_samd INTERFACE
    arduino-compat
)
