add_library(pac-zmpt101b INTERFACE)

target_sources(pac-zmpt101b INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZMPT101B-arduino/src/ZMPT101B.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ZMPT101B-arduino/src/ZMPT101B.h"
)

target_include_directories(pac-zmpt101b INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZMPT101B-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zmpt101b INTERFACE
    arduino-compat
)
