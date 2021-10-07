add_library(pac-ev3-arduino INTERFACE)

target_sources(pac-ev3-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ev3-arduino/src/EV3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ev3-arduino/src/EV3.h"
)

target_include_directories(pac-ev3-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ev3-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ev3-arduino INTERFACE
    arduino-compat
)
