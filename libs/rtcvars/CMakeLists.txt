add_library(rtcvars INTERFACE)

target_sources(rtcvars INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rtcvars/RTCVars.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rtcvars/RTCVars.h"
)

target_include_directories(rtcvars INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rtcvars"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rtcvars INTERFACE
    arduino-compat
)
