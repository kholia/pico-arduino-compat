add_library(sram_23lc INTERFACE)

target_sources(sram_23lc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SRAM_23LC/src/SRAM_23LC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SRAM_23LC/src/SRAM_23LC.h"
)

target_include_directories(sram_23lc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SRAM_23LC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sram_23lc INTERFACE
    arduino-compat
)
