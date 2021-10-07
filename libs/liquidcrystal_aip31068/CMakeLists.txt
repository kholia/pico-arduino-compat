add_library(pac-liquidcrystal_aip31068 INTERFACE)

target_sources(pac-liquidcrystal_aip31068 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_AIP31068/LiquidCrystal_AIP31068_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_AIP31068/LiquidCrystal_AIP31068_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_AIP31068/LiquidCrystal_AIP31068_SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_AIP31068/LiquidCrystal_AIP31068_I2C.h"
)

target_include_directories(pac-liquidcrystal_aip31068 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_AIP31068"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-liquidcrystal_aip31068 INTERFACE
    arduino-compat
)
