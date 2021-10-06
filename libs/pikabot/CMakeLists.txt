add_library(pikabot INTERFACE)

target_sources(pikabot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PikaBot/src/PikaBot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PikaBot/src/PikaBot.h"
)

target_include_directories(pikabot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PikaBot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pikabot INTERFACE
    arduino-compat
)
