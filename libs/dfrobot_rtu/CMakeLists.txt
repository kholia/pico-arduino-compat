add_library(dfrobot_rtu INTERFACE)

target_sources(dfrobot_rtu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DFRobot_RTU/src/DFRobot_RTU.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFRobot_RTU/src/DFRobot_RTU.h"
)

target_include_directories(dfrobot_rtu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DFRobot_RTU/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dfrobot_rtu INTERFACE
    arduino-compat
)
