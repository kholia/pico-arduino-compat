add_library(mrm-switch INTERFACE)

target_sources(mrm-switch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-switch/src/mrm-switch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-switch/src/mrm-switch.h"
)

target_include_directories(mrm-switch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-switch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mrm-switch INTERFACE
    arduino-compat
)
