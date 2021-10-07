add_library(pac-fft INTERFACE)

target_sources(pac-fft INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FFT/src/fft.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FFT/src/fft.h"
)

target_include_directories(pac-fft INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FFT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fft INTERFACE
    arduino-compat
)
