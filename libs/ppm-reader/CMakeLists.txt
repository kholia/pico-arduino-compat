add_library(ppm-reader INTERFACE)

target_sources(ppm-reader INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PPM-reader/src/PPMReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PPM-reader/src/PPMReader.h"
)

target_include_directories(ppm-reader INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PPM-reader/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ppm-reader INTERFACE
    arduino-compat
)
