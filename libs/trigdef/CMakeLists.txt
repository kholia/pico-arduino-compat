add_library(pac-trigdef INTERFACE)

target_sources(pac-trigdef INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TrigDef/TrigDef.h"
)

target_include_directories(pac-trigdef INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TrigDef"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-trigdef INTERFACE
    arduino-compat
)
