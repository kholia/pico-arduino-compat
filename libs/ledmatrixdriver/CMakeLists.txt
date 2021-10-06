add_library(ledmatrixdriver INTERFACE)

target_sources(ledmatrixdriver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LEDMatrixDriver/src/LEDMatrixDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LEDMatrixDriver/src/LEDMatrixDriver.hpp"
)

target_include_directories(ledmatrixdriver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LEDMatrixDriver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(ledmatrixdriver INTERFACE
    arduino-compat
    adafruit-gfx-library
)
