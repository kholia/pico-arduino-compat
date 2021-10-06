add_library(rtcx INTERFACE)

target_sources(rtcx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTCx/src/RTCx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTCx/src/RTCx.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTCx/examples/Calendar_test/custom_include.h"
)

target_include_directories(rtcx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTCx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rtcx INTERFACE
    arduino-compat
)
