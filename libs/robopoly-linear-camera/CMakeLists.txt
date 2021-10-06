add_library(robopoly-linear-camera INTERFACE)

target_sources(robopoly-linear-camera INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Robopoly_Linear_Camera/src/LinearCamera.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robopoly_Linear_Camera/src/LinearCamera.h"
)

target_include_directories(robopoly-linear-camera INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Robopoly_Linear_Camera/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(robopoly-linear-camera INTERFACE
    arduino-compat
)
