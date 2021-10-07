add_library(pac-streamdebugger INTERFACE)

target_sources(pac-streamdebugger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StreamDebugger/StreamDebugger.h"
)

target_include_directories(pac-streamdebugger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StreamDebugger"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-streamdebugger INTERFACE
    arduino-compat
)
