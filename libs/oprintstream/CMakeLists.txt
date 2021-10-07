add_library(pac-oprintstream INTERFACE)

target_sources(pac-oprintstream INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ad-oprintstream/include/oprintstream.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ad-oprintstream/src/oprintstream.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ad-oprintstream/examples/inheritance/src/logger.hpp"
)

target_include_directories(pac-oprintstream INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ad-oprintstream/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-oprintstream INTERFACE
    arduino-compat
)
