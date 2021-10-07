add_library(pac-scl3300 INTERFACE)

target_sources(pac-scl3300 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SCL3300/src/SCL3300.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SCL3300/src/SCL3300.h"
)

target_include_directories(pac-scl3300 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SCL3300/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-scl3300 INTERFACE
    arduino-compat
)
