add_library(pac-tinymegai2c INTERFACE)

target_sources(pac-tinymegai2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyMegaI2C/src/TinyMegaI2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyMegaI2C/src/TinyMegaI2C.h"
)

target_include_directories(pac-tinymegai2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyMegaI2C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinymegai2c INTERFACE
    arduino-compat
)
