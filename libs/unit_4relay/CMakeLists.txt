add_library(unit_4relay INTERFACE)

target_sources(unit_4relay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UNIT_4RELAY/src/UNIT_4RELAY.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UNIT_4RELAY/src/UNIT_4RELAY.h"
)

target_include_directories(unit_4relay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UNIT_4RELAY/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(unit_4relay INTERFACE
    arduino-compat
)
