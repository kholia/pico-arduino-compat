add_library(zaber-ascii INTERFACE)

target_sources(zaber-ascii INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/zaber-ascii-for-arduino/ZaberShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zaber-ascii-for-arduino/ZaberAscii.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zaber-ascii-for-arduino/ZaberShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/zaber-ascii-for-arduino/ZaberAscii.h"
)

target_include_directories(zaber-ascii INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/zaber-ascii-for-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(zaber-ascii INTERFACE
    arduino-compat
)
