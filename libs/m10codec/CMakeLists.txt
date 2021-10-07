add_library(pac-m10codec INTERFACE)

target_sources(pac-m10codec INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10CODEC/src/M10CODEC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10CODEC/src/M10CODEC.h"
)

target_include_directories(pac-m10codec INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10CODEC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-m10codec INTERFACE
    arduino-compat
)
