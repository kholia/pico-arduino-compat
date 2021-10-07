add_library(pac-sony9pinremote INTERFACE)

target_sources(pac-sony9pinremote INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sony9PinRemote/Sony9PinRemote.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sony9PinRemote/Sony9PinRemote/Response.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sony9PinRemote/Sony9PinRemote/Types.h"
)

target_include_directories(pac-sony9pinremote INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sony9PinRemote"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sony9pinremote INTERFACE
    arduino-compat
)
