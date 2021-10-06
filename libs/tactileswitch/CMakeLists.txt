add_library(tactileswitch INTERFACE)

target_sources(tactileswitch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IGB-Tactile-Switch/src/TactileSwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IGB-Tactile-Switch/src/TactileSwitch.h"
)

target_include_directories(tactileswitch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IGB-Tactile-Switch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tactileswitch INTERFACE
    arduino-compat
)
