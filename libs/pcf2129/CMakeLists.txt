add_library(pcf2129 INTERFACE)

target_sources(pcf2129 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCF2129/PCF2129.h"
)

target_include_directories(pcf2129 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCF2129"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pcf2129 INTERFACE
    arduino-compat
)
