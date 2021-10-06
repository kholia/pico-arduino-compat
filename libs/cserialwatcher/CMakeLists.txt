add_library(cserialwatcher INTERFACE)

target_sources(cserialwatcher INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-serial-variable-table/src/cSerialWatcher.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-serial-variable-table/src/cSerialWatcher.h"
)

target_include_directories(cserialwatcher INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-serial-variable-table/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cserialwatcher INTERFACE
    arduino-compat
)
