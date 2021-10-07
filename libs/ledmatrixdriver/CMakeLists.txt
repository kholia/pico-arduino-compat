add_library(pac-ledmatrixdriver INTERFACE)

target_sources(pac-ledmatrixdriver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LEDMatrixDriver/src/LEDMatrixDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LEDMatrixDriver/src/LEDMatrixDriver.hpp"
)

target_include_directories(pac-ledmatrixdriver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LEDMatrixDriver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-ledmatrixdriver INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
