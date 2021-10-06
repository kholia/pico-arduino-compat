add_library(ubidotsxlr8 INTERFACE)

target_sources(ubidotsxlr8 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UbidotsXLR8/src/UbidotsXLR8.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UbidotsXLR8/src/UbidotsXLR8.h"
)

target_include_directories(ubidotsxlr8 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UbidotsXLR8/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ubidotsxlr8 INTERFACE
    arduino-compat
)
