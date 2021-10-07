add_library(pac-smart-motor-driver-sami INTERFACE)

target_sources(pac-smart-motor-driver-sami INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Smart-Motor-Driver-SAMI-Library/SAMI_2BRobots.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Smart-Motor-Driver-SAMI-Library/SAMI_2BRobots.h"
)

target_include_directories(pac-smart-motor-driver-sami INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Smart-Motor-Driver-SAMI-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-smart-motor-driver-sami INTERFACE
    arduino-compat
)
