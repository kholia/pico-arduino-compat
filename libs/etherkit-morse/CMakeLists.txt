add_library(pac-etherkit-morse INTERFACE)

target_sources(pac-etherkit-morse INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MorseArduino/src/Morse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorseArduino/src/Morse.h"
  "${CMAKE_CURRENT_LIST_DIR}/MorseArduino/src/morsechar.h"
)

target_include_directories(pac-etherkit-morse INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MorseArduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-etherkit-morse INTERFACE
    arduino-compat
)
