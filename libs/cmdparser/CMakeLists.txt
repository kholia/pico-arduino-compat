add_library(cmdparser INTERFACE)

target_sources(cmdparser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CmdParser/src/CmdBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CmdParser/src/CmdCallback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CmdParser/src/CmdParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CmdParser/src/CmdParser.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/CmdParser/src/CmdBuffer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/CmdParser/src/CmdCallback.hpp"
)

target_include_directories(cmdparser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CmdParser/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cmdparser INTERFACE
    arduino-compat
)
