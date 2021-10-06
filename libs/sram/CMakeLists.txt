add_library(sram INTERFACE)

target_sources(sram INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sram/sram.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sram/sram.h"
)

target_include_directories(sram INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sram"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sram INTERFACE
    arduino-compat
)
