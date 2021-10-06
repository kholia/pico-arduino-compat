add_library(z80 INTERFACE)

target_sources(z80 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Z80Mega/src/Z80.c"
  "${CMAKE_CURRENT_LIST_DIR}/Z80Mega/src/CodesXCB.h"
  "${CMAKE_CURRENT_LIST_DIR}/Z80Mega/src/Z80.h"
  "${CMAKE_CURRENT_LIST_DIR}/Z80Mega/src/Tables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Z80Mega/src/CodesCB.h"
  "${CMAKE_CURRENT_LIST_DIR}/Z80Mega/src/CodesED.h"
  "${CMAKE_CURRENT_LIST_DIR}/Z80Mega/src/Codes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Z80Mega/src/CodesXX.h"
)

target_include_directories(z80 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Z80Mega/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(z80 INTERFACE
    arduino-compat
)
