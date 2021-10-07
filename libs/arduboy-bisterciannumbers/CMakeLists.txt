add_library(pac-arduboy-bisterciannumbers INTERFACE)

target_sources(pac-arduboy-bisterciannumbers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy-BistercianNumbers/src/Bistercian.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy-BistercianNumbers/src/Bistercian.h"
)

target_include_directories(pac-arduboy-bisterciannumbers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduboy-BistercianNumbers/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduboy-bisterciannumbers INTERFACE
    arduino-compat
)
