add_library(pac-runner INTERFACE)

target_sources(pac-runner INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/runner/src/runner.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/runner/src/streams.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/runner/src/utilsCmd.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/runner/src/runner.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/runner/src/ArduinoCmd.hpp"
)

target_include_directories(pac-runner INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/runner/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-runner INTERFACE
    arduino-compat
)
