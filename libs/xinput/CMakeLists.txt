add_library(pac-xinput INTERFACE)

target_sources(pac-xinput INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoXInput/src/XInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoXInput/src/XInput.h"
)

target_include_directories(pac-xinput INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoXInput/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xinput INTERFACE
    arduino-compat
)
