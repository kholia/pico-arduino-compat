add_library(pac-autopilot INTERFACE)

target_sources(pac-autopilot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Autopilot/src/Autopilot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Autopilot/src/navigator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Autopilot/src/altitude.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Autopilot/src/heading.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Autopilot/src/ias.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Autopilot/src/roll.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Autopilot/src/pitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Autopilot/src/Autopilot.h"
)

target_include_directories(pac-autopilot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Autopilot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-autopilot INTERFACE
    arduino-compat
)
