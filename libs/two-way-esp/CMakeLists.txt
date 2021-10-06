add_library(two-way-esp INTERFACE)

target_sources(two-way-esp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TwoWayESP/src/TwoWayESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TwoWayESP/src/TwoWayESP.h"
)

target_include_directories(two-way-esp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TwoWayESP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(two-way-esp INTERFACE
    arduino-compat
)
