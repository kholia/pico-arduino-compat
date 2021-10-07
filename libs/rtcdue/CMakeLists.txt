add_library(pac-rtcdue INTERFACE)

target_sources(pac-rtcdue INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTCDue/src/RTCDue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTCDue/src/RTCDue.h"
)

target_include_directories(pac-rtcdue INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTCDue/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtcdue INTERFACE
    arduino-compat
)
