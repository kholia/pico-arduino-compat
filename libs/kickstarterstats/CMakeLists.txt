add_library(kickstarterstats INTERFACE)

target_sources(kickstarterstats INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-kickstarter-stats/src/KickstarterStats.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-kickstarter-stats/src/KickstarterStats.h"
)

target_include_directories(kickstarterstats INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-kickstarter-stats/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(kickstarterstats INTERFACE
    arduino-compat
)
