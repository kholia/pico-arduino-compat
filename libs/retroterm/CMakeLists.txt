add_library(retroterm INTERFACE)

target_sources(retroterm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/retroTerm/src/retroTerm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/retroTerm/src/retroTerm.h"
)

target_include_directories(retroterm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/retroTerm/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(retroterm INTERFACE
    arduino-compat
)
