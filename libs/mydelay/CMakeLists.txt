add_library(pac-mydelay INTERFACE)

target_sources(pac-mydelay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MyDelay/src/MyDelay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MyDelay/src/MyDelay.h"
)

target_include_directories(pac-mydelay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MyDelay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mydelay INTERFACE
    arduino-compat
)
