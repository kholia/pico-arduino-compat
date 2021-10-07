add_library(pac-arduboyplaytune INTERFACE)

target_sources(pac-arduboyplaytune INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduboyPlaytune/src/ArduboyPlaytune.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduboyPlaytune/src/ArduboyPlaytune.h"
)

target_include_directories(pac-arduboyplaytune INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduboyPlaytune/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduboyplaytune INTERFACE
    arduino-compat
)
