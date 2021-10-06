add_library(lis3dh-motion-detection INTERFACE)

target_sources(lis3dh-motion-detection INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/lis3dh-motion-detection/src/lis3dh-motion-detection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lis3dh-motion-detection/src/lis3dh-motion-detection.h"
)

target_include_directories(lis3dh-motion-detection INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/lis3dh-motion-detection/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lis3dh-motion-detection INTERFACE
    arduino-compat
)
