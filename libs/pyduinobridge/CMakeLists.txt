add_library(pac-pyduinobridge INTERFACE)

target_sources(pac-pyduinobridge INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PyDuinoBridge/src/pyduino_bridge.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PyDuinoBridge/src/pyduino_bridge.h"
)

target_include_directories(pac-pyduinobridge INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PyDuinoBridge/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pyduinobridge INTERFACE
    arduino-compat
)
