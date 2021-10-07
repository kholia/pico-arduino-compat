add_library(pac-ibot INTERFACE)

target_sources(pac-ibot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IBot/src/IBot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IBot/src/IBot.h"
)

target_include_directories(pac-ibot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IBot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ibot INTERFACE
    arduino-compat
)
