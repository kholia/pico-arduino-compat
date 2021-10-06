add_library(fed3 INTERFACE)

target_sources(fed3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FED3_library/src/FED3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FED3_library/src/FED3.h"
)

target_include_directories(fed3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FED3_library/src"
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

target_link_libraries(fed3 INTERFACE
    arduino-compat
    adafruit-gfx-library
    adafruit-busio
)
