add_library(spiflash_lowpowerlab INTERFACE)

target_sources(spiflash_lowpowerlab INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPIFlash/SPIFlash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPIFlash/SPIFlash.h"
)

target_include_directories(spiflash_lowpowerlab INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPIFlash"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(spiflash_lowpowerlab INTERFACE
    arduino-compat
)
