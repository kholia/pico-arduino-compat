add_library(espflash INTERFACE)

target_sources(espflash INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPFlash/src/ESPFlashString.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPFlash/src/ESPFlashCounter.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPFlash/src/ESPFlash.h"
)

target_include_directories(espflash INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPFlash/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espflash INTERFACE
    arduino-compat
)
