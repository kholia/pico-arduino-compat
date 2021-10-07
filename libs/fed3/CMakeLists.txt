add_library(pac-fed3 INTERFACE)

target_sources(pac-fed3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FED3_library/src/FED3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FED3_library/src/FED3.h"
)

target_include_directories(pac-fed3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FED3_library/src"
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

target_link_libraries(pac-fed3 INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
    pac-adafruit-busio
)
