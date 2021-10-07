add_library(pac-liquidcrystal INTERFACE)

target_sources(pac-liquidcrystal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal/src/LiquidCrystal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal/src/LiquidCrystal.h"
)

target_include_directories(pac-liquidcrystal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-liquidcrystal INTERFACE
    arduino-compat
)
