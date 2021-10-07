add_library(pac-rp2040_sd INTERFACE)

target_sources(pac-rp2040_sd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_SD/src/utility/SdVolume.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_SD/src/utility/Sd2Card.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_SD/src/utility/SdFile.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_SD/src/File.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_SD/src/RP2040_SD.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_SD/src/RP2040_SD.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_SD/src/utility/SdInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_SD/src/utility/SdFatUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_SD/src/utility/RP2040_SD_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_SD/src/utility/SdFat.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_SD/src/utility/Sd2PinMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_SD/src/utility/Sd2Card.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_SD/src/utility/FatStructs.h"
)

target_include_directories(pac-rp2040_sd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RP2040_SD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rp2040_sd INTERFACE
    arduino-compat
)
