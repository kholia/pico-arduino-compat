add_library(arduinofritzapi INTERFACE)

target_sources(arduinofritzapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoFritzApi/src/ArduinoFritzApi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoFritzApi/src/ArduinoFritzApi.h"
)

target_include_directories(arduinofritzapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoFritzApi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinofritzapi INTERFACE
    arduino-compat
)
