add_library(pac-fabrik2d INTERFACE)

target_sources(pac-fabrik2d INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Fabrik2DArduino/src/FABRIK2D.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Fabrik2DArduino/src/FABRIK2D.h"
)

target_include_directories(pac-fabrik2d INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Fabrik2DArduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabrik2d INTERFACE
    arduino-compat
)
