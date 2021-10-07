add_library(pac-arduinolearningkitstarter INTERFACE)

target_sources(pac-arduinolearningkitstarter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningKitStarter-library/src/ALKS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningKitStarter-library/src/LearningKit.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningKitStarter-library/src/ALKS.h"
)

target_include_directories(pac-arduinolearningkitstarter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoLearningKitStarter-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinolearningkitstarter INTERFACE
    arduino-compat
)
