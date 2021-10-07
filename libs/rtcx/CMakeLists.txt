add_library(pac-rtcx INTERFACE)

target_sources(pac-rtcx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTCx/src/RTCx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTCx/src/RTCx.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTCx/examples/Calendar_test/custom_include.h"
)

target_include_directories(pac-rtcx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTCx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtcx INTERFACE
    arduino-compat
)
