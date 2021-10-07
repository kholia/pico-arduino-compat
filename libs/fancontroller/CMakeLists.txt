add_library(pac-fancontroller INTERFACE)

target_sources(pac-fancontroller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FanController/FanController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FanController/FanController.h"
)

target_include_directories(pac-fancontroller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FanController"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fancontroller INTERFACE
    arduino-compat
)
