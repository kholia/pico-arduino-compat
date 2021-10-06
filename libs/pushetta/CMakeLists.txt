add_library(pushetta INTERFACE)

target_sources(pushetta INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pushetta-lib/src/Pushetta.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pushetta-lib/src/Pushetta.h"
)

target_include_directories(pushetta INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-pushetta-lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pushetta INTERFACE
    arduino-compat
)
