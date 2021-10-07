add_library(pac-openbci_32bit_sd INTERFACE)

target_sources(pac-openbci_32bit_sd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_SD/OBCI32_SD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_SD/File.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_SD/utility/SdVolume.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_SD/utility/Sd2Card.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_SD/utility/SdFile.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_SD/OBCI32_SD.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_SD/utility/SdInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_SD/utility/SdFatUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_SD/utility/SdFat.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_SD/utility/Sd2PinMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_SD/utility/Sd2Card.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_SD/utility/SdFatmainpage.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_SD/utility/FatStructs.h"
)

target_include_directories(pac-openbci_32bit_sd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OpenBCI_32bit_SD"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-openbci_32bit_sd INTERFACE
    arduino-compat
)
