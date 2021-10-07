add_library(pac-rocket-scream-rtcavrzero INTERFACE)

target_sources(pac-rocket-scream-rtcavrzero INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RocketScream_RTCAVRZero/src/RocketScream_RTCAVRZero.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RocketScream_RTCAVRZero/src/RocketScream_RTCAVRZero.h"
)

target_include_directories(pac-rocket-scream-rtcavrzero INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RocketScream_RTCAVRZero/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rocket-scream-rtcavrzero INTERFACE
    arduino-compat
)
