add_library(pac-rtctimer INTERFACE)

target_sources(pac-rtctimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTCTimer/src/RTCTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTCTimer/src/RTCTimer.h"
)

target_include_directories(pac-rtctimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTCTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtctimer INTERFACE
    arduino-compat
)
