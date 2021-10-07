add_library(pac-plotter INTERFACE)

target_sources(pac-plotter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-plotter/src/Plotter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-plotter/src/Plotter.h"
)

target_include_directories(pac-plotter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-plotter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-plotter INTERFACE
    arduino-compat
)
