add_library(pac-gwiot-7941e INTERFACE)

target_sources(pac-gwiot-7941e INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/gwiot7941e/src/Gwiot7941e.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gwiot7941e/src/Gwiot7941e.h"
)

target_include_directories(pac-gwiot-7941e INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/gwiot7941e/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gwiot-7941e INTERFACE
    arduino-compat
)
