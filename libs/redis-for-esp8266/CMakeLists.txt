add_library(redis-for-esp8266 INTERFACE)

target_sources(redis-for-esp8266 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-redis/Redis.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-redis/Redis.h"
)

target_include_directories(redis-for-esp8266 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp8266-redis"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(redis-for-esp8266 INTERFACE
    arduino-compat
)
