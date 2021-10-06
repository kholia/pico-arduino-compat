add_library(ppmencoder INTERFACE)

target_sources(ppmencoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PPMEncoder/src/PPMEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PPMEncoder/src/PPMEncoder.h"
)

target_include_directories(ppmencoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PPMEncoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ppmencoder INTERFACE
    arduino-compat
)
