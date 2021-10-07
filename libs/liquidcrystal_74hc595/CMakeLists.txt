add_library(pac-liquidcrystal_74hc595 INTERFACE)

target_sources(pac-liquidcrystal_74hc595 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_74HC595/src/LiquidCrystal_74HC595.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_74HC595/src/LiquidCrystal_74HC595.h"
)

target_include_directories(pac-liquidcrystal_74hc595 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_74HC595/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-liquidcrystal_74hc595 INTERFACE
    arduino-compat
)
