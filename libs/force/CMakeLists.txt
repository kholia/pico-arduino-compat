add_library(pac-force INTERFACE)

target_sources(pac-force INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FORCE_library/src/Force.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FORCE_library/src/Force.h"
)

target_include_directories(pac-force INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FORCE_library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-force INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
