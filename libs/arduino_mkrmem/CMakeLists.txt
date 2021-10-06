add_library(arduino_mkrmem INTERFACE)

target_sources(arduino_mkrmem INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/Arduino_SPIFFS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/Arduino_SPIFFS_File.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/Arduino_SPIFFS_DirectoryEntry.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/Arduino_SPIFFS_Directory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/Arduino_W25Q16DV.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/spiffs_gc.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/spiffs_cache.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/spiffs_hydrogen.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/spiffs_nucleus.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/spiffs_check.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/Arduino_SPIFFS_Directory.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/spiffs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/spiffs_nucleus.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/Arduino_SPIFFS_File.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/Arduino_W25Q16DV.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/Arduino_SPIFFS_DirectoryEntry.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/Arduino_MKRMEM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/spiffs_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src/Arduino_SPIFFS.h"
)

target_include_directories(arduino_mkrmem INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRMEM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino_mkrmem INTERFACE
    arduino-compat
)
