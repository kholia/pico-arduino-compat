add_library(zmpt101b INTERFACE)

target_sources(zmpt101b INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZMPT101B-arduino/src/ZMPT101B.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ZMPT101B-arduino/src/ZMPT101B.h"
)

target_include_directories(zmpt101b INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZMPT101B-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(zmpt101b INTERFACE
    arduino-compat
)
