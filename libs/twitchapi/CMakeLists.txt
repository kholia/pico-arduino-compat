add_library(twitchapi INTERFACE)

target_sources(twitchapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_twitch_api/src/TwitchApi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_twitch_api/src/TwitchApi.h"
)

target_include_directories(twitchapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_twitch_api/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(twitchapi INTERFACE
    arduino-compat
)
