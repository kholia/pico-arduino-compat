add_library(pac-slight_liquidcrystaldummy INTERFACE)

target_sources(pac-slight_liquidcrystaldummy INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/slight_LiquidCrystalDummy/src/slight_LiquidCrystalDummy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/slight_LiquidCrystalDummy/src/slight_LiquidCrystalDummy.h"
)

target_include_directories(pac-slight_liquidcrystaldummy INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/slight_LiquidCrystalDummy/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-slight_liquidcrystaldummy INTERFACE
    arduino-compat
    pac-liquidcrystal
)
