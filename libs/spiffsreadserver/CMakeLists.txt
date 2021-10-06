add_library(spiffsreadserver INTERFACE)

target_sources(spiffsreadserver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPIFFSReadServer/SPIFFSReadServer.h"
)

target_include_directories(spiffsreadserver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPIFFSReadServer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(spiffsreadserver INTERFACE
    arduino-compat
)
