add_library(roverwing INTERFACE)

target_sources(roverwing INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RoverWingLibrary/RoverWing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RoverWingLibrary/RoverWingTop.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RoverWingLibrary/RoverWing.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoverWingLibrary/regmap.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoverWingLibrary/RoverWingTop.h"
)

target_include_directories(roverwing INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RoverWingLibrary"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(roverwing INTERFACE
    arduino-compat
)
