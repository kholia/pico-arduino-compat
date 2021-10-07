add_library(pac-arduinouniqueid INTERFACE)

target_sources(pac-arduinouniqueid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniqueID/src/ArduinoUniqueID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniqueID/src/ArduinoUniqueID.h"
)

target_include_directories(pac-arduinouniqueid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniqueID/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinouniqueid INTERFACE
    arduino-compat
)
