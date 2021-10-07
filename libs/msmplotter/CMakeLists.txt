add_library(pac-msmplotter INTERFACE)

target_sources(pac-msmplotter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MSMPLOTTER/src/MSMPLOTTER.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MSMPLOTTER/src/MSMPLOTTER.h"
)

target_include_directories(pac-msmplotter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MSMPLOTTER/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-msmplotter INTERFACE
    arduino-compat
)
