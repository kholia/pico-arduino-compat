add_library(pac-microtone INTERFACE)

target_sources(pac-microtone INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MicroTone/src/MicroTone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MicroTone/src/MicroTone.h"
)

target_include_directories(pac-microtone INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MicroTone/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-microtone INTERFACE
    arduino-compat
)
