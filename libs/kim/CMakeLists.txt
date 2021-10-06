add_library(kim INTERFACE)

target_sources(kim INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKim/src/KIM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKim/src/KIM.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKim/examples/Example_KIM_Wifi/index.h"
)

target_include_directories(kim INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoKim/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(kim INTERFACE
    arduino-compat
)
