add_library(pololuledstrip INTERFACE)

target_sources(pololuledstrip INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pololu-led-strip-arduino/PololuLedStrip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-led-strip-arduino/PololuLedStrip.h"
)

target_include_directories(pololuledstrip INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pololu-led-strip-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pololuledstrip INTERFACE
    arduino-compat
)
