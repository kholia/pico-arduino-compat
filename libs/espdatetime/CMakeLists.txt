add_library(pac-espdatetime INTERFACE)

target_sources(pac-espdatetime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPDateTime/test/test_date_time.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPDateTime/src/DateTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPDateTime/examples/simple/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPDateTime/test/test_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPDateTime/src/TimeElapsed.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPDateTime/src/DateTimeTZ.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPDateTime/src/ESPDateTime.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPDateTime/src/DateTime.h"
)

target_include_directories(pac-espdatetime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPDateTime/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-espdatetime INTERFACE
    arduino-compat
)
