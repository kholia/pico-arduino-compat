add_library(oregon INTERFACE)

target_sources(oregon INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Oregon-Library/src/Oregon.h"
)

target_include_directories(oregon INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Oregon-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(oregon INTERFACE
    arduino-compat
)
