add_library(pac-dfw INTERFACE)

target_sources(pac-dfw INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DFW/DFW.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFW/examples/DFWRBE1001Template/MyRobot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFW/AbstractDFWRobot.h"
  "${CMAKE_CURRENT_LIST_DIR}/DFW/DFW.h"
  "${CMAKE_CURRENT_LIST_DIR}/DFW/examples/DFWRBE1001Template/MyRobot.h"
)

target_include_directories(pac-dfw INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DFW"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dfw INTERFACE
    arduino-compat
)
