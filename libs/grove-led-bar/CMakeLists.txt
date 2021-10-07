add_library(pac-grove-led-bar INTERFACE)

target_sources(pac-grove-led-bar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LED_Bar/Grove_LED_Bar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LED_Bar/Grove_LED_Bar.h"
)

target_include_directories(pac-grove-led-bar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_LED_Bar"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-led-bar INTERFACE
    arduino-compat
)
