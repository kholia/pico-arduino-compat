add_library(msmplotter INTERFACE)

target_sources(msmplotter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MSMPLOTTER/src/MSMPLOTTER.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MSMPLOTTER/src/MSMPLOTTER.h"
)

target_include_directories(msmplotter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MSMPLOTTER/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(msmplotter INTERFACE
    arduino-compat
)
