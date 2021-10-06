add_library(official-liquid-crystal INTERFACE)

target_sources(official-liquid-crystal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal/src/LiquidCrystal.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal/src/LiquidCrystal.cpp"
)

target_include_directories(official-liquid-crystal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(official-liquid-crystal INTERFACE
    arduino-compat
)
