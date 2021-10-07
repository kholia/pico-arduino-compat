add_library(pac-throttle INTERFACE)

target_sources(pac-throttle INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Throttle/src/Throttle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Throttle/src/Throttle.h"
)

target_include_directories(pac-throttle INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Throttle/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-throttle INTERFACE
    arduino-compat
)
