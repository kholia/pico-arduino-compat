add_library(pac-pololumenu INTERFACE)

target_sources(pac-pololumenu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pololu-menu-arduino/src/PololuMenu.h"
)

target_include_directories(pac-pololumenu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pololu-menu-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pololumenu INTERFACE
    arduino-compat
)
