add_library(pac-ephemeris INTERFACE)

target_sources(pac-ephemeris INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ephemeris/Ephemeris.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ephemeris/Calendar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ephemeris/examples/PolarisFinder/PolarisFinder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ephemeris/ELP2000.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ephemeris/VSOP87.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ephemeris/Calendar.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ephemeris/Ephemeris.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ephemeris/examples/PolarisFinder/PolarisFinder.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ephemeris/Ephemeris.h"
)

target_include_directories(pac-ephemeris INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ephemeris"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-ephemeris INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
