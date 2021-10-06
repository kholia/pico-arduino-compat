add_library(liquidcrystal INTERFACE)

target_sources(liquidcrystal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal/src/LiquidCrystal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal/src/LiquidCrystal.h"
)

target_include_directories(liquidcrystal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(liquidcrystal INTERFACE
    arduino-compat
    official-liquid-crystal
)
