add_library(pac-wavehc INTERFACE)

target_sources(pac-wavehc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WaveHC/SdReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WaveHC/WaveHC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WaveHC/WaveUtil.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WaveHC/FatReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WaveHC/SdInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/WaveHC/ArduinoPins.h"
  "${CMAKE_CURRENT_LIST_DIR}/WaveHC/SdReader.h"
  "${CMAKE_CURRENT_LIST_DIR}/WaveHC/WaveUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/WaveHC/WavePinDefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/WaveHC/FatStructs.h"
  "${CMAKE_CURRENT_LIST_DIR}/WaveHC/mcpDac.h"
  "${CMAKE_CURRENT_LIST_DIR}/WaveHC/FatReader.h"
  "${CMAKE_CURRENT_LIST_DIR}/WaveHC/WaveHC.h"
)

target_include_directories(pac-wavehc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WaveHC"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wavehc INTERFACE
    arduino-compat
)
