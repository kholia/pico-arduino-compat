add_library(pololumenu INTERFACE)

target_sources(pololumenu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pololu-menu-arduino/src/PololuMenu.h"
)

target_include_directories(pololumenu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pololu-menu-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pololumenu INTERFACE
    arduino-compat
)
