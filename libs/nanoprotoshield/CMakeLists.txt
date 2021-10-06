add_library(nanoprotoshield INTERFACE)

target_sources(nanoprotoshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NanoProtoShield/src/NanoProtoShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoProtoShield/src/NanoProtoShield.h"
)

target_include_directories(nanoprotoshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NanoProtoShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(nanoprotoshield INTERFACE
    arduino-compat
    adafruit-gfx-library
)
