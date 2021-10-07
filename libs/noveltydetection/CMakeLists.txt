add_library(pac-noveltydetection INTERFACE)

target_sources(pac-noveltydetection INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/noveltyDetection/src/noveltyDetection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/noveltyDetection/src/noveltyDetection.h"
)

target_include_directories(pac-noveltydetection INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/noveltyDetection/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-noveltydetection INTERFACE
    arduino-compat
    pac-sd
)
