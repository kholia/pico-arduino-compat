add_library(asyncliquidcrystal INTERFACE)

target_sources(asyncliquidcrystal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AsyncLiquidCrystal/src/AsyncLiquidCrystal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_AsyncLiquidCrystal/src/AsyncLiquidCrystal.h"
)

target_include_directories(asyncliquidcrystal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_AsyncLiquidCrystal/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asyncliquidcrystal INTERFACE
    arduino-compat
)
