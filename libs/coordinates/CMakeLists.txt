add_library(coordinates INTERFACE)

target_sources(coordinates INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/coordinates/src/Coordinates.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/coordinates/src/Coordinates.h"
)

target_include_directories(coordinates INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/coordinates/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(coordinates INTERFACE
    arduino-compat
)
