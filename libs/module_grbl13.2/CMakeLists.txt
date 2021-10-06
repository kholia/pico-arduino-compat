add_library(module_grbl13.2 INTERFACE)

target_sources(module_grbl13.2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MODULE_GRBL13.2/src/MODULE_GRBL13.2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MODULE_GRBL13.2/src/MODULE_GRBL13.2.h"
)

target_include_directories(module_grbl13.2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MODULE_GRBL13.2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(module_grbl13.2 INTERFACE
    arduino-compat
)
