add_library(dfrobotdfplayermini INTERFACE)

target_sources(dfrobotdfplayermini INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DFRobotDFPlayerMini/DFRobotDFPlayerMini.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFRobotDFPlayerMini/DFRobotDFPlayerMini.h"
)

target_include_directories(dfrobotdfplayermini INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DFRobotDFPlayerMini"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dfrobotdfplayermini INTERFACE
    arduino-compat
)
