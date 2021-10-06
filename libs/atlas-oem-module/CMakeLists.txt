add_library(atlas-oem-module INTERFACE)

target_sources(atlas-oem-module INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/atlas_OEM/src/StabilityDetector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/atlas_OEM/src/EC_OEM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/atlas_OEM/src/DO_OEM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/atlas_OEM/src/EC_OEM.h"
  "${CMAKE_CURRENT_LIST_DIR}/atlas_OEM/src/AtlasOEM_basic.h"
  "${CMAKE_CURRENT_LIST_DIR}/atlas_OEM/src/DO_OEM.h"
  "${CMAKE_CURRENT_LIST_DIR}/atlas_OEM/src/StabilityDetector.h"
)

target_include_directories(atlas-oem-module INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/atlas_OEM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(atlas-oem-module INTERFACE
    arduino-compat
)
