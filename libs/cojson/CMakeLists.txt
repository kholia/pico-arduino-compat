add_library(pac-cojson INTERFACE)

target_sources(pac-cojson INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/cojson_libdep.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/cojson.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/platforms/avr/chartypetable_progmem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/platforms/avr/cojson_progmem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/platforms/avr/avrcppfix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/platforms/avr/elemental_progmem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/platforms/shared/chartypetable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/elemental.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/cojson_helpers.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/ccs.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/enumnames.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/nameof.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/cojson_autos.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/cojson_stdlib.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/cojson.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/cojson_float.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/wchar.h"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/cojson.h"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/configuration.h"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/bits/c++0x_warning.h"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/bits/c++config.h"
  "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src/platforms/avr/configuration.h"
)

target_include_directories(pac-cojson INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/cojson.lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cojson INTERFACE
    arduino-compat
)
