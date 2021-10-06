add_library(pulserainuartconsole INTERFACE)

target_sources(pulserainuartconsole INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PulseRainUARTConsole/src/PulseRainUARTConsole.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PulseRainUARTConsole/src/PulseRainUARTConsole.h"
)

target_include_directories(pulserainuartconsole INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PulseRainUARTConsole/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pulserainuartconsole INTERFACE
    arduino-compat
)
