add_library(rtccounter INTERFACE)

target_sources(rtccounter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTCCounter/src/RTCCounter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTCCounter/src/RTCCounter.h"
)

target_include_directories(rtccounter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTCCounter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rtccounter INTERFACE
    arduino-compat
)
