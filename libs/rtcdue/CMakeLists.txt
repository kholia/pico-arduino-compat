add_library(rtcdue INTERFACE)

target_sources(rtcdue INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTCDue/src/RTCDue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTCDue/src/RTCDue.h"
)

target_include_directories(rtcdue INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTCDue/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rtcdue INTERFACE
    arduino-compat
)
