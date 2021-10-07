add_library(pac-microwire INTERFACE)

target_sources(pac-microwire INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/microWire/src/microWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/microWire/src/microWire.h"
)

target_include_directories(pac-microwire INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/microWire/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-microwire INTERFACE
    arduino-compat
)
