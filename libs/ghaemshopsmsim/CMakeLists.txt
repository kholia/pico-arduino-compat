add_library(pac-ghaemshopsmsim INTERFACE)

target_sources(pac-ghaemshopsmsim INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ghaemShopSmSim/src/ghaemShopSmSim.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ghaemShopSmSim/src/ghaemShopSmSim.h"
)

target_include_directories(pac-ghaemshopsmsim INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ghaemShopSmSim/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ghaemshopsmsim INTERFACE
    arduino-compat
)
