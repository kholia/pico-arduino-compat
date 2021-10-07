add_library(pac-morseduino INTERFACE)

target_sources(pac-morseduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MorsDuino/src/MorsDuino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorsDuino/src/MorsDuino.h"
)

target_include_directories(pac-morseduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MorsDuino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-morseduino INTERFACE
    arduino-compat
)
