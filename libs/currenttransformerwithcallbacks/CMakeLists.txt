add_library(currenttransformerwithcallbacks INTERFACE)

target_sources(currenttransformerwithcallbacks INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CurrentTransformerWithCallbacks/src/CurrentTransformer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CurrentTransformerWithCallbacks/src/CurrentTransformer.h"
)

target_include_directories(currenttransformerwithcallbacks INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CurrentTransformerWithCallbacks/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(currenttransformerwithcallbacks INTERFACE
    arduino-compat
)
