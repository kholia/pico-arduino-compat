add_library(adafruit-neomatrix-zerodma-library INTERFACE)

target_sources(adafruit-neomatrix-zerodma-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix_ZeroDMA/Adafruit_NeoMatrix_ZeroDMA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix_ZeroDMA/extras/gamma.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix_ZeroDMA/gamma.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix_ZeroDMA/Adafruit_NeoMatrix_ZeroDMA.h"
)

target_include_directories(adafruit-neomatrix-zerodma-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix_ZeroDMA"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(adafruit-neomatrix-zerodma-library INTERFACE
    arduino-compat
    adafruit-gfx-library
)
