add_library(swarmtile INTERFACE)

target_sources(swarmtile INTERFACE
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

target_include_directories(swarmtile INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SwarmTile/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(swarmtile INTERFACE
    arduino-compat
)
