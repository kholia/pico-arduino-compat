add_library(sparkfun-wt2003s-mp3-decoder-library INTERFACE)

target_sources(sparkfun-wt2003s-mp3-decoder-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_WT2003S_MP3_Decoder_Arduino_Library/src/SparkFun_WT2003S_MP3_Decoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_WT2003S_MP3_Decoder_Arduino_Library/src/SparkFun_WT2003S_MP3_Decoder.h"
)

target_include_directories(sparkfun-wt2003s-mp3-decoder-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_WT2003S_MP3_Decoder_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-wt2003s-mp3-decoder-library INTERFACE
    arduino-compat
)
