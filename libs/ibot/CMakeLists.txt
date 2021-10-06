add_library(ibot INTERFACE)

target_sources(ibot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IBot/src/IBot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IBot/src/IBot.h"
)

target_include_directories(ibot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IBot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ibot INTERFACE
    arduino-compat
)
