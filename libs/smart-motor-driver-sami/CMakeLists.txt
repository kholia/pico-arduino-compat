add_library(smart-motor-driver-sami INTERFACE)

target_sources(smart-motor-driver-sami INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Smart-Motor-Driver-SAMI-Library/SAMI_2BRobots.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Smart-Motor-Driver-SAMI-Library/SAMI_2BRobots.h"
)

target_include_directories(smart-motor-driver-sami INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Smart-Motor-Driver-SAMI-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(smart-motor-driver-sami INTERFACE
    arduino-compat
)
