add_library(pac-roverwing INTERFACE)

target_sources(pac-roverwing INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RoverWingLibrary/RoverWing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RoverWingLibrary/RoverWingTop.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RoverWingLibrary/RoverWing.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoverWingLibrary/regmap.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoverWingLibrary/RoverWingTop.h"
)

target_include_directories(pac-roverwing INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RoverWingLibrary"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-roverwing INTERFACE
    arduino-compat
)
