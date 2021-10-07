add_library(pac-troykai2chub INTERFACE)

target_sources(pac-troykai2chub INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TroykaI2CHub/src/TroykaI2CHub.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TroykaI2CHub/src/TroykaI2CHub.h"
)

target_include_directories(pac-troykai2chub INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TroykaI2CHub/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-troykai2chub INTERFACE
    arduino-compat
)
