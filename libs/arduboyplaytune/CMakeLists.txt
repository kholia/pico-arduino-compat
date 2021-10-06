add_library(arduboyplaytune INTERFACE)

target_sources(arduboyplaytune INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduboyPlaytune/src/ArduboyPlaytune.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduboyPlaytune/src/ArduboyPlaytune.h"
)

target_include_directories(arduboyplaytune INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduboyPlaytune/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduboyplaytune INTERFACE
    arduino-compat
)
