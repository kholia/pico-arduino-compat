add_library(tinyliquidcrystal INTERFACE)

target_sources(tinyliquidcrystal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyLiquidCrystal/TinyAdafruit_MCP23008.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyLiquidCrystal/TinyLiquidCrystal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyLiquidCrystal/TinyAdafruit_MCP23008.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyLiquidCrystal/TinyLiquidCrystal.h"
)

target_include_directories(tinyliquidcrystal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyLiquidCrystal"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinyliquidcrystal INTERFACE
    arduino-compat
)
