add_library(pac-litswitch INTERFACE)

target_sources(pac-litswitch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LitSwitch/LitSwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LitSwitch/LitSwitch.h"
)

target_include_directories(pac-litswitch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LitSwitch"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-litswitch INTERFACE
    arduino-compat
)
