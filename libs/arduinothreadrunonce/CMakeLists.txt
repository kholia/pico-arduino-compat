add_library(pac-arduinothreadrunonce INTERFACE)

target_sources(pac-arduinothreadrunonce INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThreadRunOnce/ThreadRunOnce.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThreadRunOnce/ThreadRunOnce.h"
)

target_include_directories(pac-arduinothreadrunonce INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoThreadRunOnce"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinothreadrunonce INTERFACE
    arduino-compat
)
