add_library(pac-extendedtouchevent INTERFACE)

target_sources(pac-extendedtouchevent INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/test/test_ete.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/test/Mock_Adafruit_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/test/Mock_XPT2046_Touchscreen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/src/ExtendedTouchEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/include/ExtendedTouchEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/test/Mock_Adafruit_GFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/test/Mock_XPT2046_Touchscreen.h"
)

target_include_directories(pac-extendedtouchevent INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-extendedtouchevent INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
