add_library(pac-sram INTERFACE)

target_sources(pac-sram INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sram/sram.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sram/sram.h"
)

target_include_directories(pac-sram INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sram"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sram INTERFACE
    arduino-compat
)
