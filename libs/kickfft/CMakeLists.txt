add_library(pac-kickfft INTERFACE)

target_sources(pac-kickfft INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/kickfft/KickFFT.h"
)

target_include_directories(pac-kickfft INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/kickfft"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kickfft INTERFACE
    arduino-compat
)
