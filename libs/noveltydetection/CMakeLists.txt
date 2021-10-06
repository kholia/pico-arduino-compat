add_library(noveltydetection INTERFACE)

target_sources(noveltydetection INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/noveltyDetection/src/noveltyDetection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/noveltyDetection/src/noveltyDetection.h"
)

target_include_directories(noveltydetection INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/noveltyDetection/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(noveltydetection INTERFACE
    arduino-compat
    official-sd
)
