add_library(pac-youtubeapi INTERFACE)

target_sources(pac-youtubeapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-youtube-api/src/YoutubeApi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-youtube-api/src/YoutubeApi.h"
)

target_include_directories(pac-youtubeapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-youtube-api/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-youtubeapi INTERFACE
    arduino-compat
)
