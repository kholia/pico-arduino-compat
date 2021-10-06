add_library(switch INTERFACE)

target_sources(switch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/avdweb_Switch/avdweb_Switch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avdweb_Switch/avdweb_Switch.h"
)

target_include_directories(switch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/avdweb_Switch"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(switch INTERFACE
    arduino-compat
)
