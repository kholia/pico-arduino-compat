add_library(pac-asyncdelay INTERFACE)

target_sources(pac-asyncdelay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDelay/src/AsyncDelay.h"
)

target_include_directories(pac-asyncdelay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AsyncDelay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-asyncdelay INTERFACE
    arduino-compat
)
