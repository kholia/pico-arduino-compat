add_library(pac-sqlite3esp32 INTERFACE)

target_sources(pac-sqlite3esp32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp32_arduino_sqlite3_lib/src/esp32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_arduino_sqlite3_lib/src/shox96_0_2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_arduino_sqlite3_lib/src/sqlite3.c"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_arduino_sqlite3_lib/src/unishox1.c"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_arduino_sqlite3_lib/src/sqlite3.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_arduino_sqlite3_lib/src/unishox1.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_arduino_sqlite3_lib/src/shox96_0_2.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_arduino_sqlite3_lib/src/config_ext.h"
)

target_include_directories(pac-sqlite3esp32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp32_arduino_sqlite3_lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sqlite3esp32 INTERFACE
    arduino-compat
)
