add_library(losant-mqtt-arduino INTERFACE)

target_sources(losant-mqtt-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/losant-mqtt-arduino/src/internal/LosantDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/losant-mqtt-arduino/src/Losant.h"
  "${CMAKE_CURRENT_LIST_DIR}/losant-mqtt-arduino/src/internal/LosantCommand.h"
  "${CMAKE_CURRENT_LIST_DIR}/losant-mqtt-arduino/src/internal/LosantDevice.h"
)

target_include_directories(losant-mqtt-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/losant-mqtt-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(losant-mqtt-arduino INTERFACE
    arduino-compat
)
