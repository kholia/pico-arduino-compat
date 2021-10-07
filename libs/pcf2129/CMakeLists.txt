add_library(pac-pcf2129 INTERFACE)

target_sources(pac-pcf2129 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCF2129/PCF2129.h"
)

target_include_directories(pac-pcf2129 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCF2129"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pcf2129 INTERFACE
    arduino-compat
)
