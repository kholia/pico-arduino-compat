add_library(pac-sqlite-micro-logger INTERFACE)

target_sources(pac-sqlite-micro-logger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sqlite_micro_logger_arduino/src/ulog_sqlite.c"
  "${CMAKE_CURRENT_LIST_DIR}/sqlite_micro_logger_arduino/src/ulog_sqlite.h"
)

target_include_directories(pac-sqlite-micro-logger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sqlite_micro_logger_arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sqlite-micro-logger INTERFACE
    arduino-compat
)
