add_library(instagramstats INTERFACE)

target_sources(instagramstats INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-instagram-stats/src/InstagramStats.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-instagram-stats/src/InstagramStats.h"
)

target_include_directories(instagramstats INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-instagram-stats/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(instagramstats INTERFACE
    arduino-compat
)
