add_library(pac-rtccounter INTERFACE)

target_sources(pac-rtccounter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTCCounter/src/RTCCounter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTCCounter/src/RTCCounter.h"
)

target_include_directories(pac-rtccounter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTCCounter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtccounter INTERFACE
    arduino-compat
)
