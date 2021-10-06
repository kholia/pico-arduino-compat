add_library(sd INTERFACE)

target_sources(sd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SD/src/SD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SD/src/File.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SD/src/utility/SdVolume.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SD/src/utility/Sd2Card.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SD/src/utility/SdFile.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SD/src/SD.h"
  "${CMAKE_CURRENT_LIST_DIR}/SD/src/utility/SdInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/SD/src/utility/SdFatUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/SD/src/utility/SdFat.h"
  "${CMAKE_CURRENT_LIST_DIR}/SD/src/utility/Sd2PinMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/SD/src/utility/Sd2Card.h"
  "${CMAKE_CURRENT_LIST_DIR}/SD/src/utility/SdFatmainpage.h"
  "${CMAKE_CURRENT_LIST_DIR}/SD/src/utility/FatStructs.h"
)

target_include_directories(sd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(sd INTERFACE
    arduino-compat
    official-sd
)
