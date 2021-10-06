add_library(wire_asukiaaa INTERFACE)

target_sources(wire_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wire/src/wire_asukiaaa_template.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wire/src/wire_asukiaaa.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wire/src/wire_asukiaaa.h"
)

target_include_directories(wire_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-wire/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wire_asukiaaa INTERFACE
    arduino-compat
)
