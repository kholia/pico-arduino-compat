add_library(esp-logger INTERFACE)

target_sources(esp-logger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger_spiffs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger_sd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger_routine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger_routine.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger_sd.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src/logger_spiffs.h"
)

target_include_directories(esp-logger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp-logger-lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(esp-logger INTERFACE
    arduino-compat
    official-sd
)
