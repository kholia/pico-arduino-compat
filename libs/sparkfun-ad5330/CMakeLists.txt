add_library(pac-sparkfun-ad5330 INTERFACE)

target_sources(pac-sparkfun-ad5330 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AD5330_Breakout_Arduino_Library/examples/AD5330_SD_WAV_Playback/applet/AD5330_SD_WAV_Playback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AD5330_Breakout_Arduino_Library/examples/AD5330_Tone/applet/AD5330_Tone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AD5330_Breakout_Arduino_Library/src/byteordering.c"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AD5330_Breakout_Arduino_Library/src/sd_raw.c"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AD5330_Breakout_Arduino_Library/src/fat.c"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AD5330_Breakout_Arduino_Library/src/partition.c"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AD5330_Breakout_Arduino_Library/src/partition.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AD5330_Breakout_Arduino_Library/src/sd_raw.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AD5330_Breakout_Arduino_Library/src/sd_raw_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AD5330_Breakout_Arduino_Library/src/partition_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AD5330_Breakout_Arduino_Library/src/fat.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AD5330_Breakout_Arduino_Library/src/byteordering.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AD5330_Breakout_Arduino_Library/src/sd-reader_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AD5330_Breakout_Arduino_Library/src/fat_config.h"
)

target_include_directories(pac-sparkfun-ad5330 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AD5330_Breakout_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-ad5330 INTERFACE
    arduino-compat
)
