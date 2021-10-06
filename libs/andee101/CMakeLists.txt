add_library(andee101 INTERFACE)

target_sources(andee101 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Andee101/src/Andee101.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Andee101/src/Andee101.h"
)

target_include_directories(andee101 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Andee101/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(andee101 INTERFACE
    arduino-compat
)
