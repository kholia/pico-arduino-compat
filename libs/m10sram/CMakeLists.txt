add_library(pac-m10sram INTERFACE)

target_sources(pac-m10sram INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10SRAM/src/M10SRAM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10SRAM/src/M10SRAM.h"
)

target_include_directories(pac-m10sram INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10SRAM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-m10sram INTERFACE
    arduino-compat
)
