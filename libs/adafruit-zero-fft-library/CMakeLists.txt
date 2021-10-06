add_library(adafruit-zero-fft-library INTERFACE)

target_sources(adafruit-zero-fft-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroFFT/arm_common_tables.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroFFT/fftwindows.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroFFT/fftutil.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroFFT/arm_common_tables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroFFT/Adafruit_ZeroFFT.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroFFT/examples/fft_test/signal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroFFT/examples/normalized/signal.h"
)

target_include_directories(adafruit-zero-fft-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroFFT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-zero-fft-library INTERFACE
    arduino-compat
)
