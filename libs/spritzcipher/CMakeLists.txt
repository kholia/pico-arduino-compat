add_library(pac-spritzcipher INTERFACE)

target_sources(pac-spritzcipher INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSpritzCipher/src/SpritzCipher.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSpritzCipher/src/SpritzCipher.h"
)

target_include_directories(pac-spritzcipher INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoSpritzCipher/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spritzcipher INTERFACE
    arduino-compat
)
