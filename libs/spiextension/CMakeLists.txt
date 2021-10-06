add_library(spiextension INTERFACE)

target_sources(spiextension INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPIExtension/RingBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPIExtension/SPIExtension.h"
)

target_include_directories(spiextension INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPIExtension"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(spiextension INTERFACE
    arduino-compat
)
