add_library(octofet INTERFACE)

target_sources(octofet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Octofet/src/Octofet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Octofet/src/spi2parallel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Octofet/src/Octofet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Octofet/src/spi2parallel.h"
)

target_include_directories(octofet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Octofet/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(octofet INTERFACE
    arduino-compat
)
