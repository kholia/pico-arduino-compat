add_library(pac-darkskysevenday INTERFACE)

target_sources(pac-darkskysevenday INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DarkSkySevenDay/src/DarkSkySevenDay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DarkSkySevenDay/src/DarkSkySevenDay.h"
)

target_include_directories(pac-darkskysevenday INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DarkSkySevenDay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-darkskysevenday INTERFACE
    arduino-compat
)
