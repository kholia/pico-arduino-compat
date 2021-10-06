add_library(spritzcipher INTERFACE)

target_sources(spritzcipher INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSpritzCipher/src/SpritzCipher.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSpritzCipher/src/SpritzCipher.h"
)

target_include_directories(spritzcipher INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoSpritzCipher/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(spritzcipher INTERFACE
    arduino-compat
)
