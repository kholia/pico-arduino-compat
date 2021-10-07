add_library(pac-sparkfun-wt2003s-mp3-decoder-library INTERFACE)

target_sources(pac-sparkfun-wt2003s-mp3-decoder-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_WT2003S_MP3_Decoder_Arduino_Library/src/SparkFun_WT2003S_MP3_Decoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_WT2003S_MP3_Decoder_Arduino_Library/src/SparkFun_WT2003S_MP3_Decoder.h"
)

target_include_directories(pac-sparkfun-wt2003s-mp3-decoder-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_WT2003S_MP3_Decoder_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-wt2003s-mp3-decoder-library INTERFACE
    arduino-compat
)
