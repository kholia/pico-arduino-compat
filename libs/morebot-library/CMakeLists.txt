add_library(pac-morebot-library INTERFACE)

target_sources(pac-morebot-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MOREbot_Library/src/MOREbot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MOREbot_Library/src/MOREbot.h"
)

target_include_directories(pac-morebot-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MOREbot_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-morebot-library INTERFACE
    arduino-compat
)
