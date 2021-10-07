add_library(pac-spiextension INTERFACE)

target_sources(pac-spiextension INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPIExtension/RingBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPIExtension/SPIExtension.h"
)

target_include_directories(pac-spiextension INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPIExtension"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spiextension INTERFACE
    arduino-compat
)
