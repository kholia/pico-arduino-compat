add_library(pac-log4arduino INTERFACE)

target_sources(pac-log4arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/log4arduino/src/log4arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/log4arduino/src/log4arduino.h"
)

target_include_directories(pac-log4arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/log4arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-log4arduino INTERFACE
    arduino-compat
)
