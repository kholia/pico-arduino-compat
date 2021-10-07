add_library(pac-liquidcrystal_pcf8574 INTERFACE)

target_sources(pac-liquidcrystal_pcf8574 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_PCF8574/src/LiquidCrystal_PCF8574.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_PCF8574/src/LiquidCrystal_PCF8574.h"
)

target_include_directories(pac-liquidcrystal_pcf8574 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_PCF8574/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-liquidcrystal_pcf8574 INTERFACE
    arduino-compat
)
