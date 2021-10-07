add_library(pac-gifdecoder INTERFACE)

target_sources(pac-gifdecoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/examples/SmartMatrixGifProfiling/FilenameFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/examples/SmartMatrixGifPlayer/FilenameFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/src/GifDecoder_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/src/GifDecoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/examples/SmartMatrixGifProfiling/FilenameFunctions.h"
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/examples/SmartMatrixGifMemory/homer_tiny.h"
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/examples/SmartMatrixGifMemory/badgers.h"
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/examples/SmartMatrixGifPlayer/FilenameFunctions.h"
)

target_include_directories(pac-gifdecoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-gifdecoder INTERFACE
    arduino-compat
    pac-sd
)
