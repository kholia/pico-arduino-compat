add_library(liquidcrystalio INTERFACE)

target_sources(liquidcrystalio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystalIO/src/LiquidCrystalIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystalIO/examples/helloMbed/helloMbed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystalIO/src/LiquidCrystalIO.h"
)

target_include_directories(liquidcrystalio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystalIO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(liquidcrystalio INTERFACE
    arduino-compat
)
