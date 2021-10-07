add_library(pac-nanoprotoshield INTERFACE)

target_sources(pac-nanoprotoshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NanoProtoShield/src/NanoProtoShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoProtoShield/src/NanoProtoShield.h"
)

target_include_directories(pac-nanoprotoshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NanoProtoShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-nanoprotoshield INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
