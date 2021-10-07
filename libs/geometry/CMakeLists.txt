add_library(pac-geometry INTERFACE)

target_sources(pac-geometry INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Geometry/Geometry.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Geometry/OtherRotations.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Geometry/test/test_rotations.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Geometry/test/test_geometry.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Geometry/test/test_examples.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Geometry/examples/PoseGraph/PoseGraph.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Geometry/examples/InverseDynamics/InverseDynamics.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Geometry/OtherRotations.h"
  "${CMAKE_CURRENT_LIST_DIR}/Geometry/Geometry.h"
  "${CMAKE_CURRENT_LIST_DIR}/Geometry/test/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Geometry/examples/PoseGraph/PoseGraph.h"
  "${CMAKE_CURRENT_LIST_DIR}/Geometry/examples/InverseDynamics/InverseDynamics.h"
)

target_include_directories(pac-geometry INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Geometry"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-geometry INTERFACE
    arduino-compat
)
