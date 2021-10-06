add_library(sqlite3-for-esp8266 INTERFACE)

target_sources(sqlite3-for-esp8266 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src/vfs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src/spiffs_fns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src/sdfat_fns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src/esp8266.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src/shox96_0_2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src/sqlite3.c"
  "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src/sdfat_fns.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src/sqlite3.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src/vfs.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src/sqlite3ext.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src/spiffs_fns.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src/shox96_0_2.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src/config_ext.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src/vfs_int.h"
)

target_include_directories(sqlite3-for-esp8266 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp_arduino_sqlite3_lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sqlite3-for-esp8266 INTERFACE
    arduino-compat
)
