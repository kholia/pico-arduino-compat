add_library(force INTERFACE)

target_sources(force INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FORCE_library/src/Force.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FORCE_library/src/Force.h"
)

target_include_directories(force INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FORCE_library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(force INTERFACE
    arduino-compat
    adafruit-gfx-library
)
