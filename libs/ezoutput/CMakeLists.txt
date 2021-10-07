add_library(pac-ezoutput INTERFACE)

target_sources(pac-ezoutput INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/output/src/ezOutput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/output/src/ezOutput.h"
)

target_include_directories(pac-ezoutput INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/output/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ezoutput INTERFACE
    arduino-compat
)
