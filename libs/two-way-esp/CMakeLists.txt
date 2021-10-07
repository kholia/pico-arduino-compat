add_library(pac-two-way-esp INTERFACE)

target_sources(pac-two-way-esp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TwoWayESP/src/TwoWayESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TwoWayESP/src/TwoWayESP.h"
)

target_include_directories(pac-two-way-esp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TwoWayESP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-two-way-esp INTERFACE
    arduino-compat
)
