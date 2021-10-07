add_library(pac-pcm51xx-dac INTERFACE)

target_sources(pac-pcm51xx-dac INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCM51xx_Arduino/PCM51xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCM51xx_Arduino/PCM51xx.h"
)

target_include_directories(pac-pcm51xx-dac INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCM51xx_Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pcm51xx-dac INTERFACE
    arduino-compat
)
