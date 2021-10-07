add_library(pac-debugger INTERFACE)

target_sources(pac-debugger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Debugger/Debugger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Debugger/Debugger.h"
)

target_include_directories(pac-debugger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Debugger"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-debugger INTERFACE
    arduino-compat
)
