add_library(liquidcrystalwired INTERFACE)

target_sources(liquidcrystalwired INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-LiquidCrystalWired/src/LiquidCrystalWired.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-LiquidCrystalWired/src/LiquidCrystalWired.h"
)

target_include_directories(liquidcrystalwired INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-LiquidCrystalWired/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(liquidcrystalwired INTERFACE
    arduino-compat
)
