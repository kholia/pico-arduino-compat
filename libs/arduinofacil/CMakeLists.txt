add_library(arduinofacil INTERFACE)

target_sources(arduinofacil INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoFacil/src/ArduinoFacil.h"
)

target_include_directories(arduinofacil INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoFacil/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinofacil INTERFACE
    arduino-compat
)
