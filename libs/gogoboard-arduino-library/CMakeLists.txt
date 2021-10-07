add_library(pac-gogoboard-arduino-library INTERFACE)

target_sources(pac-gogoboard-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GoGoBoard-Arduino/src/GoGoBoardArduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GoGoBoard-Arduino/src/GoGoBoardArduino.h"
)

target_include_directories(pac-gogoboard-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GoGoBoard-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gogoboard-arduino-library INTERFACE
    arduino-compat
)
