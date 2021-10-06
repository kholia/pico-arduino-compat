add_library(xinput INTERFACE)

target_sources(xinput INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoXInput/src/XInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoXInput/src/XInput.h"
)

target_include_directories(xinput INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoXInput/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xinput INTERFACE
    arduino-compat
)
