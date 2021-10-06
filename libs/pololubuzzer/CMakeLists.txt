add_library(pololubuzzer INTERFACE)

target_sources(pololubuzzer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pololu-buzzer-arduino/src/PololuBuzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-buzzer-arduino/src/PololuBuzzer.h"
)

target_include_directories(pololubuzzer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pololu-buzzer-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pololubuzzer INTERFACE
    arduino-compat
)
