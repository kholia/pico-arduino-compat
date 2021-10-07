add_library(pac-redis-for-arduino INTERFACE)

target_sources(pac-redis-for-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-redis/RedisInternal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-redis/Redis.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-redis/RedisInternal.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-redis/Redis.h"
)

target_include_directories(pac-redis-for-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-redis"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-redis-for-arduino INTERFACE
    arduino-compat
)
