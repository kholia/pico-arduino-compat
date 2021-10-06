add_library(ghaemshopsmsim INTERFACE)

target_sources(ghaemshopsmsim INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ghaemShopSmSim/src/ghaemShopSmSim.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ghaemShopSmSim/src/ghaemShopSmSim.h"
)

target_include_directories(ghaemshopsmsim INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ghaemShopSmSim/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ghaemshopsmsim INTERFACE
    arduino-compat
)
