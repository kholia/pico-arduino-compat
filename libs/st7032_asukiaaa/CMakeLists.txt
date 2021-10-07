add_library(pac-st7032_asukiaaa INTERFACE)

target_sources(pac-st7032_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ST7032_asukiaaa/src/ST7032_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ST7032_asukiaaa/src/ST7032_asukiaaa.h"
)

target_include_directories(pac-st7032_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ST7032_asukiaaa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-st7032_asukiaaa INTERFACE
    arduino-compat
)
