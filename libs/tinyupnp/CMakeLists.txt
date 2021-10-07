add_library(pac-tinyupnp INTERFACE)

target_sources(pac-tinyupnp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyUPnP/src/TinyUPnP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyUPnP/src/TinyUPnP.h"
)

target_include_directories(pac-tinyupnp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyUPnP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinyupnp INTERFACE
    arduino-compat
)
