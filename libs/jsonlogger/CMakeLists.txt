add_library(pac-jsonlogger INTERFACE)

target_sources(pac-jsonlogger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/JsonLogger/src/Logger.c"
  "${CMAKE_CURRENT_LIST_DIR}/JsonLogger/src/Builder.c"
  "${CMAKE_CURRENT_LIST_DIR}/JsonLogger/src/JsonLogger.h"
)

target_include_directories(pac-jsonlogger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/JsonLogger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-jsonlogger INTERFACE
    arduino-compat
)
