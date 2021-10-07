add_library(pac-astromech INTERFACE)

target_sources(pac-astromech INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AstroMech/dev/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AstroMech/src/Decoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AstroMech/src/arduinoFFT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AstroMech/src/AstroMech.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AstroMech/src/RS-FEC.h"
  "${CMAKE_CURRENT_LIST_DIR}/AstroMech/src/defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/AstroMech/src/Decoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/AstroMech/src/types.h"
  "${CMAKE_CURRENT_LIST_DIR}/AstroMech/src/arduinoFFT.h"
  "${CMAKE_CURRENT_LIST_DIR}/AstroMech/src/AstroMech.h"
)

target_include_directories(pac-astromech INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AstroMech/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-astromech INTERFACE
    arduino-compat
)
