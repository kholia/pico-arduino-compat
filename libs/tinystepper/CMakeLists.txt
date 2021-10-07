add_library(pac-tinystepper INTERFACE)

target_sources(pac-tinystepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyStepper/src/TinyStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyStepper/src/TinyStepper.h"
)

target_include_directories(pac-tinystepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinystepper INTERFACE
    arduino-compat
)
