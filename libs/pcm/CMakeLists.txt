add_library(pac-pcm INTERFACE)

target_sources(pac-pcm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCM/PCM.c"
  "${CMAKE_CURRENT_LIST_DIR}/PCM/PCM.h"
)

target_include_directories(pac-pcm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pcm INTERFACE
    arduino-compat
)
