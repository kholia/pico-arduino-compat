add_library(pac-mma8653 INTERFACE)

target_sources(pac-mma8653 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MMA8653/src/MMA8653.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MMA8653/src/MMA8653.h"
  "${CMAKE_CURRENT_LIST_DIR}/MMA8653/src/wireAdvanced.h"
)

target_include_directories(pac-mma8653 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MMA8653/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mma8653 INTERFACE
    arduino-compat
)
