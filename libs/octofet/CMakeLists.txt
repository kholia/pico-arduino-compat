add_library(pac-octofet INTERFACE)

target_sources(pac-octofet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Octofet/src/Octofet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Octofet/src/spi2parallel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Octofet/src/Octofet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Octofet/src/spi2parallel.h"
)

target_include_directories(pac-octofet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Octofet/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-octofet INTERFACE
    arduino-compat
)
