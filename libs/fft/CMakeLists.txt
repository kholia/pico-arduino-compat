add_library(fft INTERFACE)

target_sources(fft INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FFT/src/fft.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FFT/src/fft.h"
)

target_include_directories(fft INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FFT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fft INTERFACE
    arduino-compat
)
