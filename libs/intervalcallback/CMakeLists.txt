add_library(intervalcallback INTERFACE)

target_sources(intervalcallback INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/interval-callback/src/IntervalCallback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/interval-callback/src/IntervalCallback.h"
)

target_include_directories(intervalcallback INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/interval-callback/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(intervalcallback INTERFACE
    arduino-compat
)
