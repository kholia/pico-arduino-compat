add_library(eevar INTERFACE)

target_sources(eevar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EEvar/src/EEvar.h"
  "${CMAKE_CURRENT_LIST_DIR}/EEvar/src/EEPROMallocator.h"
)

target_include_directories(eevar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EEvar/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(eevar INTERFACE
    arduino-compat
)
