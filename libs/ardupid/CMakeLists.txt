add_library(pac-ardupid INTERFACE)

target_sources(pac-ardupid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduPID/src/ArduPID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduPID/src/ArduPID.h"
)

target_include_directories(pac-ardupid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduPID/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ardupid INTERFACE
    arduino-compat
)
