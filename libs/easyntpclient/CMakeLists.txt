add_library(easyntpclient INTERFACE)

target_sources(easyntpclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyNTPClient/src/EasyNTPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyNTPClient/src/EasyNTPClient.h"
)

target_include_directories(easyntpclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyNTPClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easyntpclient INTERFACE
    arduino-compat
)
