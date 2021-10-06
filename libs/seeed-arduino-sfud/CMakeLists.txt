add_library(seeed-arduino-sfud INTERFACE)

target_sources(seeed-arduino-sfud INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_SFUD/src/Seeed_SFUD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_SFUD/src/Arduino_QSPI_Hal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_SFUD/src/warpper_HAL.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_SFUD/src/sfud.c"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_SFUD/src/sfud_port.c"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_SFUD/src/sfud_sfdp.c"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_SFUD/src/sfud_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_SFUD/src/Seeed_SFUD.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_SFUD/src/sfud_flash_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_SFUD/src/sfud.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_SFUD/src/Arduino_QSPI_Hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_SFUD/src/warpper_HAL.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_SFUD/src/sfud_cfg.h"
)

target_include_directories(seeed-arduino-sfud INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_SFUD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(seeed-arduino-sfud INTERFACE
    arduino-compat
)
