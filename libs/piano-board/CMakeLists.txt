add_library(piano-board INTERFACE)

target_sources(piano-board INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoPianoBoard/src/PianoKeys.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoPianoBoard/src/PianoKeys.h"
)

target_include_directories(piano-board INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoPianoBoard/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(piano-board INTERFACE
    arduino-compat
)
