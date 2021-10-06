add_library(fabrik2d INTERFACE)

target_sources(fabrik2d INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Fabrik2DArduino/src/FABRIK2D.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Fabrik2DArduino/src/FABRIK2D.h"
)

target_include_directories(fabrik2d INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Fabrik2DArduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fabrik2d INTERFACE
    arduino-compat
)
