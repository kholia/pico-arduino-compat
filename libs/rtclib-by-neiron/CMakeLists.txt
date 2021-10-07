add_library(pac-rtclib-by-neiron INTERFACE)

target_sources(pac-rtclib-by-neiron INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTCLib/src/RTClib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTCLib/src/RTClib.h"
)

target_include_directories(pac-rtclib-by-neiron INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTCLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtclib-by-neiron INTERFACE
    arduino-compat
)
