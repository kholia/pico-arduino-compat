add_library(pac-stivseg INTERFACE)

target_sources(pac-stivseg INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StivSeg/src/StivSeg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StivSeg/src/StivSeg.h"
)

target_include_directories(pac-stivseg INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StivSeg/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stivseg INTERFACE
    arduino-compat
)
