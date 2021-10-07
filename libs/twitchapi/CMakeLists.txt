add_library(pac-twitchapi INTERFACE)

target_sources(pac-twitchapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_twitch_api/src/TwitchApi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_twitch_api/src/TwitchApi.h"
)

target_include_directories(pac-twitchapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_twitch_api/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-twitchapi INTERFACE
    arduino-compat
)
