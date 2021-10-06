add_library(adafruit-sharp-memory-display INTERFACE)

target_sources(adafruit-sharp-memory-display INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHARP_Memory_Display/Adafruit_SharpMem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHARP_Memory_Display/Adafruit_SharpMem.h"
)

target_include_directories(adafruit-sharp-memory-display INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHARP_Memory_Display"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-sharp-memory-display INTERFACE
    arduino-compat
    adafruit-gfx-library
    adafruit-busio
)
