add_library(pac-remotedebugger INTERFACE)

target_sources(pac-remotedebugger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebugger/src/RemoteDebugger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebugger/src/utility/Util.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebugger/src/utility/Fields.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebugger/src/RemoteDebugger.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebugger/src/utility/Vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebugger/src/utility/Util.h"
  "${CMAKE_CURRENT_LIST_DIR}/RemoteDebugger/src/utility/Fields.h"
)

target_include_directories(pac-remotedebugger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RemoteDebugger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-remotedebugger INTERFACE
    arduino-compat
)
