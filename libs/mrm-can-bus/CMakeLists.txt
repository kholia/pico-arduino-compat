add_library(pac-mrm-can-bus INTERFACE)

target_sources(pac-mrm-can-bus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-can-bus/src/mrm-can-bus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-can-bus/src/mrm-can-bus.h"
)

target_include_directories(pac-mrm-can-bus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-can-bus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-can-bus INTERFACE
    arduino-compat
)
