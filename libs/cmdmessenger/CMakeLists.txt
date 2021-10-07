add_library(pac-cmdmessenger INTERFACE)

target_sources(pac-cmdmessenger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CmdMessenger/CmdMessenger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CmdMessenger/utility/DoEvery.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CmdMessenger/utility/HeaterSim.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CmdMessenger/CmdMessenger.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CmdMessenger/utility/HeaterSim.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CmdMessenger/utility/DoEvery.h"
)

target_include_directories(pac-cmdmessenger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-CmdMessenger"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cmdmessenger INTERFACE
    arduino-compat
)
