add_library(pac-acewire INTERFACE)

target_sources(pac-acewire INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AceWire/src/AceWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceWire/src/ace_wire/TwoWireInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceWire/src/ace_wire/SimpleWireInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceWire/src/ace_wire/SimpleWireFastInterface.h"
)

target_include_directories(pac-acewire INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AceWire/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-acewire INTERFACE
    arduino-compat
)
