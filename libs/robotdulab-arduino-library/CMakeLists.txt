add_library(pac-robotdulab-arduino-library INTERFACE)

target_sources(pac-robotdulab-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RobotDuLAB-arduino-library/src/RobotDuLAB.h"
)

target_include_directories(pac-robotdulab-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RobotDuLAB-arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-robotdulab-arduino-library INTERFACE
    arduino-compat
)
