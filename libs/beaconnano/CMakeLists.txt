add_library(beaconnano INTERFACE)

target_sources(beaconnano INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BeaconNano/src/BeaconNano.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BeaconNano/src/BeaconNano.h"
)

target_include_directories(beaconnano INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BeaconNano/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(beaconnano INTERFACE
    arduino-compat
)
