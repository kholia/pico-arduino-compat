add_library(pac-switch2_lib INTERFACE)

target_sources(pac-switch2_lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Switch2_Lib/Switcher2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Switch2_Lib/Switcher2.h"
)

target_include_directories(pac-switch2_lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Switch2_Lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-switch2_lib INTERFACE
    arduino-compat
)
