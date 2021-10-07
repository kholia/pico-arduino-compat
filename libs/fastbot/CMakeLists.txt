add_library(pac-fastbot INTERFACE)

target_sources(pac-fastbot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastBot/src/FastBot.h"
)

target_include_directories(pac-fastbot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastBot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fastbot INTERFACE
    arduino-compat
)
