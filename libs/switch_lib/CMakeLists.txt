add_library(pac-switch_lib INTERFACE)

target_sources(pac-switch_lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Switch_lib/Switcher.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Switch_lib/Switcher.h"
)

target_include_directories(pac-switch_lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Switch_lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-switch_lib INTERFACE
    arduino-compat
)
