add_library(pac-arduinofft INTERFACE)

target_sources(pac-arduinofft INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduinoFFT/src/arduinoFFT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoFFT/src/defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoFFT/src/types.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoFFT/src/arduinoFFT.h"
)

target_include_directories(pac-arduinofft INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduinoFFT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinofft INTERFACE
    arduino-compat
)
