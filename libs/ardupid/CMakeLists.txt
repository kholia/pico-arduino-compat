add_library(ardupid INTERFACE)

target_sources(ardupid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduPID/src/ArduPID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduPID/src/ArduPID.h"
)

target_include_directories(ardupid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduPID/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ardupid INTERFACE
    arduino-compat
)
