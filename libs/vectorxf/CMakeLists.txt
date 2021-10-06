add_library(vectorxf INTERFACE)

target_sources(vectorxf INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf/Vec4f.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf/Vec3f.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf/Vec2f.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf.h"
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf/Vec3f.h"
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf/Vec2f.h"
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf/Macro.h"
  "${CMAKE_CURRENT_LIST_DIR}/VectorXf/VectorXf/Vec4f.h"
)

target_include_directories(vectorxf INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VectorXf"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vectorxf INTERFACE
    arduino-compat
)
