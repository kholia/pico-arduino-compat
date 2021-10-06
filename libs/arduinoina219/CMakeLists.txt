add_library(arduinoina219 INTERFACE)

target_sources(arduinoina219 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoINA219/INA219.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoINA219/INA219.h"
)

target_include_directories(arduinoina219 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoINA219"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinoina219 INTERFACE
    arduino-compat
)
