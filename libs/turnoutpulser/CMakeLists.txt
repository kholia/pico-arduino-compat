add_library(pac-turnoutpulser INTERFACE)

target_sources(pac-turnoutpulser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TurnoutPulser/TurnoutPulser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TurnoutPulser/TurnoutPulser.h"
)

target_include_directories(pac-turnoutpulser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TurnoutPulser"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-turnoutpulser INTERFACE
    arduino-compat
)
