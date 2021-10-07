add_library(pac-udebuglib INTERFACE)

target_sources(pac-udebuglib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uDebugLib/src/uDebugLib.h"
)

target_include_directories(pac-udebuglib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uDebugLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-udebuglib INTERFACE
    arduino-compat
)
