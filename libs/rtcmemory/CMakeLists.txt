add_library(rtcmemory INTERFACE)

target_sources(rtcmemory INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rtcmemory/src/rtc_memory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rtcmemory/src/rtc_memory.h"
)

target_include_directories(rtcmemory INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rtcmemory/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rtcmemory INTERFACE
    arduino-compat
)
