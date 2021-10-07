add_library(pac-morebot-games-library INTERFACE)

target_sources(pac-morebot-games-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MOREbot_Games/src/gamesKit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MOREbot_Games/src/oLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MOREbot_Games/src/gamesKit.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOREbot_Games/src/oLED.h"
)

target_include_directories(pac-morebot-games-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MOREbot_Games/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-morebot-games-library INTERFACE
    arduino-compat
)
