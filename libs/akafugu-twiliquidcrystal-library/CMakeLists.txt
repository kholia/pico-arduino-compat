add_library(pac-akafugu-twiliquidcrystal-library INTERFACE)

target_sources(pac-akafugu-twiliquidcrystal-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TWILiquidCrystalLibrary/TWILiquidCrystal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TWILiquidCrystalLibrary/TWILiquidCrystal.h"
)

target_include_directories(pac-akafugu-twiliquidcrystal-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TWILiquidCrystalLibrary"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-akafugu-twiliquidcrystal-library INTERFACE
    arduino-compat
)
