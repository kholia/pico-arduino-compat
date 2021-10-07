add_library(pac-bitbool INTERFACE)

target_sources(pac-bitbool INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BitBool/BitBool.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BitBool/BitBool.h"
)

target_include_directories(pac-bitbool INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BitBool"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bitbool INTERFACE
    arduino-compat
)
