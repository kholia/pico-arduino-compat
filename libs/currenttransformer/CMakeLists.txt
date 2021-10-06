add_library(currenttransformer INTERFACE)

target_sources(currenttransformer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CurrentTransformer/src/CurrentTransformer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CurrentTransformer/src/CurrentTransformer.h"
  "${CMAKE_CURRENT_LIST_DIR}/CurrentTransformer/examples/gsCurrentSensor/classes.h"
)

target_include_directories(currenttransformer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CurrentTransformer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(currenttransformer INTERFACE
    arduino-compat
)
