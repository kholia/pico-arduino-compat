add_library(pac-adafruit-neomatrix-zerodma-library INTERFACE)

target_sources(pac-adafruit-neomatrix-zerodma-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix_ZeroDMA/Adafruit_NeoMatrix_ZeroDMA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix_ZeroDMA/extras/gamma.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix_ZeroDMA/gamma.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix_ZeroDMA/Adafruit_NeoMatrix_ZeroDMA.h"
)

target_include_directories(pac-adafruit-neomatrix-zerodma-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix_ZeroDMA"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-adafruit-neomatrix-zerodma-library INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
