add_library(adafruit-composite-video-library INTERFACE)

target_sources(adafruit-composite-video-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CompositeVideo/Adafruit_CompositeVideo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CompositeVideo/Adafruit_CompositeVideo.h"
)

target_include_directories(adafruit-composite-video-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CompositeVideo"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(adafruit-composite-video-library INTERFACE
    arduino-compat
    adafruit-gfx-library
)
