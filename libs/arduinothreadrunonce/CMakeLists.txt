add_library(arduinothreadrunonce INTERFACE)

target_sources(arduinothreadrunonce INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThreadRunOnce/ThreadRunOnce.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThreadRunOnce/ThreadRunOnce.h"
)

target_include_directories(arduinothreadrunonce INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoThreadRunOnce"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinothreadrunonce INTERFACE
    arduino-compat
)
