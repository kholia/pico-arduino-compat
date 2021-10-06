add_library(streamdebugger INTERFACE)

target_sources(streamdebugger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StreamDebugger/StreamDebugger.h"
)

target_include_directories(streamdebugger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StreamDebugger"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(streamdebugger INTERFACE
    arduino-compat
)
