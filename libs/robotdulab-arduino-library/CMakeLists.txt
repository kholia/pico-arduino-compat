add_library(robotdulab-arduino-library INTERFACE)

target_sources(robotdulab-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RobotDuLAB-arduino-library/src/RobotDuLAB.h"
)

target_include_directories(robotdulab-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RobotDuLAB-arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(robotdulab-arduino-library INTERFACE
    arduino-compat
)
