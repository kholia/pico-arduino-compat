add_library(pac-spiflash_lowpowerlab INTERFACE)

target_sources(pac-spiflash_lowpowerlab INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPIFlash/SPIFlash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPIFlash/SPIFlash.h"
)

target_include_directories(pac-spiflash_lowpowerlab INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPIFlash"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spiflash_lowpowerlab INTERFACE
    arduino-compat
)
