add_library(kickfft INTERFACE)

target_sources(kickfft INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/kickfft/KickFFT.h"
)

target_include_directories(kickfft INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/kickfft"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(kickfft INTERFACE
    arduino-compat
)
