add_library(pac-troykalight INTERFACE)

target_sources(pac-troykalight INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TroykaLight/src/TroykaLight.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TroykaLight/src/TroykaLight.h"
)

target_include_directories(pac-troykalight INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TroykaLight/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-troykalight INTERFACE
    arduino-compat
)
