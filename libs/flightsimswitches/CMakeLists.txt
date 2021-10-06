add_library(flightsimswitches INTERFACE)

target_sources(flightsimswitches INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FlightSimSwitches/src/FlightSimSwitches.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlightSimSwitches/src/FlightSimSwitches.h"
)

target_include_directories(flightsimswitches INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FlightSimSwitches/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(flightsimswitches INTERFACE
    arduino-compat
)
