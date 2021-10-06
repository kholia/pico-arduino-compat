add_library(adafruit-waveplayer-library INTERFACE)

target_sources(adafruit-waveplayer-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_WavePlayer/Adafruit_WavePlayer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_WavePlayer/Adafruit_WavePlayer.h"
)

target_include_directories(adafruit-waveplayer-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_WavePlayer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-waveplayer-library INTERFACE
    arduino-compat
)
