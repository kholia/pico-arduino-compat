add_library(pac-pololubuzzer INTERFACE)

target_sources(pac-pololubuzzer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pololu-buzzer-arduino/src/PololuBuzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-buzzer-arduino/src/PololuBuzzer.h"
)

target_include_directories(pac-pololubuzzer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pololu-buzzer-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pololubuzzer INTERFACE
    arduino-compat
)
