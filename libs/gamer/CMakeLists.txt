add_library(gamer INTERFACE)

target_sources(gamer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Gamer/Gamer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gamer/Gamer.h"
)

target_include_directories(gamer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Gamer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gamer INTERFACE
    arduino-compat
)
