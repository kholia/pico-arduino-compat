add_library(pac-simplerotary INTERFACE)

target_sources(pac-simplerotary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleRotary/src/SimpleRotary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleRotary/src/SimpleRotary.h"
)

target_include_directories(pac-simplerotary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleRotary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simplerotary INTERFACE
    arduino-compat
)
