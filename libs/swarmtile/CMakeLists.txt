add_library(pac-swarmtile INTERFACE)

target_sources(pac-swarmtile INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SwarmTile/extras/test/test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SwarmTile/extras/test/SerialEmu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SwarmTile/extras/test/Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SwarmTile/extras/test/TileEmu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SwarmTile/src/SwarmTile.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SwarmTile/extras/test/munit/munit.c"
  "${CMAKE_CURRENT_LIST_DIR}/SwarmTile/extras/test/SerialEmu.h"
  "${CMAKE_CURRENT_LIST_DIR}/SwarmTile/extras/test/Print.h"
  "${CMAKE_CURRENT_LIST_DIR}/SwarmTile/extras/test/TileEmu.h"
  "${CMAKE_CURRENT_LIST_DIR}/SwarmTile/extras/test/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/SwarmTile/extras/test/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SwarmTile/extras/test/munit/munit.h"
  "${CMAKE_CURRENT_LIST_DIR}/SwarmTile/src/SwarmTile.h"
)

target_include_directories(pac-swarmtile INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SwarmTile/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-swarmtile INTERFACE
    arduino-compat
)
