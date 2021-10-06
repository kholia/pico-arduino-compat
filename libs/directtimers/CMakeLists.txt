add_library(directtimers INTERFACE)

target_sources(directtimers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/directTimers/src/directTimers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/directTimers/src/directTimers.h"
)

target_include_directories(directtimers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/directTimers/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(directtimers INTERFACE
    arduino-compat
)
