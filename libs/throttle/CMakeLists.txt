add_library(throttle INTERFACE)

target_sources(throttle INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Throttle/src/Throttle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Throttle/src/Throttle.h"
)

target_include_directories(throttle INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Throttle/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(throttle INTERFACE
    arduino-compat
)
