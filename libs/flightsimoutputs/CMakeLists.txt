add_library(pac-flightsimoutputs INTERFACE)

target_sources(pac-flightsimoutputs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FlightSimOutputs/FlightSimOutputs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlightSimOutputs/src/FlightSimOutputs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlightSimOutputs/FlightSimOutputs.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlightSimOutputs/src/FlightSimOutputs.h"
)

target_include_directories(pac-flightsimoutputs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FlightSimOutputs/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-flightsimoutputs INTERFACE
    arduino-compat
)
