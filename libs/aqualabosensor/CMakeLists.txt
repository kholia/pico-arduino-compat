add_library(aqualabosensor INTERFACE)

target_sources(aqualabosensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AqualaboSensorsLibrary/src/ModbusMasterFP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AqualaboSensorsLibrary/src/AqualaboSensors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AqualaboSensorsLibrary/src/ModbusMasterFP.h"
  "${CMAKE_CURRENT_LIST_DIR}/AqualaboSensorsLibrary/src/AqualaboSensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/AqualaboSensorsLibrary/src/util/crc16.h"
  "${CMAKE_CURRENT_LIST_DIR}/AqualaboSensorsLibrary/src/util/FP.h"
  "${CMAKE_CURRENT_LIST_DIR}/AqualaboSensorsLibrary/src/util/word.h"
)

target_include_directories(aqualabosensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AqualaboSensorsLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(aqualabosensor INTERFACE
    arduino-compat
)
