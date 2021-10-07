add_library(pac-ppm-reader INTERFACE)

target_sources(pac-ppm-reader INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PPM-reader/src/PPMReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PPM-reader/src/PPMReader.h"
)

target_include_directories(pac-ppm-reader INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PPM-reader/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ppm-reader INTERFACE
    arduino-compat
)
