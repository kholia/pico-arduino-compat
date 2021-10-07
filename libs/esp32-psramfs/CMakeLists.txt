add_library(pac-esp32-psramfs INTERFACE)

target_sources(pac-esp32-psramfs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-PsRamFS/src/PSRamFS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-PsRamFS/src/pfs.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-PsRamFS/examples/esp-idf-psramvfs/main/psramvfs.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-PsRamFS/src/pfs.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-PsRamFS/src/PSRamFS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-PsRamFS/examples/PSRamFS_Test/tests/vfs_pfs_tests.h"
)

target_include_directories(pac-esp32-psramfs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32-PsRamFS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32-psramfs INTERFACE
    arduino-compat
)
