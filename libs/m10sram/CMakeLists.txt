add_library(m10sram INTERFACE)

target_sources(m10sram INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10SRAM/src/M10SRAM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10SRAM/src/M10SRAM.h"
)

target_include_directories(m10sram INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10SRAM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m10sram INTERFACE
    arduino-compat
)
