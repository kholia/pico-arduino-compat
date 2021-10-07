add_library(pac-parser INTERFACE)

target_sources(pac-parser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Parser/src/ParserLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Parser/src/ParserLib.h"
)

target_include_directories(pac-parser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Parser/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-parser INTERFACE
    arduino-compat
)
