add_library(pac-articulatedlib INTERFACE)

target_sources(pac-articulatedlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Articulated/src/ArticulatedTriangle2D.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Articulated/src/ArticulatedTriangle3D.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Articulated/src/ArticulatedQuadrilateral2D.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Articulated/src/ArticulatedQuadrilateral3D.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Articulated/src/TrigUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Articulated/src/ArticulatedQuadrilateral3D.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Articulated/src/Point2D.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Articulated/src/Point3D.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Articulated/src/ArticulatedTriangle3D.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Articulated/src/ArticulatedQuadrilateral2D.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Articulated/src/ArticulatedTriangle2D.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Articulated/src/TrigUtils.h"
)

target_include_directories(pac-articulatedlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Articulated/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-articulatedlib INTERFACE
    arduino-compat
)
