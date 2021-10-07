add_library(pac-rtcvars INTERFACE)

target_sources(pac-rtcvars INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rtcvars/RTCVars.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rtcvars/RTCVars.h"
)

target_include_directories(pac-rtcvars INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rtcvars"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtcvars INTERFACE
    arduino-compat
)
