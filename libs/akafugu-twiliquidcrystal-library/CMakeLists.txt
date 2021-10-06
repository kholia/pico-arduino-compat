add_library(akafugu-twiliquidcrystal-library INTERFACE)

target_sources(akafugu-twiliquidcrystal-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TWILiquidCrystalLibrary/TWILiquidCrystal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TWILiquidCrystalLibrary/TWILiquidCrystal.h"
)

target_include_directories(akafugu-twiliquidcrystal-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TWILiquidCrystalLibrary"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(akafugu-twiliquidcrystal-library INTERFACE
    arduino-compat
)
