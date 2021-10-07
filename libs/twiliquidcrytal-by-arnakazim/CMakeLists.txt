add_library(pac-twiliquidcrytal-by-arnakazim INTERFACE)

target_sources(pac-twiliquidcrytal-by-arnakazim INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TwiLiquidCrystal-library/TwiLiquidCrystal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TwiLiquidCrystal-library/TwiLiquidCrystal.h"
)

target_include_directories(pac-twiliquidcrytal-by-arnakazim INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TwiLiquidCrystal-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-twiliquidcrytal-by-arnakazim INTERFACE
    arduino-compat
)
