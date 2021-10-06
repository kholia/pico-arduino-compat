add_library(aprs-is-lib INTERFACE)

target_sources(aprs-is-lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/APRS-IS-Lib/src/APRS-IS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/APRS-IS-Lib/src/APRS-IS.h"
  "${CMAKE_CURRENT_LIST_DIR}/APRS-IS-Lib/examples/simple_fixed_position/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/APRS-IS-Lib/examples/decoder/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/APRS-IS-Lib/examples/simple_aprs/settings.h"
)

target_include_directories(aprs-is-lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/APRS-IS-Lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(aprs-is-lib INTERFACE
    arduino-compat
)
