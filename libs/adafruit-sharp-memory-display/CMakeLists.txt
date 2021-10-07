add_library(pac-adafruit-sharp-memory-display INTERFACE)

target_sources(pac-adafruit-sharp-memory-display INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHARP_Memory_Display/Adafruit_SharpMem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHARP_Memory_Display/Adafruit_SharpMem.h"
)

target_include_directories(pac-adafruit-sharp-memory-display INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHARP_Memory_Display"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-sharp-memory-display INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
    pac-adafruit-busio
)
