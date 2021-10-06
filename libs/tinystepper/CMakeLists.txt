add_library(tinystepper INTERFACE)

target_sources(tinystepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyStepper/src/TinyStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyStepper/src/TinyStepper.h"
)

target_include_directories(tinystepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinystepper INTERFACE
    arduino-compat
)
