add_library(serialflash INTERFACE)

target_sources(serialflash INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialFlash/SerialFlashChip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialFlash/SerialFlashDirectory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialFlash/SerialFlash.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialFlash/util/SerialFlash_directwrite.h"
)

target_include_directories(serialflash INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialFlash"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(serialflash INTERFACE
    arduino-compat
)
