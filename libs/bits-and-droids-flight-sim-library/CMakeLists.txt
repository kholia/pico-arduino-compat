add_library(pac-bits-and-droids-flight-sim-library INTERFACE)

target_sources(pac-bits-and-droids-flight-sim-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BitsAndDroidsFlightSimLibrary/BitsAndDroidsFlightConnector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BitsAndDroidsFlightSimLibrary/BitsAndDroidsFlightConnector.h"
)

target_include_directories(pac-bits-and-droids-flight-sim-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BitsAndDroidsFlightSimLibrary"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bits-and-droids-flight-sim-library INTERFACE
    arduino-compat
)
