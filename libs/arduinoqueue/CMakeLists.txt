add_library(pac-arduinoqueue INTERFACE)

target_sources(pac-arduinoqueue INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoQueue/test/test_performance.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoQueue/test/test_IntQueue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoQueue/ArduinoQueue.h"
)

target_include_directories(pac-arduinoqueue INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoQueue"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinoqueue INTERFACE
    arduino-compat
)
