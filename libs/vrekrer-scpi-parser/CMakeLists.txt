add_library(vrekrer-scpi-parser INTERFACE)

target_sources(vrekrer-scpi-parser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Vrekrer_scpi_parser/src/Vrekrer_scpi_parser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Vrekrer_scpi_parser/src/Vrekrer_scpi_parser.h"
)

target_include_directories(vrekrer-scpi-parser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Vrekrer_scpi_parser/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vrekrer-scpi-parser INTERFACE
    arduino-compat
)
