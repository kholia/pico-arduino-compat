add_library(pac-vectorxf INTERFACE)

target_sources(pac-vectorxf INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf/Vec4f.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf/Vec3f.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf/Vec2f.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf.h"
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf/Vec3f.h"
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf/Vec2f.h"
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf/Macro.h"
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf/Vec4f.h"
)

target_include_directories(pac-vectorxf INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VectorXf"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vectorxf INTERFACE
    arduino-compat
)
