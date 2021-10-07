add_library(pac-directtimers INTERFACE)

target_sources(pac-directtimers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/directTimers/src/directTimers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/directTimers/src/directTimers.h"
)

target_include_directories(pac-directtimers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/directTimers/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-directtimers INTERFACE
    arduino-compat
)
