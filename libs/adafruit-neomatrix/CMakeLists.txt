add_library(adafruit-neomatrix INTERFACE)

target_sources(adafruit-neomatrix INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix/Adafruit_NeoMatrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix/extras/gamma.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix/gamma.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix/Adafruit_NeoMatrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix/examples/MatrixGFXDemo/smileytongue24.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix/examples/MatrixGFXDemo/yellowsmiley24.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix/examples/MatrixGFXDemo/linux32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix/examples/MatrixGFXDemo/heart24.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix/examples/MatrixGFXDemo/bluesmiley24.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix/examples/MatrixGFXDemo/google32.h"
)

target_include_directories(adafruit-neomatrix INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoMatrix"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(adafruit-neomatrix INTERFACE
    arduino-compat
    adafruit-gfx-library
)
