add_library(rtclib INTERFACE)

target_sources(rtclib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTClib/src/RTClib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTClib/src/RTClib.h"
)

target_include_directories(rtclib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTClib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rtclib INTERFACE
    arduino-compat
)
