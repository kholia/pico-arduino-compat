add_library(mp3player INTERFACE)

target_sources(mp3player INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/SdFatUtil.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/SdFatBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/SdSpiSAM3X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/MinimumSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/SdSpiTeensy3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/SdSpiSTM32F1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/SdSpiCard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/FatVolume.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/StdioStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/FatFileSFN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/istream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/fstream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/FatFileLFN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/FatFile.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/FatFilePrint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/ostream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/FmtNumber.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/src/MP3Player.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/src/TimerOne.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/Configuration file/configfile.c"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/SdVolume.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/SdInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/SdFatConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/SdFatUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/MinimumSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/SdFat.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/SdFatmainpage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/SdSpi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/SdSpiCard.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/examples/AnalogBinLogger/AnalogBinLogger.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/examples/LowLatencyLogger/UserDataType.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/istream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/FmtNumber.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/FatApiConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/DigitalPin.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/ostream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/FatFileSystem.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/FatFile.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/fstream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/bufstream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/StdioStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/FatVolume.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/FatLibConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/SoftSPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/iostream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/FatStructs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/FatLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/ArduinoFiles.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/ios.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/extras/SdFat/utility/ArduinoStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/src/TimerOne.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/src/MP3Player.h"
)

target_include_directories(mp3player INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Cytron_MP3Shield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mp3player INTERFACE
    arduino-compat
)
