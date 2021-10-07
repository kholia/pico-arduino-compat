add_library(pac-coordinates INTERFACE)

target_sources(pac-coordinates INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/coordinates/src/Coordinates.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/coordinates/src/Coordinates.h"
)

target_include_directories(pac-coordinates INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/coordinates/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-coordinates INTERFACE
    arduino-compat
)
