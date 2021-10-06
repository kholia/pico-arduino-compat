add_library(nonblockingrtttl INTERFACE)

target_sources(nonblockingrtttl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NonBlockingRTTTL/src/NonBlockingRtttl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NonBlockingRTTTL/src/NonBlockingRtttl.h"
)

target_include_directories(nonblockingrtttl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NonBlockingRTTTL/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nonblockingrtttl INTERFACE
    arduino-compat
)
