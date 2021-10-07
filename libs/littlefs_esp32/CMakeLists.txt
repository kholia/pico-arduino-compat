add_library(pac-littlefs_esp32 INTERFACE)

target_sources(pac-littlefs_esp32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LITTLEFS/src/LITTLEFS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LITTLEFS/examples/LITTLEFS_PlatformIO/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LITTLEFS/src/lfs.c"
  "${CMAKE_CURRENT_LIST_DIR}/LITTLEFS/src/littlefs_api.c"
  "${CMAKE_CURRENT_LIST_DIR}/LITTLEFS/src/esp_littlefs.c"
  "${CMAKE_CURRENT_LIST_DIR}/LITTLEFS/src/lfs_util.c"
  "${CMAKE_CURRENT_LIST_DIR}/LITTLEFS/src/littlefs_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/LITTLEFS/src/LITTLEFS.h"
  "${CMAKE_CURRENT_LIST_DIR}/LITTLEFS/src/lfs_util.h"
  "${CMAKE_CURRENT_LIST_DIR}/LITTLEFS/src/esp_littlefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/LITTLEFS/src/lfs.h"
)

target_include_directories(pac-littlefs_esp32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LITTLEFS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-littlefs_esp32 INTERFACE
    arduino-compat
)
