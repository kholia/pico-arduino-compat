add_library(algoduino INTERFACE)

target_sources(algoduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/algoduino/Algoduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/algoduino/Algoduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/algoduino/AlgoduinoTypes.h"
)

target_include_directories(algoduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/algoduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(algoduino INTERFACE
    arduino-compat
)
