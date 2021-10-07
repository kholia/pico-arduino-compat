add_library(pac-rakwireless-tle7259-lin-bus-library INTERFACE)

target_sources(pac-rakwireless-tle7259-lin-bus-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RAK13005-TLE7259-Library/src/lin_bus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RAK13005-TLE7259-Library/src/lin_bus.h"
)

target_include_directories(pac-rakwireless-tle7259-lin-bus-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RAK13005-TLE7259-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rakwireless-tle7259-lin-bus-library INTERFACE
    arduino-compat
)
