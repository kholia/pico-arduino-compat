add_library(morseduino INTERFACE)

target_sources(morseduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MorsDuino/src/MorsDuino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MorsDuino/src/MorsDuino.h"
)

target_include_directories(morseduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MorsDuino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(morseduino INTERFACE
    arduino-compat
)
