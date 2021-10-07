add_library(pac-icm7218 INTERFACE)

target_sources(pac-icm7218 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ICM7218/src/ICM7218.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ICM7218/src/ICM7218.h"
)

target_include_directories(pac-icm7218 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ICM7218/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-icm7218 INTERFACE
    arduino-compat
)
