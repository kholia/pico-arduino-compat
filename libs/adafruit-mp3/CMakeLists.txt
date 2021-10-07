add_library(pac-adafruit-mp3 INTERFACE)

target_sources(pac-adafruit-mp3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/Adafruit_MP3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/buffers.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/hufftabs.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/mp3dec.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/dqchan.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/dct32.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/bitstream.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/subband.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/stproc.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/imdct.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/dequant.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/mp3tabs.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/polyphase.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/huffman.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/trigtabs.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/scalfact.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/examples/standalone/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/assembly.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/mpadecobjfixpt.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/Adafruit_MP3.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/mp3dec.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/statname.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/coder.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src/mp3common.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/examples/DMA_play_from_header/sine.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/examples/play_from_header/sine.h"
)

target_include_directories(pac-adafruit-mp3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MP3/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-mp3 INTERFACE
    arduino-compat
)
