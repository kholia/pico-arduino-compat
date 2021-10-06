add_library(parser INTERFACE)

target_sources(parser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Parser/src/ParserLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Parser/src/ParserLib.h"
)

target_include_directories(parser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Parser/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(parser INTERFACE
    arduino-compat
)
