add_library(debugger INTERFACE)

target_sources(debugger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Debugger/Debugger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Debugger/Debugger.h"
)

target_include_directories(debugger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Debugger"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(debugger INTERFACE
    arduino-compat
)
