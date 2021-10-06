add_library(timeoutcallback INTERFACE)

target_sources(timeoutcallback INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/timeout-callback/src/TimeoutCallback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/timeout-callback/src/TimeoutCallback.h"
)

target_include_directories(timeoutcallback INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/timeout-callback/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(timeoutcallback INTERFACE
    arduino-compat
)
