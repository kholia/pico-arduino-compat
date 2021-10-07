add_library(pac-timeoutcallback INTERFACE)

target_sources(pac-timeoutcallback INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/timeout-callback/src/TimeoutCallback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/timeout-callback/src/TimeoutCallback.h"
)

target_include_directories(pac-timeoutcallback INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/timeout-callback/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-timeoutcallback INTERFACE
    arduino-compat
)
