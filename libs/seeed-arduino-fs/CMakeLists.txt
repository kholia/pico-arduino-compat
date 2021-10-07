add_library(pac-seeed-arduino-fs INTERFACE)

target_sources(pac-seeed-arduino-fs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/Seeed_FS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/SDMMC/Seeed_SDMMC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/SDMMC/Seeed_SDMMC_Interface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/SD/Seeed_sdcard_hal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/SD/Seeed_SD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/SD/sd_diskio_crc.c"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/fatfs/ccsbcs.c"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/fatfs/diskio.c"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/fatfs/ff.c"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/Seeed_FS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/Seeed_Arduino_FS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/SDMMC/Seeed_SDMMC_Interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/SDMMC/Seeed_SDMMC.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/SD/Seeed_sdcard_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/SD/Seeed_SD.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/fatfs/diskio.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/fatfs/ffconf.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/fatfs/ff.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src/fatfs/integer.h"
)

target_include_directories(pac-seeed-arduino-fs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_FS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-seeed-arduino-fs INTERFACE
    arduino-compat
)
