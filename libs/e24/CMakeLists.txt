add_library(e24 INTERFACE)

target_sources(e24 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-e24/src/E24.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-e24/src/E24.h"
)

target_include_directories(e24 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-e24/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(e24 INTERFACE
    arduino-compat
)
