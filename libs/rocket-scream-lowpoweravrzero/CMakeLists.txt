add_library(pac-rocket-scream-lowpoweravrzero INTERFACE)

target_sources(pac-rocket-scream-lowpoweravrzero INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RocketScream_LowPowerAVRZero/src/RocketScream_LowPowerAVRZero.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RocketScream_LowPowerAVRZero/src/RocketScream_LowPowerAVRZero.h"
)

target_include_directories(pac-rocket-scream-lowpoweravrzero INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RocketScream_LowPowerAVRZero/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rocket-scream-lowpoweravrzero INTERFACE
    arduino-compat
)
