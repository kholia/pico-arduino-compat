add_library(andee INTERFACE)

target_sources(andee INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Andee/src/Andee.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Andee/src/Andee.h"
)

target_include_directories(andee INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Andee/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(andee INTERFACE
    arduino-compat
)
