add_library(plotter INTERFACE)

target_sources(plotter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-plotter/src/Plotter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-plotter/src/Plotter.h"
)

target_include_directories(plotter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-plotter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(plotter INTERFACE
    arduino-compat
)
