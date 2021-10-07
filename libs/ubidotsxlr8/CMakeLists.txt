add_library(pac-ubidotsxlr8 INTERFACE)

target_sources(pac-ubidotsxlr8 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UbidotsXLR8/src/UbidotsXLR8.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UbidotsXLR8/src/UbidotsXLR8.h"
)

target_include_directories(pac-ubidotsxlr8 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UbidotsXLR8/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ubidotsxlr8 INTERFACE
    arduino-compat
)
