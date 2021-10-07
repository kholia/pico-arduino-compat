add_library(pac-flightsimswitches INTERFACE)

target_sources(pac-flightsimswitches INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FlightSimSwitches/src/FlightSimSwitches.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlightSimSwitches/src/FlightSimSwitches.h"
)

target_include_directories(pac-flightsimswitches INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FlightSimSwitches/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-flightsimswitches INTERFACE
    arduino-compat
)
