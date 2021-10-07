add_library(pac-arduinofritzapi INTERFACE)

target_sources(pac-arduinofritzapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoFritzApi/src/ArduinoFritzApi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoFritzApi/src/ArduinoFritzApi.h"
)

target_include_directories(pac-arduinofritzapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoFritzApi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinofritzapi INTERFACE
    arduino-compat
)
