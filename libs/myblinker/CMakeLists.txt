add_library(pac-myblinker INTERFACE)

target_sources(pac-myblinker INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MyBlinker/MyBlinker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MyBlinker/MyBlinker.h"
)

target_include_directories(pac-myblinker INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MyBlinker"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-myblinker INTERFACE
    arduino-compat
)
