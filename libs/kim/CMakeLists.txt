add_library(pac-kim INTERFACE)

target_sources(pac-kim INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKim/src/KIM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKim/src/KIM.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKim/examples/Example_KIM_Wifi/index.h"
)

target_include_directories(pac-kim INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoKim/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kim INTERFACE
    arduino-compat
)
