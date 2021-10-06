add_library(shutters INTERFACE)

target_sources(shutters INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-shutters/src/Shutters.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-shutters/src/Shutters/StoredState.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-shutters/src/ShuttersOperation.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-shutters/src/Shutters/StoredState.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-shutters/src/Shutters.h"
)

target_include_directories(shutters INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-shutters/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(shutters INTERFACE
    arduino-compat
)
