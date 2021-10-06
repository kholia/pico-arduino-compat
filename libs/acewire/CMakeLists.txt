add_library(acewire INTERFACE)

target_sources(acewire INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AceWire/src/AceWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceWire/src/ace_wire/TwoWireInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceWire/src/ace_wire/SimpleWireInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceWire/src/ace_wire/SimpleWireFastInterface.h"
)

target_include_directories(acewire INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AceWire/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(acewire INTERFACE
    arduino-compat
)
