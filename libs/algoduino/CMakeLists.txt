add_library(pac-algoduino INTERFACE)

target_sources(pac-algoduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/algoduino/Algoduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/algoduino/Algoduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/algoduino/AlgoduinoTypes.h"
)

target_include_directories(pac-algoduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/algoduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-algoduino INTERFACE
    arduino-compat
)
