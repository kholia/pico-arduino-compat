add_library(extendedtouchevent INTERFACE)

target_sources(extendedtouchevent INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/test/test_ete.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/test/Mock_Adafruit_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/test/Mock_XPT2046_Touchscreen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/src/ExtendedTouchEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/include/ExtendedTouchEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/test/Mock_Adafruit_GFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/test/Mock_XPT2046_Touchscreen.h"
)

target_include_directories(extendedtouchevent INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ExtendedTouchEvent/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(extendedtouchevent INTERFACE
    arduino-compat
    adafruit-gfx-library
)
