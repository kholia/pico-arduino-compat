add_library(pac-adafruit-arcada-gifdecoder INTERFACE)

target_sources(pac-adafruit-arcada-gifdecoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada_GifDecoder/src/LzwDecoder_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada_GifDecoder/src/Arcada_GifDecoder_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada_GifDecoder/src/Arcada_GifDecoder.h"
)

target_include_directories(pac-adafruit-arcada-gifdecoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada_GifDecoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-arcada-gifdecoder INTERFACE
    arduino-compat
)
