add_library(pac-tactnecklace INTERFACE)

target_sources(pac-tactnecklace INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Tactile-Necklace/AccelTact.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tactile-Necklace/TactNecklace.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tactile-Necklace/UltrasonicTact.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tactile-Necklace/AccelTact.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tactile-Necklace/UltrasonicTact.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tactile-Necklace/TactNecklace.h"
)

target_include_directories(pac-tactnecklace INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Tactile-Necklace"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tactnecklace INTERFACE
    arduino-compat
)
