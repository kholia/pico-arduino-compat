add_library(pac-vector INTERFACE)

target_sources(pac-vector INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Vector/src/Vector/Vector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Vector/examples/PlatformIO/test/test_vector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Vector/examples/PlatformIO/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Vector/src/Vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/Vector/src/Vector/VectorDefinitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/Vector/src/Vector/VectorIterator.h"
)

target_include_directories(pac-vector INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Vector/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vector INTERFACE
    arduino-compat
)
