add_library(rc-switch INTERFACE)

target_sources(rc-switch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rc-switch/RCSwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rc-switch/RCSwitch.h"
)

target_include_directories(rc-switch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rc-switch"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rc-switch INTERFACE
    arduino-compat
)
