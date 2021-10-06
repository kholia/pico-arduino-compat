add_library(ezprom INTERFACE)

target_sources(ezprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EZPROM/src/EZPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EZPROM/src/EZPROM.h"
)

target_include_directories(ezprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EZPROM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ezprom INTERFACE
    arduino-compat
)
