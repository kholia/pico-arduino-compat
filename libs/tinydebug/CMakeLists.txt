add_library(pac-tinydebug INTERFACE)

target_sources(pac-tinydebug INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyDebug/src/TinyDebug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyDebug/src/TinyDebug.h"
)

target_include_directories(pac-tinydebug INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyDebug/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinydebug INTERFACE
    arduino-compat
)
