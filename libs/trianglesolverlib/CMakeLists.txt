add_library(pac-trianglesolverlib INTERFACE)

target_sources(pac-trianglesolverlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-TriangleSolver/src/TriangleSolverLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-TriangleSolver/src/TriangleSolverLib.h"
)

target_include_directories(pac-trianglesolverlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-TriangleSolver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-trianglesolverlib INTERFACE
    arduino-compat
)
