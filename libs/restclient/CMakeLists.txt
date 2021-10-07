add_library(pac-restclient INTERFACE)

target_sources(pac-restclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RESTClient/src/RESTClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RESTClient/src/RESTClient.h"
)

target_include_directories(pac-restclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RESTClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-restclient INTERFACE
    arduino-compat
)
