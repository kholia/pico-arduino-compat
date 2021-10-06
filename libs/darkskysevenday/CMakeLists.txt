add_library(darkskysevenday INTERFACE)

target_sources(darkskysevenday INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DarkSkySevenDay/src/DarkSkySevenDay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DarkSkySevenDay/src/DarkSkySevenDay.h"
)

target_include_directories(darkskysevenday INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DarkSkySevenDay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(darkskysevenday INTERFACE
    arduino-compat
)
