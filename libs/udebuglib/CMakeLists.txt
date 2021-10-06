add_library(udebuglib INTERFACE)

target_sources(udebuglib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uDebugLib/src/uDebugLib.h"
)

target_include_directories(udebuglib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uDebugLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(udebuglib INTERFACE
    arduino-compat
)
