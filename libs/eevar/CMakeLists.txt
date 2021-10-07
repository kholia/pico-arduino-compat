add_library(pac-eevar INTERFACE)

target_sources(pac-eevar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EEvar/src/EEvar.h"
  "${CMAKE_CURRENT_LIST_DIR}/EEvar/src/EEPROMallocator.h"
)

target_include_directories(pac-eevar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EEvar/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-eevar INTERFACE
    arduino-compat
)
