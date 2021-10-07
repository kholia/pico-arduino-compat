add_library(pac-ezprom INTERFACE)

target_sources(pac-ezprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EZPROM/src/EZPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EZPROM/src/EZPROM.h"
)

target_include_directories(pac-ezprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EZPROM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ezprom INTERFACE
    arduino-compat
)
