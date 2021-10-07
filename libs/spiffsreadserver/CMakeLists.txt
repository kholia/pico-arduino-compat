add_library(pac-spiffsreadserver INTERFACE)

target_sources(pac-spiffsreadserver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPIFFSReadServer/SPIFFSReadServer.h"
)

target_include_directories(pac-spiffsreadserver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPIFFSReadServer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spiffsreadserver INTERFACE
    arduino-compat
)
