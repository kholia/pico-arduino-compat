add_library(fastbot INTERFACE)

target_sources(fastbot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastBot/src/FastBot.h"
)

target_include_directories(fastbot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastBot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fastbot INTERFACE
    arduino-compat
)
