add_library(litswitch INTERFACE)

target_sources(litswitch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LitSwitch/LitSwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LitSwitch/LitSwitch.h"
)

target_include_directories(litswitch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LitSwitch"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(litswitch INTERFACE
    arduino-compat
)
