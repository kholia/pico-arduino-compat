add_library(pac-easyntpclient INTERFACE)

target_sources(pac-easyntpclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyNTPClient/src/EasyNTPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyNTPClient/src/EasyNTPClient.h"
)

target_include_directories(pac-easyntpclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyNTPClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easyntpclient INTERFACE
    arduino-compat
)
