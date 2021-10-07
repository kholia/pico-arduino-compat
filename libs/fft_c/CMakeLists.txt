add_library(pac-fft_c INTERFACE)

target_sources(pac-fft_c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FFT_C/src/FFT_C.h"
)

target_include_directories(pac-fft_c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FFT_C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fft_c INTERFACE
    arduino-compat
)
