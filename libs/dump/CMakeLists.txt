add_library(dump INTERFACE)

target_sources(dump INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Dump/src/Dump.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dump/src/Dump.h"
)

target_include_directories(dump INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Dump/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dump INTERFACE
    arduino-compat
)
