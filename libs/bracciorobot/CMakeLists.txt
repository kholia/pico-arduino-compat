add_library(pac-bracciorobot INTERFACE)

target_sources(pac-bracciorobot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-braccio-robot/src/Position.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-braccio-robot/src/BraccioRobot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-braccio-robot/src/BraccioRobot.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-braccio-robot/src/Position.h"
)

target_include_directories(pac-bracciorobot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-library-braccio-robot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bracciorobot INTERFACE
    arduino-compat
)
