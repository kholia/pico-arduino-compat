add_library(twitterapi INTERFACE)

target_sources(twitterapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-twitter-api/src/TwitterApi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-twitter-api/src/TwitterBearerToken.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-twitter-api/src/TwitterBearerToken.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-twitter-api/src/TwitterApi.h"
)

target_include_directories(twitterapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-twitter-api/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(twitterapi INTERFACE
    arduino-compat
)
