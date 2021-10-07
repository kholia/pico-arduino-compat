add_library(pac-gaussian INTERFACE)

target_sources(pac-gaussian INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Gaussian/Gaussian.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gaussian/GaussianAverage.h"
)

target_include_directories(pac-gaussian INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Gaussian"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gaussian INTERFACE
    arduino-compat
)
