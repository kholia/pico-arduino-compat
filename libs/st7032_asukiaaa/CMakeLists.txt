add_library(st7032_asukiaaa INTERFACE)

target_sources(st7032_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ST7032_asukiaaa/src/ST7032_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ST7032_asukiaaa/src/ST7032_asukiaaa.h"
)

target_include_directories(st7032_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ST7032_asukiaaa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(st7032_asukiaaa INTERFACE
    arduino-compat
)
