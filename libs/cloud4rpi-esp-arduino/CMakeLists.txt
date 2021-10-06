add_library(cloud4rpi-esp-arduino INTERFACE)

target_sources(cloud4rpi-esp-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/cloud4rpi-esp-arduino/src/Cloud4RPi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloud4rpi-esp-arduino/src/Cloud4RPiVar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloud4rpi-esp-arduino/src/Cloud4RPiVar.h"
  "${CMAKE_CURRENT_LIST_DIR}/cloud4rpi-esp-arduino/src/Cloud4RPi.h"
)

target_include_directories(cloud4rpi-esp-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/cloud4rpi-esp-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cloud4rpi-esp-arduino INTERFACE
    arduino-compat
)
