add_library(pac-mrm-switch INTERFACE)

target_sources(pac-mrm-switch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-switch/src/mrm-switch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-switch/src/mrm-switch.h"
)

target_include_directories(pac-mrm-switch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-switch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-switch INTERFACE
    arduino-compat
)
