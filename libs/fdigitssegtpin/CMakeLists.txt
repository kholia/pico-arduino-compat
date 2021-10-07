add_library(pac-fdigitssegtpin INTERFACE)

target_sources(pac-fdigitssegtpin INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/fDigitsSegtPin/src/fDigitsSegtPin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/fDigitsSegtPin/src/ver.h"
  "${CMAKE_CURRENT_LIST_DIR}/fDigitsSegtPin/src/fDigitsSegtPin.h"
)

target_include_directories(pac-fdigitssegtpin INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/fDigitsSegtPin/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fdigitssegtpin INTERFACE
    arduino-compat
)
