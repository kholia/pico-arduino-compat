add_library(gifdecoder INTERFACE)

target_sources(gifdecoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/examples/SmartMatrixGifProfiling/FilenameFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/examples/SmartMatrixGifPlayer/FilenameFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/src/GifDecoder_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/src/GifDecoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/examples/SmartMatrixGifProfiling/FilenameFunctions.h"
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/examples/SmartMatrixGifMemory/homer_tiny.h"
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/examples/SmartMatrixGifMemory/badgers.h"
  "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/examples/SmartMatrixGifPlayer/FilenameFunctions.h"
)

target_include_directories(gifdecoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GifDecoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(gifdecoder INTERFACE
    arduino-compat
    official-sd
)
