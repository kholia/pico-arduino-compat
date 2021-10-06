add_library(vector-datatype INTERFACE)

target_sources(vector-datatype INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/vector_datatype/src/quaternion_type.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vector_datatype/src/vector_type.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vector_datatype/src/vector_type.h"
  "${CMAKE_CURRENT_LIST_DIR}/vector_datatype/src/quaternion_type.h"
)

target_include_directories(vector-datatype INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/vector_datatype/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vector-datatype INTERFACE
    arduino-compat
)
