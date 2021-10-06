add_library(low-level-quick-digital-io INTERFACE)

target_sources(low-level-quick-digital-io INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Low-level-quick-digital-IO/src/LowLevelQuickDigitalIO.h"
)

target_include_directories(low-level-quick-digital-io INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Low-level-quick-digital-IO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(low-level-quick-digital-io INTERFACE
    arduino-compat
)
