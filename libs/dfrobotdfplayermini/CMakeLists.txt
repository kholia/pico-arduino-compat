add_library(pac-dfrobotdfplayermini INTERFACE)

target_sources(pac-dfrobotdfplayermini INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DFRobotDFPlayerMini/DFRobotDFPlayerMini.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFRobotDFPlayerMini/DFRobotDFPlayerMini.h"
)

target_include_directories(pac-dfrobotdfplayermini INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DFRobotDFPlayerMini"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dfrobotdfplayermini INTERFACE
    arduino-compat
)
