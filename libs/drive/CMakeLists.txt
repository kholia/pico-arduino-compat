add_library(drive INTERFACE)

target_sources(drive INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Drive/Drive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Drive/Drive.h"
)

target_include_directories(drive INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Drive"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(drive INTERFACE
    arduino-compat
)
