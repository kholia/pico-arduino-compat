add_library(pac-fix_fft INTERFACE)

target_sources(pac-fix_fft INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/fix_fft/src/fix_fft.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/fix_fft/src/fix_fft.h"
)

target_include_directories(pac-fix_fft INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/fix_fft/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fix_fft INTERFACE
    arduino-compat
)
