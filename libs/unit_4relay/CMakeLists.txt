add_library(pac-unit_4relay INTERFACE)

target_sources(pac-unit_4relay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UNIT_4RELAY/src/UNIT_4RELAY.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UNIT_4RELAY/src/UNIT_4RELAY.h"
)

target_include_directories(pac-unit_4relay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UNIT_4RELAY/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-unit_4relay INTERFACE
    arduino-compat
)
