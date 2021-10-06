add_library(mrm-can-bus INTERFACE)

target_sources(mrm-can-bus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-can-bus/src/mrm-can-bus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-can-bus/src/mrm-can-bus.h"
)

target_include_directories(mrm-can-bus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-can-bus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mrm-can-bus INTERFACE
    arduino-compat
)
