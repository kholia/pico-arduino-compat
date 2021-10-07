add_library(pac-gamer INTERFACE)

target_sources(pac-gamer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Gamer/Gamer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gamer/Gamer.h"
)

target_include_directories(pac-gamer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Gamer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gamer INTERFACE
    arduino-compat
)
