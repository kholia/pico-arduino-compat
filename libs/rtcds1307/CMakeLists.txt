add_library(pac-rtcds1307 INTERFACE)

target_sources(pac-rtcds1307 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTCDS1307/RTCDS1307.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTCDS1307/RTCDS1307.h"
)

target_include_directories(pac-rtcds1307 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTCDS1307"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtcds1307 INTERFACE
    arduino-compat
)
