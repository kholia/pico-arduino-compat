add_library(pac-esp-logger INTERFACE)

target_sources(pac-esp-logger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger_spiffs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger_sd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger_routine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger_routine.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger_sd.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger_spiffs.h"
)

target_include_directories(pac-esp-logger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-esp-logger INTERFACE
    arduino-compat
    pac-sd
)
