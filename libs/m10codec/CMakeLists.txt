add_library(m10codec INTERFACE)

target_sources(m10codec INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10CODEC/src/M10CODEC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10CODEC/src/M10CODEC.h"
)

target_include_directories(m10codec INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10CODEC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m10codec INTERFACE
    arduino-compat
)
