add_library(arduino_debugutils INTERFACE)

target_sources(arduino_debugutils INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_DebugUtils/src/Arduino_DebugUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_DebugUtils/src/Arduino_DebugUtils.h"
)

target_include_directories(arduino_debugutils INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_DebugUtils/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino_debugutils INTERFACE
    arduino-compat
)
