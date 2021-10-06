add_library(slight_liquidcrystaldummy INTERFACE)

target_sources(slight_liquidcrystaldummy INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/slight_LiquidCrystalDummy/src/slight_LiquidCrystalDummy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/slight_LiquidCrystalDummy/src/slight_LiquidCrystalDummy.h"
)

target_include_directories(slight_liquidcrystaldummy INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/slight_LiquidCrystalDummy/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(slight_liquidcrystaldummy INTERFACE
    arduino-compat
    official-liquid-crystal
)
