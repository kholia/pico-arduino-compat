add_library(arduino-timer INTERFACE)

target_sources(arduino-timer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-timer/src/timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-timer/src/arduino-timer.h"
)

target_include_directories(arduino-timer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-timer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino-timer INTERFACE
    arduino-compat
)
