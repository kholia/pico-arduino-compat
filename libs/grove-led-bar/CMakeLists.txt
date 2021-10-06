add_library(grove-led-bar INTERFACE)

target_sources(grove-led-bar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LED_Bar/Grove_LED_Bar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LED_Bar/Grove_LED_Bar.h"
)

target_include_directories(grove-led-bar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_LED_Bar"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-led-bar INTERFACE
    arduino-compat
)
