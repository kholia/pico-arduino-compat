add_library(pac-rtcmemory INTERFACE)

target_sources(pac-rtcmemory INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rtcmemory/src/rtc_memory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rtcmemory/src/rtc_memory.h"
)

target_include_directories(pac-rtcmemory INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rtcmemory/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtcmemory INTERFACE
    arduino-compat
)
