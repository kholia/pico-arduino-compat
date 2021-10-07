add_library(pac-arduboytones INTERFACE)

target_sources(pac-arduboytones INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduboyTones/src/ArduboyTones.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduboyTones/src/ArduboyTonesPitches.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduboyTones/src/ArduboyTones.h"
)

target_include_directories(pac-arduboytones INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduboyTones/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduboytones INTERFACE
    arduino-compat
)
