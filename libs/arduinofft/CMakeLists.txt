add_library(arduinofft INTERFACE)

target_sources(arduinofft INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduinoFFT/src/arduinoFFT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoFFT/src/defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoFFT/src/types.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoFFT/src/arduinoFFT.h"
)

target_include_directories(arduinofft INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduinoFFT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinofft INTERFACE
    arduino-compat
)
