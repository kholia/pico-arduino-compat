add_library(pac-beaconnano INTERFACE)

target_sources(pac-beaconnano INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BeaconNano/src/BeaconNano.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BeaconNano/src/BeaconNano.h"
)

target_include_directories(pac-beaconnano INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BeaconNano/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-beaconnano INTERFACE
    arduino-compat
)
