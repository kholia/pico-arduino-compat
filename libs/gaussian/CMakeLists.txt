add_library(gaussian INTERFACE)

target_sources(gaussian INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Gaussian/Gaussian.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gaussian/GaussianAverage.h"
)

target_include_directories(gaussian INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Gaussian"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gaussian INTERFACE
    arduino-compat
)
