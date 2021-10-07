add_library(pac-geekble_oscillator INTERFACE)

target_sources(pac-geekble_oscillator INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Geekble_Oscillator/src/Geekble_Oscillator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Geekble_Oscillator/src/Geekble_Oscillator.h"
)

target_include_directories(pac-geekble_oscillator INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Geekble_Oscillator/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-geekble_oscillator INTERFACE
    arduino-compat
)
