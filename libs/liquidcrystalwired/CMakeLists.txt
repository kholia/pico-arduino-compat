add_library(pac-liquidcrystalwired INTERFACE)

target_sources(pac-liquidcrystalwired INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-LiquidCrystalWired/src/LiquidCrystalWired.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-LiquidCrystalWired/src/LiquidCrystalWired.h"
)

target_include_directories(pac-liquidcrystalwired INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-LiquidCrystalWired/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-liquidcrystalwired INTERFACE
    arduino-compat
)
