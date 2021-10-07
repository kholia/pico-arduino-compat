add_library(pac-cserialwatcher INTERFACE)

target_sources(pac-cserialwatcher INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-serial-variable-table/src/cSerialWatcher.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-serial-variable-table/src/cSerialWatcher.h"
)

target_include_directories(pac-cserialwatcher INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-serial-variable-table/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cserialwatcher INTERFACE
    arduino-compat
)
