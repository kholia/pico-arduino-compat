add_library(pac-currenttransformer INTERFACE)

target_sources(pac-currenttransformer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CurrentTransformer/src/CurrentTransformer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CurrentTransformer/src/CurrentTransformer.h"
  "${CMAKE_CURRENT_LIST_DIR}/CurrentTransformer/examples/gsCurrentSensor/classes.h"
)

target_include_directories(pac-currenttransformer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CurrentTransformer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-currenttransformer INTERFACE
    arduino-compat
)
