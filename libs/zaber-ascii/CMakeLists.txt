add_library(pac-zaber-ascii INTERFACE)

target_sources(pac-zaber-ascii INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/zaber-ascii-for-arduino/ZaberShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zaber-ascii-for-arduino/ZaberAscii.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zaber-ascii-for-arduino/ZaberShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/zaber-ascii-for-arduino/ZaberAscii.h"
)

target_include_directories(pac-zaber-ascii INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/zaber-ascii-for-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zaber-ascii INTERFACE
    arduino-compat
)
