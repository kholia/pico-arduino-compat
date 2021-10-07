add_library(pac-dfrobot_rtu INTERFACE)

target_sources(pac-dfrobot_rtu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DFRobot_RTU/src/DFRobot_RTU.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFRobot_RTU/src/DFRobot_RTU.h"
)

target_include_directories(pac-dfrobot_rtu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DFRobot_RTU/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dfrobot_rtu INTERFACE
    arduino-compat
)
