add_library(mrm-robot INTERFACE)

target_sources(mrm-robot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-robot/src/mrm-robot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-robot/src/mrm-action.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-robot/src/mrm-robot.h"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-robot/src/mrm-action.h"
)

target_include_directories(mrm-robot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-robot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mrm-robot INTERFACE
    arduino-compat
)
