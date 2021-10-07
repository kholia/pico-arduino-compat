add_library(pac-necdecoder INTERFACE)

target_sources(pac-necdecoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NecDecoder/src/NecDecoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NecDecoder/src/NecEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/NecDecoder/src/NecDecoder.h"
)

target_include_directories(pac-necdecoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NecDecoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-necdecoder INTERFACE
    arduino-compat
)
